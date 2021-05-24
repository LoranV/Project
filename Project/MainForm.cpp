#include "pch.h"
#include "MainForm.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

namespace Project {
    System::Void MainForm::bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        login = gcnew Login(this);
        login->Show();
        this->Hide();
    }
    System::Void MainForm::bunifuThinButton4_Click(System::Object^ sender, System::EventArgs^ e) {
        addbook = gcnew AddBook(this);
        addbook->Show();
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