#include "Recommendation.h"

namespace Project {
	System::Void Recommendation::bunifuImageButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew MainForm();
		parentForm->Show();
		this->Hide();
	};
}