#pragma once
#include "Login.h"
#include "AddBook.h"
#include "Recommendation.h"
#include "BookBase.h"
#include "Search.h"
#include "Rate.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MainForm;
	ref class Login;
	ref class AddBook;
	ref class Recommendation;
	ref class BookBase;
	ref class Search;
	ref class Rate;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: Login^ login;
	public: AddBook^ addbook;
	public: Recommendation^ recommendation;
	public: BookBase^ bookbase;
	public: Search^ search;
	public: Rate^ rate;
	protected:


	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton3;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton4;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton5;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton6;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->bunifuThinButton3 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton4 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton5 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton6 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton1 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuThinButton3
			// 
			this->bunifuThinButton3->ActiveBorderThickness = 1;
			this->bunifuThinButton3->ActiveCornerRadius = 20;
			this->bunifuThinButton3->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton3->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton3->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton3.BackgroundImage")));
			this->bunifuThinButton3->ButtonText = L"База Книг";
			this->bunifuThinButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton3->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton3->IdleBorderThickness = 1;
			this->bunifuThinButton3->IdleCornerRadius = 20;
			this->bunifuThinButton3->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton3->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton3->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton3->Location = System::Drawing::Point(184, 295);
			this->bunifuThinButton3->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton3->Name = L"bunifuThinButton3";
			this->bunifuThinButton3->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton3->TabIndex = 4;
			this->bunifuThinButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton3->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton3_Click_1);
			// 
			// bunifuThinButton4
			// 
			this->bunifuThinButton4->ActiveBorderThickness = 1;
			this->bunifuThinButton4->ActiveCornerRadius = 20;
			this->bunifuThinButton4->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton4->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton4->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton4.BackgroundImage")));
			this->bunifuThinButton4->ButtonText = L"Додати Книгу";
			this->bunifuThinButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton4->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton4->IdleBorderThickness = 1;
			this->bunifuThinButton4->IdleCornerRadius = 20;
			this->bunifuThinButton4->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton4->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton4->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton4->Location = System::Drawing::Point(482, 295);
			this->bunifuThinButton4->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton4->Name = L"bunifuThinButton4";
			this->bunifuThinButton4->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton4->TabIndex = 3;
			this->bunifuThinButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton4->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton4_Click);
			// 
			// bunifuThinButton5
			// 
			this->bunifuThinButton5->ActiveBorderThickness = 1;
			this->bunifuThinButton5->ActiveCornerRadius = 20;
			this->bunifuThinButton5->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton5->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton5->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton5.BackgroundImage")));
			this->bunifuThinButton5->ButtonText = L"Рекомендації";
			this->bunifuThinButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton5->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton5->IdleBorderThickness = 1;
			this->bunifuThinButton5->IdleCornerRadius = 20;
			this->bunifuThinButton5->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton5->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton5->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton5->Location = System::Drawing::Point(482, 191);
			this->bunifuThinButton5->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton5->Name = L"bunifuThinButton5";
			this->bunifuThinButton5->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton5->TabIndex = 2;
			this->bunifuThinButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton5->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton5_Click);
			// 
			// bunifuThinButton6
			// 
			this->bunifuThinButton6->ActiveBorderThickness = 1;
			this->bunifuThinButton6->ActiveCornerRadius = 20;
			this->bunifuThinButton6->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton6->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton6->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton6.BackgroundImage")));
			this->bunifuThinButton6->ButtonText = L"Вийти";
			this->bunifuThinButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton6->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton6->IdleBorderThickness = 1;
			this->bunifuThinButton6->IdleCornerRadius = 20;
			this->bunifuThinButton6->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton6->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton6->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton6->Location = System::Drawing::Point(184, 393);
			this->bunifuThinButton6->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton6->Name = L"bunifuThinButton6";
			this->bunifuThinButton6->Size = System::Drawing::Size(513, 60);
			this->bunifuThinButton6->TabIndex = 1;
			this->bunifuThinButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton6->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton6_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(789, 0);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(90, 90);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 0;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(194, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(503, 78);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Головне Меню";
			// 
			// bunifuThinButton1
			// 
			this->bunifuThinButton1->ActiveBorderThickness = 1;
			this->bunifuThinButton1->ActiveCornerRadius = 20;
			this->bunifuThinButton1->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton1->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton1->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton1.BackgroundImage")));
			this->bunifuThinButton1->ButtonText = L"Пошук";
			this->bunifuThinButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton1->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton1->IdleBorderThickness = 1;
			this->bunifuThinButton1->IdleCornerRadius = 20;
			this->bunifuThinButton1->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton1->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton1->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton1->Location = System::Drawing::Point(184, 191);
			this->bunifuThinButton1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->bunifuThinButton1->Name = L"bunifuThinButton1";
			this->bunifuThinButton1->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton1->TabIndex = 9;
			this->bunifuThinButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton1->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(880, 517);
			this->Controls->Add(this->bunifuThinButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->bunifuThinButton6);
			this->Controls->Add(this->bunifuThinButton5);
			this->Controls->Add(this->bunifuThinButton4);
			this->Controls->Add(this->bunifuThinButton3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton3_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bunifuThinButton1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
