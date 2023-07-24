#pragma once

namespace GraphsWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			this->lineColor = this->colorLinePanel->BackColor;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;









	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::ColorDialog^ colorLineDialog;

	private: System::Windows::Forms::Panel^ colorLinePanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ GraphsList;
	private: System::ServiceProcess::ServiceController^ serviceController1;
	private: System::Windows::Forms::Button^ add_main_graph_btn;
	private: System::Windows::Forms::Button^ add_graph_btn;
	private: System::Windows::Forms::Button^ remove_graph_btn;
	private: System::Windows::Forms::NumericUpDown^ xMinField;
	private: System::Windows::Forms::NumericUpDown^ yMaxField;


	private: System::Windows::Forms::NumericUpDown^ yMinField;

	private: System::Windows::Forms::NumericUpDown^ xMaxField;
	private: System::Windows::Forms::Label^ xMinLabel;
	private: System::Windows::Forms::Label^ xMaxLabel;
	private: System::Windows::Forms::Label^ yMinLabel;
	private: System::Windows::Forms::Label^ yMaxLabel;
	private: System::Windows::Forms::NumericUpDown^ offsetField;

	private: System::Windows::Forms::Button^ move_btn;
	private: System::Windows::Forms::Button^ move_btn1;

	private: System::Windows::Forms::NumericUpDown^ offsetField1;



	private:
		double offset = 0.0;
	private: System::Windows::Forms::ListBox^ VariantList;
	private: System::Windows::Forms::Label^ StartX;
	private: System::Windows::Forms::Label^ EndX;
	private: System::Windows::Forms::Label^ IntervalX;
	private: System::Windows::Forms::NumericUpDown^ StartXValue;
	private: System::Windows::Forms::NumericUpDown^ EndXValue;
	private: System::Windows::Forms::NumericUpDown^ IntervalXValue;



		   double offset1 = 0.0;

	private:
		System::Void moveGraphX();
		System::Void moveGraphY();











	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorLineDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->colorLinePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GraphsList = (gcnew System::Windows::Forms::ListBox());
			this->serviceController1 = (gcnew System::ServiceProcess::ServiceController());
			this->add_main_graph_btn = (gcnew System::Windows::Forms::Button());
			this->add_graph_btn = (gcnew System::Windows::Forms::Button());
			this->remove_graph_btn = (gcnew System::Windows::Forms::Button());
			this->xMinField = (gcnew System::Windows::Forms::NumericUpDown());
			this->yMaxField = (gcnew System::Windows::Forms::NumericUpDown());
			this->yMinField = (gcnew System::Windows::Forms::NumericUpDown());
			this->xMaxField = (gcnew System::Windows::Forms::NumericUpDown());
			this->xMinLabel = (gcnew System::Windows::Forms::Label());
			this->xMaxLabel = (gcnew System::Windows::Forms::Label());
			this->yMinLabel = (gcnew System::Windows::Forms::Label());
			this->yMaxLabel = (gcnew System::Windows::Forms::Label());
			this->offsetField = (gcnew System::Windows::Forms::NumericUpDown());
			this->move_btn = (gcnew System::Windows::Forms::Button());
			this->move_btn1 = (gcnew System::Windows::Forms::Button());
			this->offsetField1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->VariantList = (gcnew System::Windows::Forms::ListBox());
			this->StartX = (gcnew System::Windows::Forms::Label());
			this->EndX = (gcnew System::Windows::Forms::Label());
			this->IntervalX = (gcnew System::Windows::Forms::Label());
			this->StartXValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->EndXValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->IntervalXValue = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMinField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMaxField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMinField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMaxField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->offsetField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->offsetField1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartXValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EndXValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntervalXValue))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisX->Crossing = 0;
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->LineColor = System::Drawing::SystemColors::AppWorkspace;
			chartArea1->AxisX->LineWidth = 2;
			chartArea1->AxisX->MajorGrid->Interval = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffset = 0;
			chartArea1->AxisX->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::AppWorkspace;
			chartArea1->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea1->AxisX->ScaleView->MinSizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->ScaleView->SizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->ScaleView->SmallScrollMinSizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->ScaleView->SmallScrollSizeType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->ScrollBar->BackColor = System::Drawing::Color::Blue;
			chartArea1->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::Red;
			chartArea1->AxisX->ScrollBar->LineColor = System::Drawing::Color::IndianRed;
			chartArea1->AxisX->Title = L"OX";
			chartArea1->AxisX->TitleAlignment = System::Drawing::StringAlignment::Near;
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisY->Crossing = 0;
			chartArea1->AxisY->IsLabelAutoFit = false;
			chartArea1->AxisY->LineColor = System::Drawing::SystemColors::AppWorkspace;
			chartArea1->AxisY->LineWidth = 2;
			chartArea1->AxisY->MajorGrid->Interval = 0;
			chartArea1->AxisY->MajorGrid->IntervalOffset = 0;
			chartArea1->AxisY->MajorGrid->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::AppWorkspace;
			chartArea1->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			chartArea1->AxisY->Maximum = 10;
			chartArea1->AxisY->Minimum = -10;
			chartArea1->AxisY->Title = L"OY";
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Near;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			chartArea1->BorderColor = System::Drawing::SystemColors::AppWorkspace;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(12, 53);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size(846, 461);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"Text files(*.txt)|*.txt|All files(*.*)|*.*";
			// 
			// colorLinePanel
			// 
			this->colorLinePanel->BackColor = System::Drawing::Color::Red;
			this->colorLinePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->colorLinePanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorLinePanel->Location = System::Drawing::Point(893, 55);
			this->colorLinePanel->Name = L"colorLinePanel";
			this->colorLinePanel->Size = System::Drawing::Size(59, 64);
			this->colorLinePanel->TabIndex = 5;
			this->colorLinePanel->Click += gcnew System::EventHandler(this, &MainForm::colorLinePanel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(958, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 42);
			this->label1->TabIndex = 6;
			this->label1->Text = L"graph color";
			// 
			// GraphsList
			// 
			this->GraphsList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GraphsList->FormattingEnabled = true;
			this->GraphsList->ItemHeight = 42;
			this->GraphsList->Location = System::Drawing::Point(893, 488);
			this->GraphsList->Name = L"GraphsList";
			this->GraphsList->ScrollAlwaysVisible = true;
			this->GraphsList->Size = System::Drawing::Size(331, 46);
			this->GraphsList->TabIndex = 7;
			// 
			// add_main_graph_btn
			// 
			this->add_main_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->add_main_graph_btn->Location = System::Drawing::Point(12, 660);
			this->add_main_graph_btn->Name = L"add_main_graph_btn";
			this->add_main_graph_btn->Size = System::Drawing::Size(331, 69);
			this->add_main_graph_btn->TabIndex = 8;
			this->add_main_graph_btn->Text = L"Add main graph";
			this->add_main_graph_btn->UseVisualStyleBackColor = true;
			this->add_main_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::add_main_graph_btn_Click);
			// 
			// add_graph_btn
			// 
			this->add_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_graph_btn->Location = System::Drawing::Point(893, 145);
			this->add_graph_btn->Name = L"add_graph_btn";
			this->add_graph_btn->Size = System::Drawing::Size(331, 90);
			this->add_graph_btn->TabIndex = 4;
			this->add_graph_btn->Text = L"Add graph";
			this->add_graph_btn->UseVisualStyleBackColor = true;
			this->add_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::add_graph_btn_Click);
			// 
			// remove_graph_btn
			// 
			this->remove_graph_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->remove_graph_btn->Location = System::Drawing::Point(893, 544);
			this->remove_graph_btn->Name = L"remove_graph_btn";
			this->remove_graph_btn->Size = System::Drawing::Size(331, 90);
			this->remove_graph_btn->TabIndex = 9;
			this->remove_graph_btn->Text = L"Remove selected";
			this->remove_graph_btn->UseVisualStyleBackColor = true;
			this->remove_graph_btn->Click += gcnew System::EventHandler(this, &MainForm::remove_graph_btn_Click);
			// 
			// xMinField
			// 
			this->xMinField->Location = System::Drawing::Point(965, 293);
			this->xMinField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->xMinField->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->xMinField->Name = L"xMinField";
			this->xMinField->Size = System::Drawing::Size(84, 31);
			this->xMinField->TabIndex = 10;
			this->xMinField->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->xMinField->ValueChanged += gcnew System::EventHandler(this, &MainForm::axis_size_ValueChanged);
			// 
			// yMaxField
			// 
			this->yMaxField->Location = System::Drawing::Point(1140, 346);
			this->yMaxField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1001, 0, 0, 0 });
			this->yMaxField->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, System::Int32::MinValue });
			this->yMaxField->Name = L"yMaxField";
			this->yMaxField->Size = System::Drawing::Size(84, 31);
			this->yMaxField->TabIndex = 11;
			this->yMaxField->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->yMaxField->ValueChanged += gcnew System::EventHandler(this, &MainForm::axis_size_ValueChanged);
			// 
			// yMinField
			// 
			this->yMinField->Location = System::Drawing::Point(965, 346);
			this->yMinField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->yMinField->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->yMinField->Name = L"yMinField";
			this->yMinField->Size = System::Drawing::Size(84, 31);
			this->yMinField->TabIndex = 12;
			this->yMinField->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->yMinField->ValueChanged += gcnew System::EventHandler(this, &MainForm::axis_size_ValueChanged);
			// 
			// xMaxField
			// 
			this->xMaxField->Location = System::Drawing::Point(1140, 293);
			this->xMaxField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1001, 0, 0, 0 });
			this->xMaxField->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, System::Int32::MinValue });
			this->xMaxField->Name = L"xMaxField";
			this->xMaxField->Size = System::Drawing::Size(84, 31);
			this->xMaxField->TabIndex = 13;
			this->xMaxField->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->xMaxField->ValueChanged += gcnew System::EventHandler(this, &MainForm::axis_size_ValueChanged);
			// 
			// xMinLabel
			// 
			this->xMinLabel->AutoSize = true;
			this->xMinLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xMinLabel->Location = System::Drawing::Point(888, 299);
			this->xMinLabel->Name = L"xMinLabel";
			this->xMinLabel->Size = System::Drawing::Size(85, 31);
			this->xMinLabel->TabIndex = 14;
			this->xMinLabel->Text = L"x min:";
			// 
			// xMaxLabel
			// 
			this->xMaxLabel->AutoSize = true;
			this->xMaxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xMaxLabel->Location = System::Drawing::Point(1064, 299);
			this->xMaxLabel->Name = L"xMaxLabel";
			this->xMaxLabel->Size = System::Drawing::Size(92, 31);
			this->xMaxLabel->TabIndex = 15;
			this->xMaxLabel->Text = L"x max:";
			// 
			// yMinLabel
			// 
			this->yMinLabel->AutoSize = true;
			this->yMinLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yMinLabel->Location = System::Drawing::Point(888, 352);
			this->yMinLabel->Name = L"yMinLabel";
			this->yMinLabel->Size = System::Drawing::Size(86, 31);
			this->yMinLabel->TabIndex = 16;
			this->yMinLabel->Text = L"y min:";
			// 
			// yMaxLabel
			// 
			this->yMaxLabel->AutoSize = true;
			this->yMaxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yMaxLabel->Location = System::Drawing::Point(1064, 352);
			this->yMaxLabel->Name = L"yMaxLabel";
			this->yMaxLabel->Size = System::Drawing::Size(93, 31);
			this->yMaxLabel->TabIndex = 17;
			this->yMaxLabel->Text = L"y max:";
			// 
			// offsetField
			// 
			this->offsetField->Location = System::Drawing::Point(498, 560);
			this->offsetField->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->offsetField->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->offsetField->Name = L"offsetField";
			this->offsetField->Size = System::Drawing::Size(84, 31);
			this->offsetField->TabIndex = 18;
			this->offsetField->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// move_btn
			// 
			this->move_btn->Location = System::Drawing::Point(381, 546);
			this->move_btn->Name = L"move_btn";
			this->move_btn->Size = System::Drawing::Size(95, 44);
			this->move_btn->TabIndex = 19;
			this->move_btn->Text = L"Move Right/Left";
			this->move_btn->UseVisualStyleBackColor = true;
			this->move_btn->Click += gcnew System::EventHandler(this, &MainForm::move_btn_Click);
			// 
			// move_btn1
			// 
			this->move_btn1->Location = System::Drawing::Point(381, 600);
			this->move_btn1->Name = L"move_btn1";
			this->move_btn1->Size = System::Drawing::Size(95, 44);
			this->move_btn1->TabIndex = 20;
			this->move_btn1->Text = L"Move Up/Down";
			this->move_btn1->UseVisualStyleBackColor = true;
			this->move_btn1->Click += gcnew System::EventHandler(this, &MainForm::move_btn1_Click);
			// 
			// offsetField1
			// 
			this->offsetField1->Location = System::Drawing::Point(498, 613);
			this->offsetField1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->offsetField1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->offsetField1->Name = L"offsetField1";
			this->offsetField1->Size = System::Drawing::Size(84, 31);
			this->offsetField1->TabIndex = 21;
			this->offsetField1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// VariantList
			// 
			this->VariantList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VariantList->FormattingEnabled = true;
			this->VariantList->ItemHeight = 42;
			this->VariantList->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Надольський", L"Стріляєва", L"Андрющенко",
					L"Балагун"
			});
			this->VariantList->Location = System::Drawing::Point(12, 600);
			this->VariantList->Name = L"VariantList";
			this->VariantList->ScrollAlwaysVisible = true;
			this->VariantList->Size = System::Drawing::Size(331, 46);
			this->VariantList->TabIndex = 22;
			// 
			// StartX
			// 
			this->StartX->AutoSize = true;
			this->StartX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartX->Location = System::Drawing::Point(12, 544);
			this->StartX->Name = L"StartX";
			this->StartX->Size = System::Drawing::Size(40, 31);
			this->StartX->TabIndex = 23;
			this->StartX->Text = L"A:";
			// 
			// EndX
			// 
			this->EndX->AutoSize = true;
			this->EndX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EndX->Location = System::Drawing::Point(109, 544);
			this->EndX->Name = L"EndX";
			this->EndX->Size = System::Drawing::Size(40, 31);
			this->EndX->TabIndex = 24;
			this->EndX->Text = L"B:";
			// 
			// IntervalX
			// 
			this->IntervalX->AutoSize = true;
			this->IntervalX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IntervalX->Location = System::Drawing::Point(205, 544);
			this->IntervalX->Name = L"IntervalX";
			this->IntervalX->Size = System::Drawing::Size(42, 31);
			this->IntervalX->TabIndex = 25;
			this->IntervalX->Text = L"H:";
			// 
			// StartXValue
			// 
			this->StartXValue->InterceptArrowKeys = false;
			this->StartXValue->Location = System::Drawing::Point(39, 544);
			this->StartXValue->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->StartXValue->Name = L"StartXValue";
			this->StartXValue->Size = System::Drawing::Size(63, 31);
			this->StartXValue->TabIndex = 26;
			// 
			// EndXValue
			// 
			this->EndXValue->InterceptArrowKeys = false;
			this->EndXValue->Location = System::Drawing::Point(136, 544);
			this->EndXValue->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->EndXValue->Name = L"EndXValue";
			this->EndXValue->Size = System::Drawing::Size(63, 31);
			this->EndXValue->TabIndex = 27;
			// 
			// IntervalXValue
			// 
			this->IntervalXValue->InterceptArrowKeys = false;
			this->IntervalXValue->Location = System::Drawing::Point(234, 544);
			this->IntervalXValue->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->IntervalXValue->Name = L"IntervalXValue";
			this->IntervalXValue->Size = System::Drawing::Size(63, 31);
			this->IntervalXValue->TabIndex = 28;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(1266, 741);
			this->Controls->Add(this->IntervalXValue);
			this->Controls->Add(this->EndXValue);
			this->Controls->Add(this->StartXValue);
			this->Controls->Add(this->IntervalX);
			this->Controls->Add(this->EndX);
			this->Controls->Add(this->StartX);
			this->Controls->Add(this->VariantList);
			this->Controls->Add(this->offsetField1);
			this->Controls->Add(this->move_btn1);
			this->Controls->Add(this->move_btn);
			this->Controls->Add(this->offsetField);
			this->Controls->Add(this->yMaxLabel);
			this->Controls->Add(this->yMinLabel);
			this->Controls->Add(this->xMaxLabel);
			this->Controls->Add(this->xMinLabel);
			this->Controls->Add(this->xMaxField);
			this->Controls->Add(this->yMinField);
			this->Controls->Add(this->yMaxField);
			this->Controls->Add(this->xMinField);
			this->Controls->Add(this->remove_graph_btn);
			this->Controls->Add(this->add_main_graph_btn);
			this->Controls->Add(this->GraphsList);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->colorLinePanel);
			this->Controls->Add(this->add_graph_btn);
			this->Controls->Add(this->chart);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Graphs";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMinField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMaxField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMinField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMaxField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->offsetField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->offsetField1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartXValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EndXValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntervalXValue))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double a, b, h;
	private: double x, y;
	private: System::Drawing::Color lineColor;


	private: System::Void add_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorLinePanel_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void addGraph(System::Windows::Forms::DataVisualization::Charting::Series^ series);
	private: System::Void removeGraph();
	private: System::Void add_main_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void remove_graph_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void axis_size_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		   System::Void GraphsWinForms::MainForm::move_btn_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   double offsetValue = Double::Parse(this->offsetField->Text);
			   offset = offsetValue;

			   moveGraphX();
		   }
private: System::Void move_btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	double offsetValue1 = Double::Parse(this->offsetField->Text);
	offset1 = offsetValue1;

	moveGraphY();

}
};
}
