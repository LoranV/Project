#include "MainForm.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

namespace Project {
    System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        LogNReg = gcnew Login(this);
        LogNReg->Show();
        this->Hide();
    }
}

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project::MainForm form;
    Application::Run(% form);
}