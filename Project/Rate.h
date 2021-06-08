#pragma once
#include "MainForm.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для Rate
	/// </summary>
	public ref class Rate : public System::Windows::Forms::Form
	{
	public:
		Rate(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Rate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuRating^ bunifuRating1;

	private: System::Windows::Forms::Label^ label2;

	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton1;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox1;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rate::typeid));
			this->bunifuRating1 = (gcnew Bunifu::Framework::UI::BunifuRating());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton1 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomTextbox1 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->SuspendLayout();
			// 
			// bunifuRating1
			// 
			this->bunifuRating1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuRating1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuRating1->Location = System::Drawing::Point(42, 368);
			this->bunifuRating1->Name = L"bunifuRating1";
			this->bunifuRating1->Size = System::Drawing::Size(316, 50);
			this->bunifuRating1->TabIndex = 0;
			this->bunifuRating1->Value = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(82, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 36);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Залиште відгук";
			// 
			// bunifuThinButton1
			// 
			this->bunifuThinButton1->ActiveBorderThickness = 1;
			this->bunifuThinButton1->ActiveCornerRadius = 20;
			this->bunifuThinButton1->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton1->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton1->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton1->BackColor = System::Drawing::SystemColors::Control;
			this->bunifuThinButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton1.BackgroundImage")));
			this->bunifuThinButton1->ButtonText = L"Відправити";
			this->bunifuThinButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton1->ForeColor = System::Drawing::Color::SeaShell;
			this->bunifuThinButton1->IdleBorderThickness = 1;
			this->bunifuThinButton1->IdleCornerRadius = 20;
			this->bunifuThinButton1->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton1->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton1->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton1->Location = System::Drawing::Point(99, 435);
			this->bunifuThinButton1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->bunifuThinButton1->Name = L"bunifuThinButton1";
			this->bunifuThinButton1->Size = System::Drawing::Size(198, 42);
			this->bunifuThinButton1->TabIndex = 12;
			this->bunifuThinButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton1->Click += gcnew System::EventHandler(this, &Rate::bunifuThinButton1_Click);
			// 
			// bunifuCustomTextbox1
			// 
			this->bunifuCustomTextbox1->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomTextbox1->Location = System::Drawing::Point(42, 107);
			this->bunifuCustomTextbox1->Multiline = true;
			this->bunifuCustomTextbox1->Name = L"bunifuCustomTextbox1";
			this->bunifuCustomTextbox1->Size = System::Drawing::Size(316, 236);
			this->bunifuCustomTextbox1->TabIndex = 13;
			// 
			// Rate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(398, 510);
			this->Controls->Add(this->bunifuCustomTextbox1);
			this->Controls->Add(this->bunifuThinButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bunifuRating1);
			this->Name = L"Rate";
			this->Text = L"Rate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void bunifuThinButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	int text = bunifuRating1->Value;
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ feedback = bunifuCustomTextbox1->Text;
	int^ rate = bunifuRating1->Value;

	MySqlCommand^ cmd = gcnew MySqlCommand("insert into rate_info values('" + feedback + "','" + rate + "')", con);
	// insert into book_info values('feedback','rate')
	MySqlDataReader^ dr;
	con->Open();
	try
	{
		dr = cmd->ExecuteReader();
		bunifuCustomTextbox1->Text = "";
		MessageBox::Show("Дякуємо!");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	con->Close();
	Project::Application::Exit();


}
};
}
