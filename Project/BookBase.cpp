#include "BookBase.h"
#include "MainForm.h"

namespace Project{
	System::Void BookBase::bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew MainForm();
		parentForm->Show();
		this->Hide();
	}
}
