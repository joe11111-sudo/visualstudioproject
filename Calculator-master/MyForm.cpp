#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;//Project1���ļ������������ҵ�һ��,MyForm�Ǵ�����(.h&.cpp)
	Application::Run(% form);
}