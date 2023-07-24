#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ arrgs) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GraphsWinForms::MainForm main_form;
	Application::Run(% main_form);
}