#include "pch.h"
#include "MainForm.h"
#include "Login.h"

namespace Project {
	System::Void Login::bunifuImageButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew MainForm();
		parentForm->Show();
		this->Hide();
	};
}

