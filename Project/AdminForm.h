#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton6;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton5;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton4;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton3;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton1 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton6 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton5 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton4 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton3 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton2 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(186, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(503, 78);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Головне Меню";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(292, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 44);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Адміністратор";
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
			this->bunifuThinButton1->Location = System::Drawing::Point(189, 206);
			this->bunifuThinButton1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->bunifuThinButton1->Name = L"bunifuThinButton1";
			this->bunifuThinButton1->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton1->TabIndex = 15;
			this->bunifuThinButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton6
			// 
			this->bunifuThinButton6->ActiveBorderThickness = 1;
			this->bunifuThinButton6->ActiveCornerRadius = 20;
			this->bunifuThinButton6->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton6->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton6->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton6->BackColor = System::Drawing::SystemColors::Control;
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
			this->bunifuThinButton6->Location = System::Drawing::Point(487, 408);
			this->bunifuThinButton6->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton6->Name = L"bunifuThinButton6";
			this->bunifuThinButton6->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton6->TabIndex = 10;
			this->bunifuThinButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton5
			// 
			this->bunifuThinButton5->ActiveBorderThickness = 1;
			this->bunifuThinButton5->ActiveCornerRadius = 20;
			this->bunifuThinButton5->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton5->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton5->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton5->BackColor = System::Drawing::SystemColors::Control;
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
			this->bunifuThinButton5->Location = System::Drawing::Point(189, 408);
			this->bunifuThinButton5->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton5->Name = L"bunifuThinButton5";
			this->bunifuThinButton5->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton5->TabIndex = 11;
			this->bunifuThinButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton4
			// 
			this->bunifuThinButton4->ActiveBorderThickness = 1;
			this->bunifuThinButton4->ActiveCornerRadius = 20;
			this->bunifuThinButton4->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton4->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton4->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton4->BackColor = System::Drawing::SystemColors::Control;
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
			this->bunifuThinButton4->Location = System::Drawing::Point(487, 310);
			this->bunifuThinButton4->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton4->Name = L"bunifuThinButton4";
			this->bunifuThinButton4->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton4->TabIndex = 12;
			this->bunifuThinButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton3
			// 
			this->bunifuThinButton3->ActiveBorderThickness = 1;
			this->bunifuThinButton3->ActiveCornerRadius = 20;
			this->bunifuThinButton3->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton3->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton3->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton3->BackColor = System::Drawing::SystemColors::Control;
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
			this->bunifuThinButton3->Location = System::Drawing::Point(189, 310);
			this->bunifuThinButton3->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton3->Name = L"bunifuThinButton3";
			this->bunifuThinButton3->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton3->TabIndex = 13;
			this->bunifuThinButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton2
			// 
			this->bunifuThinButton2->ActiveBorderThickness = 1;
			this->bunifuThinButton2->ActiveCornerRadius = 20;
			this->bunifuThinButton2->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton2->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton2->ActiveLineColor = System::Drawing::Color::Gray;
			this->bunifuThinButton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuThinButton2->BackColor = System::Drawing::SystemColors::Control;
			this->bunifuThinButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton2.BackgroundImage")));
			this->bunifuThinButton2->ButtonText = L"Сортування";
			this->bunifuThinButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton2->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton2->IdleBorderThickness = 1;
			this->bunifuThinButton2->IdleCornerRadius = 20;
			this->bunifuThinButton2->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton2->IdleForecolor = System::Drawing::SystemColors::ControlLight;
			this->bunifuThinButton2->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton2->Location = System::Drawing::Point(487, 206);
			this->bunifuThinButton2->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton2->Name = L"bunifuThinButton2";
			this->bunifuThinButton2->Size = System::Drawing::Size(215, 60);
			this->bunifuThinButton2->TabIndex = 14;
			this->bunifuThinButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 521);
			this->Controls->Add(this->bunifuThinButton1);
			this->Controls->Add(this->bunifuThinButton6);
			this->Controls->Add(this->bunifuThinButton5);
			this->Controls->Add(this->bunifuThinButton4);
			this->Controls->Add(this->bunifuThinButton3);
			this->Controls->Add(this->bunifuThinButton2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
