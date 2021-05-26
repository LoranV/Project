#include "Search.h"
#include "MainForm.h"

namespace Project{
	System::Void Search::bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew MainForm();
		parentForm->Show();
		this->Hide();
	}
}
