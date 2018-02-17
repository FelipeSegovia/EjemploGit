#include "MiVentana.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	EjemploGit::MiVentana form;
	Application::Run(%form);
}