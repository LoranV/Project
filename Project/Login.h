#pragma once
#include "MainForm.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	ref class MainForm;

	/// <summary>
	/// Сводка для Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(MainForm^ Parent)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	public:MainForm^ parentForm;

	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox3;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox4;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox5;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox6;



	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel8;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel7;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;

	protected:









	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuTextbox5 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox6 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuCustomLabel8 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuTextbox3 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox4 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuThinButton23);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuCustomLabel3);
			this->panel1->Controls->Add(this->bunifuCustomLabel2);
			this->panel1->Controls->Add(this->bunifuTextbox2);
			this->panel1->Controls->Add(this->bunifuTextbox1);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->Location = System::Drawing::Point(215, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(459, 497);
			this->panel1->TabIndex = 0;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(12, 29);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(70, 70);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 15;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 0;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &Login::bunifuImageButton2_Click);
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Sienna;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Вхід";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Silver;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton23->Location = System::Drawing::Point(131, 387);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(195, 44);
			this->bunifuThinButton23->TabIndex = 10;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &Login::bunifuThinButton23_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(174, 438);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Реєстрація";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(10, 267);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(170, 25);
			this->bunifuCustomLabel3->TabIndex = 8;
			this->bunifuCustomLabel3->Text = L"Введіть пароль:";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(10, 177);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(148, 25);
			this->bunifuCustomLabel2->TabIndex = 7;
			this->bunifuCustomLabel2->Text = L"Введіть логін:";
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(182, 260);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox2->TabIndex = 6;
			this->bunifuTextbox2->text = L"Password";
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuTextbox1->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(182, 166);
			this->bunifuTextbox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox1->TabIndex = 5;
			this->bunifuTextbox1->text = L"Login";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(79, 29);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(299, 55);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"Авторизація";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->bunifuImageButton1);
			this->panel2->Controls->Add(this->bunifuTextbox5);
			this->panel2->Controls->Add(this->bunifuTextbox6);
			this->panel2->Controls->Add(this->bunifuCustomLabel8);
			this->panel2->Controls->Add(this->bunifuCustomLabel7);
			this->panel2->Controls->Add(this->bunifuCustomLabel4);
			this->panel2->Controls->Add(this->bunifuCustomLabel5);
			this->panel2->Controls->Add(this->bunifuTextbox3);
			this->panel2->Controls->Add(this->bunifuTextbox4);
			this->panel2->Controls->Add(this->bunifuThinButton22);
			this->panel2->Controls->Add(this->bunifuCustomLabel6);
			this->panel2->Location = System::Drawing::Point(215, 10);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(459, 497);
			this->panel2->TabIndex = 10;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(12, 24);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(70, 70);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 14;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Login::bunifuImageButton1_Click);
			// 
			// bunifuTextbox5
			// 
			this->bunifuTextbox5->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.BackgroundImage")));
			this->bunifuTextbox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox5->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.Icon")));
			this->bunifuTextbox5->Location = System::Drawing::Point(200, 339);
			this->bunifuTextbox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuTextbox5->Name = L"bunifuTextbox5";
			this->bunifuTextbox5->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox5->TabIndex = 13;
			this->bunifuTextbox5->text = L"Phone Number";
			// 
			// bunifuTextbox6
			// 
			this->bunifuTextbox6->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox6.BackgroundImage")));
			this->bunifuTextbox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox6->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox6.Icon")));
			this->bunifuTextbox6->Location = System::Drawing::Point(200, 271);
			this->bunifuTextbox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuTextbox6->Name = L"bunifuTextbox6";
			this->bunifuTextbox6->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox6->TabIndex = 12;
			this->bunifuTextbox6->text = L"Email";
			// 
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->AutoSize = true;
			this->bunifuCustomLabel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel8->Location = System::Drawing::Point(10, 349);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(190, 25);
			this->bunifuCustomLabel8->TabIndex = 11;
			this->bunifuCustomLabel8->Text = L"Введіть ном. тел.:";
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(10, 283);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(161, 25);
			this->bunifuCustomLabel7->TabIndex = 10;
			this->bunifuCustomLabel7->Text = L"Введіть пошту:";
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel4->Location = System::Drawing::Point(10, 217);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(170, 25);
			this->bunifuCustomLabel4->TabIndex = 8;
			this->bunifuCustomLabel4->Text = L"Введіть пароль:";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::Silver;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(10, 151);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(148, 25);
			this->bunifuCustomLabel5->TabIndex = 7;
			this->bunifuCustomLabel5->Text = L"Введіть логін:";
			// 
			// bunifuTextbox3
			// 
			this->bunifuTextbox3->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.BackgroundImage")));
			this->bunifuTextbox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox3->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.Icon")));
			this->bunifuTextbox3->Location = System::Drawing::Point(200, 206);
			this->bunifuTextbox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuTextbox3->Name = L"bunifuTextbox3";
			this->bunifuTextbox3->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox3->TabIndex = 6;
			this->bunifuTextbox3->text = L"Password";
			// 
			// bunifuTextbox4
			// 
			this->bunifuTextbox4->BackColor = System::Drawing::Color::Silver;
			this->bunifuTextbox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.BackgroundImage")));
			this->bunifuTextbox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuTextbox4->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.Icon")));
			this->bunifuTextbox4->Location = System::Drawing::Point(200, 140);
			this->bunifuTextbox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuTextbox4->Name = L"bunifuTextbox4";
			this->bunifuTextbox4->Size = System::Drawing::Size(250, 48);
			this->bunifuTextbox4->TabIndex = 5;
			this->bunifuTextbox4->text = L"Login";
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::Gainsboro;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::Sienna;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Зареєструватись";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::Silver;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuThinButton22->Location = System::Drawing::Point(131, 424);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(195, 44);
			this->bunifuThinButton22->TabIndex = 3;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &Login::bunifuThinButton22_Click);
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(93, 29);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(271, 55);
			this->bunifuCustomLabel6->TabIndex = 0;
			this->bunifuCustomLabel6->Text = L"Реєстрація";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 521);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Зміна опасіті панелі з реєстрацією
	panel1->Visible = false;
	panel2->Visible = true;
}
private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->BringToFront();
}
private: System::Void bunifuImageButton2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ email = bunifuTextbox6->text;
		String^ login = bunifuTextbox4->text;
		String^ password = bunifuTextbox3->text;
		String^ number = bunifuTextbox5->text;

		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from reg_info where Login='" + login + "';", con);
		MySqlDataReader^ dr;
		dr = cmd->ExecuteReader();
		int count = 0;
		if (bunifuTextbox4->text != "Login" && bunifuTextbox3->text != "Password" && bunifuTextbox6->text != "Email" && bunifuTextbox5->text != "Phone Number") {
			while (dr->Read())
			{
				count += 1;
			}
			if (count == 1)
			{
				MessageBox::Show("Користувач з даним логін вже існує!\nПовторіть спробу.");
				con->Close();
			}
			else if (login == password) {
				MessageBox::Show("Логін та пароль не може бути однаковий!\nПовторіть спробу.");
			}
			else if (number->Length > 12)
			{
				MessageBox::Show("Номер телефону вказано невірно!\nПовторіть спробу.");
			}
			else
			{
				dr->Close();
				MySqlCommand^ cmds = gcnew MySqlCommand("insert into reg_info values('" + login + "','" + password + "','" + email + "','" + number + "')", con);
				MySqlDataReader^ dr;
				try
				{
					dr = cmds->ExecuteReader();
					bunifuTextbox6->text = "";
					bunifuTextbox4->text = "";
					bunifuTextbox3->text = "";
					bunifuTextbox5->text = "";
					MessageBox::Show("Ви успішно зареєструвалися!\nПоверніться назад для входу.");
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
				con->Close(); //Don't forget to close the connection after Execute reader.

			}
		}
		else
		{
			MessageBox::Show("Введіть ваші дані!");
		}
	
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ password = bunifuTextbox2->text;
		String^ login = bunifuTextbox1->text;

		MySqlCommand^ cmd = gcnew MySqlCommand("select * from reg_info where Login='" + login + "' and Password='" + password + "';", con);
		MySqlDataReader^ dr;


		con->Open();
		try
		{
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read())
			{
				count += 1;
			}
			if (count == 1)
			{
				MessageBox::Show("Ви успішно зайшли, Вітаємо...");
			}
			else
			{
				MessageBox::Show("Логін або пароль вказано невірно!\nПовторіть спробу...");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}


		con->Close(); //Don't forget to close the connection after Execute reader.


	} 
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
