#include "AddBook.h"

namespace Project {
	System::Void AddBook::bunifuImageButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew MainForm();
		parentForm->Show();
		this->Hide();
	};
}