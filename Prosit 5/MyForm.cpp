
//MyForm.cpp
#include "Myform.h"//erreur de majuscule


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	testWin::MyForm monFormulaire;
}

