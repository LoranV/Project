#include "pch.h"
#include "MainForm.h"
#include "Login.h"
#include "BookBase.h"
#include "Search.h"

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
    System::Void MainForm::bunifuThinButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        search = gcnew Search();
        search->Show();
        this->Hide();
    }
    System::Void MainForm::bunifuThinButton6_Click(System::Object^ sender, System::EventArgs^ e) {
        System::Windows::Forms::DialogResult result = MessageBox::Show("�� ������ �� ������� ��������?", "�������� ��������",
            MessageBoxButtons::YesNo, MessageBoxIcon::Question);
        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            rate = gcnew Rate();
            rate->Show();
            this->Hide();
        }
        else
        {
            Project::Application::Exit();
        }
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

