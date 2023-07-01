#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;//Project1是文件名，尽量跟我的一样,MyForm是窗口名(.h&.cpp)
	Application::Run(% form);
}