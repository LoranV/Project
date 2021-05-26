#include "pch.h"
#include "MainForm.h"
#include "Login.h"
#include "BookBase.h"

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
    System::Void MainForm::bunifuThinButton5_Click(System::Object^ sender, System::EventArgs^ e) {
        recommendation = gcnew Recommendation(this);
        recommendation->Show();
        this->Hide();
    }
    System::Void MainForm::bunifuThinButton3_Click(System::Object^ sender, System::EventArgs^ e) {
        bookbase = gcnew BookBase(this);
        bookbase->Show();
        this->Hide();
    }
    System::Void MainForm::bunifuThinButton3_Click_1(System::Object^ sender, System::EventArgs^ e) {
        bookbase = gcnew BookBase(this);
        bookbase->Show();
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

