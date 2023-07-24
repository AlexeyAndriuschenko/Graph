#include "MainForm.h"
#include "functions.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>


System::Windows::Forms::DataVisualization::Charting::Series^ AddSeries(System::Drawing::Color color, System::String^ name) {
    System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
    series->BorderWidth = 3;
    series->ChartArea = L"ChartArea1";
    series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
    series->Color = color;
    series->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
    //series->IsValueShownAsLabel = true;
    series->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    series->Legend = L"Legend";
    series->Name = name;
    return series;
}


System::Void GraphsWinForms::MainForm::add_graph_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->openFileDialog->ShowDialog() == Windows::Forms::DialogResult::Cancel)
        return;
    std::string fileName = msclr::interop::marshal_as<std::string>(this->openFileDialog->FileName);
    std::ifstream fin(fileName);
    if (!fin.is_open())
    {
        MessageBox::Show("Error!", "Warning!");
        return;
    }
    char graphsName[255];
    fin.getline(graphsName, sizeof(graphsName));
    auto series = AddSeries(this->lineColor, gcnew System::String(graphsName));
    std::string value;
    while (!fin.eof()) {
        fin >> value;
        x = std::stod(value);
        fin >> value;
        y = std::stod(value);
        series->Points->AddXY(x, y);
    }
    addGraph(series);
    fin.close();
}

System::Void GraphsWinForms::MainForm::colorLinePanel_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->colorLineDialog->ShowDialog() == Windows::Forms::DialogResult::Cancel)
        return;
    this->lineColor = this->colorLineDialog->Color;
    this->colorLinePanel->BackColor = this->lineColor;
}

System::Void GraphsWinForms::MainForm::addGraph(System::Windows::Forms::DataVisualization::Charting::Series^ series)
{
    this->chart->Series->Add(series);
    this->GraphsList->Items->Add(series->Name);
    this->chart->Refresh();
}

System::Void GraphsWinForms::MainForm::removeGraph()
{
    if (this->GraphsList->Items->Count == 0)
    {
        MessageBox::Show("No drawn charts!", "Warning!");
        return;
    }
    if (this->GraphsList->SelectedItem == nullptr)
    {
        MessageBox::Show("Please, selected graph!", "Warning!"); 
        return;
    }
    this->chart->Series->Remove(this->chart->Series->FindByName(this->GraphsList->SelectedItem->ToString()));
    this->GraphsList->Items->Remove(this->GraphsList->SelectedItem);
    this->chart->Refresh();
}

System::Void GraphsWinForms::MainForm::add_main_graph_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    a = (double)this->StartXValue->Value;
    b = (double)this->EndXValue->Value;
    h = (double)this->IntervalXValue->Value;
    x = a; 
    auto variant = this->VariantList->SelectedIndex;
    auto series = AddSeries(this->lineColor, this->VariantList->SelectedItem->ToString());
    while (x <= b)
    {
        y = f(x, variant);
        series->Points->AddXY(x, y);
        x += h;
    }
    addGraph(series);
}

System::Void GraphsWinForms::MainForm::remove_graph_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    removeGraph();
}

System::Void GraphsWinForms::MainForm::axis_size_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->xMinField->Value >= this->xMaxField->Value)
    {
        MessageBox::Show("x max must be more than x min!", "Warning!");
        this->xMinField->Value = (int)this->xMaxField->Value-1;
    }
    if (this->yMinField->Value >= this->yMaxField->Value)
    {
        MessageBox::Show("y max must be more than y min!", "Warning!");
        this->yMinField->Value = (int)this->xMaxField->Value-1;
    }
    this->chart->ChartAreas[0]->Axes[0]->Minimum = (double)this->xMinField->Value;
    this->chart->ChartAreas[0]->Axes[0]->Maximum = (double)this->xMaxField->Value;
    this->chart->ChartAreas[0]->Axes[1]->Minimum = (double)this->yMinField->Value;
    this->chart->ChartAreas[0]->Axes[1]->Maximum = (double)this->yMaxField->Value;
    this->chart->Refresh();
}

System::Void GraphsWinForms::MainForm::moveGraphX()
{
    if (this->GraphsList->Items->Count == 0)
    {
        MessageBox::Show("No drawn charts!", "Warning!");
        return;
    }
    if (this->GraphsList->SelectedItem == nullptr)
    {
        MessageBox::Show("Please, selected graph!", "Warning!");
        return;
    }

    System::Windows::Forms::DataVisualization::Charting::Series^ series = this->chart->Series->FindByName(this->GraphsList->SelectedItem->ToString());
    for each (System::Windows::Forms::DataVisualization::Charting::DataPoint ^ point in series->Points)
    {
        point->XValue += offset; 
    }
    this->chart->Refresh();
}

System::Void GraphsWinForms::MainForm::moveGraphY()
{
    if (this->GraphsList->Items->Count == 0)
    {
        MessageBox::Show("No drawn charts!", "Warning!");
        return;
    }
    if (this->GraphsList->SelectedItem == nullptr)
    {
        MessageBox::Show("Please, selected graph!", "Warning!");
        return;
    }

    System::Windows::Forms::DataVisualization::Charting::Series^ series = this->chart->Series->FindByName(this->GraphsList->SelectedItem->ToString());
    for each (System::Windows::Forms::DataVisualization::Charting::DataPoint ^ point in series->Points)
    {
        point->YValues[0] += offset1;
    }
    this->chart->Refresh();
}



