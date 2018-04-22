#include "Character_Sheet_Form.h"
#include "BackEndTesting.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute()]
void main(array<System::String ^> ^args)// it's now void and starts with capital M
{
	testmain();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LOTRProject::ExampleTest());

}
