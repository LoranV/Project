#pragma once
#include "MainForm.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MainForm;

	/// <summary>
	/// Сводка для Recommendation
	/// </summary>
	public ref class Recommendation : public System::Windows::Forms::Form
	{
	public:
		Recommendation(MainForm^ Parent)
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
		~Recommendation()
		{
			if (components)
			{
				delete components;
			}
		}
	public:MainForm^ parentForm;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Panel^ panel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel13;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel14;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel15;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel16;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel40;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel41;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel42;
	private: System::Windows::Forms::Panel^ panel6;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel17;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel18;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel19;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel20;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel37;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel38;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel39;
	private: System::Windows::Forms::Panel^ panel4;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel12;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel21;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel22;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel23;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel24;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel35;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel36;
	private: System::Windows::Forms::Panel^ panel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel7;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel8;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel9;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel10;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel11;
	private: System::Windows::Forms::Panel^ panel8;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel28;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel29;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel30;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel31;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel32;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel33;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel34;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel27;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel26;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel25;


























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Recommendation::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel13 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel14 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel15 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel16 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel40 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel41 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel42 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel17 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel18 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel19 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel20 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel37 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel38 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel39 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel12 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel21 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel22 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel23 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel24 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel35 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel36 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel8 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel9 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel10 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel11 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel28 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel29 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel30 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel31 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel32 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel33 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel34 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel27 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel26 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel25 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->SuspendLayout();
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(108, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(676, 497);
			this->panel1->TabIndex = 1;
			this->panel5->Controls->Add(this->bunifuCustomLabel13);
			this->panel5->Controls->Add(this->bunifuCustomLabel14);
			this->panel5->Controls->Add(this->bunifuCustomLabel15);
			this->panel5->Controls->Add(this->bunifuCustomLabel16);
			this->panel5->Controls->Add(this->bunifuCustomLabel40);
			this->panel5->Controls->Add(this->bunifuCustomLabel41);
			this->panel5->Controls->Add(this->bunifuCustomLabel42);
			this->panel5->Location = System::Drawing::Point(457, 279);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 195);
			this->panel5->TabIndex = 9;
			this->bunifuCustomLabel13->AutoSize = true;
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel13->Location = System::Drawing::Point(3, 118);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel13->TabIndex = 6;
			this->bunifuCustomLabel13->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel14->AutoSize = true;
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel14->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel14->Location = System::Drawing::Point(3, 90);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel14->TabIndex = 5;
			this->bunifuCustomLabel14->Text = L"Жанр:";
			this->bunifuCustomLabel15->AutoSize = true;
			this->bunifuCustomLabel15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel15->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel15->Location = System::Drawing::Point(3, 64);
			this->bunifuCustomLabel15->Name = L"bunifuCustomLabel15";
			this->bunifuCustomLabel15->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel15->TabIndex = 4;
			this->bunifuCustomLabel15->Text = L"Автор:";
			this->bunifuCustomLabel16->AutoSize = true;
			this->bunifuCustomLabel16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel16->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel16->Location = System::Drawing::Point(133, 118);
			this->bunifuCustomLabel16->Name = L"bunifuCustomLabel16";
			this->bunifuCustomLabel16->Size = System::Drawing::Size(36, 20);
			this->bunifuCustomLabel16->TabIndex = 3;
			this->bunifuCustomLabel16->Text = L"176";
			this->bunifuCustomLabel40->AutoSize = true;
			this->bunifuCustomLabel40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel40->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel40->Location = System::Drawing::Point(61, 90);
			this->bunifuCustomLabel40->Name = L"bunifuCustomLabel40";
			this->bunifuCustomLabel40->Size = System::Drawing::Size(92, 20);
			this->bunifuCustomLabel40->TabIndex = 2;
			this->bunifuCustomLabel40->Text = L"Психологія";
			this->bunifuCustomLabel41->AutoSize = true;
			this->bunifuCustomLabel41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel41->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel41->Location = System::Drawing::Point(64, 64);
			this->bunifuCustomLabel41->Name = L"bunifuCustomLabel41";
			this->bunifuCustomLabel41->Size = System::Drawing::Size(89, 20);
			this->bunifuCustomLabel41->TabIndex = 1;
			this->bunifuCustomLabel41->Text = L"Джон Кехо";
			this->bunifuCustomLabel42->AutoSize = true;
			this->bunifuCustomLabel42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel42->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel42->Location = System::Drawing::Point(3, 11);
			this->bunifuCustomLabel42->Name = L"bunifuCustomLabel42";
			this->bunifuCustomLabel42->Size = System::Drawing::Size(156, 50);
			this->bunifuCustomLabel42->TabIndex = 0;
			this->bunifuCustomLabel42->Text = L"Підсвідомості\r\nвсе підвладне";
			this->panel6->Controls->Add(this->bunifuCustomLabel17);
			this->panel6->Controls->Add(this->bunifuCustomLabel18);
			this->panel6->Controls->Add(this->bunifuCustomLabel19);
			this->panel6->Controls->Add(this->bunifuCustomLabel20);
			this->panel6->Controls->Add(this->bunifuCustomLabel37);
			this->panel6->Controls->Add(this->bunifuCustomLabel38);
			this->panel6->Controls->Add(this->bunifuCustomLabel39);
			this->panel6->Location = System::Drawing::Point(237, 279);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 195);
			this->panel6->TabIndex = 8;
			this->bunifuCustomLabel17->AutoSize = true;
			this->bunifuCustomLabel17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel17->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel17->Location = System::Drawing::Point(3, 115);
			this->bunifuCustomLabel17->Name = L"bunifuCustomLabel17";
			this->bunifuCustomLabel17->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel17->TabIndex = 6;
			this->bunifuCustomLabel17->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel18->AutoSize = true;
			this->bunifuCustomLabel18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel18->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel18->Location = System::Drawing::Point(3, 80);
			this->bunifuCustomLabel18->Name = L"bunifuCustomLabel18";
			this->bunifuCustomLabel18->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel18->TabIndex = 5;
			this->bunifuCustomLabel18->Text = L"Жанр:";
			this->bunifuCustomLabel19->AutoSize = true;
			this->bunifuCustomLabel19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel19->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel19->Location = System::Drawing::Point(3, 47);
			this->bunifuCustomLabel19->Name = L"bunifuCustomLabel19";
			this->bunifuCustomLabel19->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel19->TabIndex = 4;
			this->bunifuCustomLabel19->Text = L"Автор:";
			this->bunifuCustomLabel20->AutoSize = true;
			this->bunifuCustomLabel20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel20->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel20->Location = System::Drawing::Point(133, 115);
			this->bunifuCustomLabel20->Name = L"bunifuCustomLabel20";
			this->bunifuCustomLabel20->Size = System::Drawing::Size(36, 20);
			this->bunifuCustomLabel20->TabIndex = 3;
			this->bunifuCustomLabel20->Text = L"160";
			this->bunifuCustomLabel37->AutoSize = true;
			this->bunifuCustomLabel37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel37->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel37->Location = System::Drawing::Point(61, 80);
			this->bunifuCustomLabel37->Name = L"bunifuCustomLabel37";
			this->bunifuCustomLabel37->Size = System::Drawing::Size(145, 20);
			this->bunifuCustomLabel37->TabIndex = 2;
			this->bunifuCustomLabel37->Text = L"Літературна серія";
			this->bunifuCustomLabel38->AutoSize = true;
			this->bunifuCustomLabel38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel38->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel38->Location = System::Drawing::Point(64, 47);
			this->bunifuCustomLabel38->Name = L"bunifuCustomLabel38";
			this->bunifuCustomLabel38->Size = System::Drawing::Size(108, 20);
			this->bunifuCustomLabel38->TabIndex = 1;
			this->bunifuCustomLabel38->Text = L"Эрин Хантер";
			this->bunifuCustomLabel39->AutoSize = true;
			this->bunifuCustomLabel39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel39->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel39->Location = System::Drawing::Point(3, 11);
			this->bunifuCustomLabel39->Name = L"bunifuCustomLabel39";
			this->bunifuCustomLabel39->Size = System::Drawing::Size(128, 25);
			this->bunifuCustomLabel39->TabIndex = 0;
			this->bunifuCustomLabel39->Text = L"Коти-вояки";
			this->panel4->Controls->Add(this->bunifuCustomLabel12);
			this->panel4->Controls->Add(this->bunifuCustomLabel21);
			this->panel4->Controls->Add(this->bunifuCustomLabel22);
			this->panel4->Controls->Add(this->bunifuCustomLabel23);
			this->panel4->Controls->Add(this->bunifuCustomLabel24);
			this->panel4->Controls->Add(this->bunifuCustomLabel35);
			this->panel4->Controls->Add(this->bunifuCustomLabel36);
			this->panel4->Location = System::Drawing::Point(18, 279);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 195);
			this->panel4->TabIndex = 7;
			this->bunifuCustomLabel12->AutoSize = true;
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel12->Location = System::Drawing::Point(3, 164);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel12->TabIndex = 6;
			this->bunifuCustomLabel12->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel21->AutoSize = true;
			this->bunifuCustomLabel21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel21->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel21->Location = System::Drawing::Point(3, 134);
			this->bunifuCustomLabel21->Name = L"bunifuCustomLabel21";
			this->bunifuCustomLabel21->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel21->TabIndex = 5;
			this->bunifuCustomLabel21->Text = L"Жанр:";
			this->bunifuCustomLabel22->AutoSize = true;
			this->bunifuCustomLabel22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel22->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel22->Location = System::Drawing::Point(3, 67);
			this->bunifuCustomLabel22->Name = L"bunifuCustomLabel22";
			this->bunifuCustomLabel22->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel22->TabIndex = 4;
			this->bunifuCustomLabel22->Text = L"Автор:";
			this->bunifuCustomLabel23->AutoSize = true;
			this->bunifuCustomLabel23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel23->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel23->Location = System::Drawing::Point(133, 164);
			this->bunifuCustomLabel23->Name = L"bunifuCustomLabel23";
			this->bunifuCustomLabel23->Size = System::Drawing::Size(36, 20);
			this->bunifuCustomLabel23->TabIndex = 3;
			this->bunifuCustomLabel23->Text = L"160";
			this->bunifuCustomLabel24->AutoSize = true;
			this->bunifuCustomLabel24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel24->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel24->Location = System::Drawing::Point(61, 134);
			this->bunifuCustomLabel24->Name = L"bunifuCustomLabel24";
			this->bunifuCustomLabel24->Size = System::Drawing::Size(139, 20);
			this->bunifuCustomLabel24->TabIndex = 2;
			this->bunifuCustomLabel24->Text = L"Пригоди/Мюзикл";
			this->bunifuCustomLabel35->AutoSize = true;
			this->bunifuCustomLabel35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel35->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel35->Location = System::Drawing::Point(64, 67);
			this->bunifuCustomLabel35->Name = L"bunifuCustomLabel35";
			this->bunifuCustomLabel35->Size = System::Drawing::Size(98, 60);
			this->bunifuCustomLabel35->TabIndex = 1;
			this->bunifuCustomLabel35->Text = L"Бромберг\r\nКостянтин \r\nЛеонідович";
			this->bunifuCustomLabel36->AutoSize = true;
			this->bunifuCustomLabel36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel36->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel36->Location = System::Drawing::Point(3, 11);
			this->bunifuCustomLabel36->Name = L"bunifuCustomLabel36";
			this->bunifuCustomLabel36->Size = System::Drawing::Size(138, 50);
			this->bunifuCustomLabel36->TabIndex = 0;
			this->bunifuCustomLabel36->Text = L"Пригоди\r\nЕлектроніка";
			this->panel3->Controls->Add(this->bunifuCustomLabel5);
			this->panel3->Controls->Add(this->bunifuCustomLabel6);
			this->panel3->Controls->Add(this->bunifuCustomLabel7);
			this->panel3->Controls->Add(this->bunifuCustomLabel8);
			this->panel3->Controls->Add(this->bunifuCustomLabel9);
			this->panel3->Controls->Add(this->bunifuCustomLabel10);
			this->panel3->Controls->Add(this->bunifuCustomLabel11);
			this->panel3->Location = System::Drawing::Point(457, 48);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 195);
			this->panel3->TabIndex = 8;
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(6, 146);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel5->TabIndex = 6;
			this->bunifuCustomLabel5->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(6, 100);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel6->TabIndex = 5;
			this->bunifuCustomLabel6->Text = L"Жанр:";
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(6, 72);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel7->TabIndex = 4;
			this->bunifuCustomLabel7->Text = L"Автор:";
			this->bunifuCustomLabel8->AutoSize = true;
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel8->Location = System::Drawing::Point(134, 146);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(36, 20);
			this->bunifuCustomLabel8->TabIndex = 3;
			this->bunifuCustomLabel8->Text = L"240";
			this->bunifuCustomLabel9->AutoSize = true;
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel9->Location = System::Drawing::Point(66, 100);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(103, 40);
			this->bunifuCustomLabel9->TabIndex = 2;
			this->bunifuCustomLabel9->Text = L"Дитячий\r\nФантастика";
			this->bunifuCustomLabel10->AutoSize = true;
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel10->Location = System::Drawing::Point(73, 72);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(102, 20);
			this->bunifuCustomLabel10->TabIndex = 1;
			this->bunifuCustomLabel10->Text = L"Роальд Дал";
			this->bunifuCustomLabel11->AutoSize = true;
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel11->Location = System::Drawing::Point(6, 15);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(196, 50);
			this->bunifuCustomLabel11->TabIndex = 0;
			this->bunifuCustomLabel11->Text = L"Чарлі і шоколадна\r\nфабрика";
			this->panel8->Controls->Add(this->bunifuCustomLabel28);
			this->panel8->Controls->Add(this->bunifuCustomLabel29);
			this->panel8->Controls->Add(this->bunifuCustomLabel30);
			this->panel8->Controls->Add(this->bunifuCustomLabel31);
			this->panel8->Controls->Add(this->bunifuCustomLabel32);
			this->panel8->Controls->Add(this->bunifuCustomLabel33);
			this->panel8->Controls->Add(this->bunifuCustomLabel34);
			this->panel8->Location = System::Drawing::Point(237, 48);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(200, 195);
			this->panel8->TabIndex = 7;
			this->bunifuCustomLabel28->AutoSize = true;
			this->bunifuCustomLabel28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel28->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel28->Location = System::Drawing::Point(6, 120);
			this->bunifuCustomLabel28->Name = L"bunifuCustomLabel28";
			this->bunifuCustomLabel28->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel28->TabIndex = 6;
			this->bunifuCustomLabel28->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel29->AutoSize = true;
			this->bunifuCustomLabel29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel29->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel29->Location = System::Drawing::Point(6, 85);
			this->bunifuCustomLabel29->Name = L"bunifuCustomLabel29";
			this->bunifuCustomLabel29->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel29->TabIndex = 5;
			this->bunifuCustomLabel29->Text = L"Жанр:";
			this->bunifuCustomLabel30->AutoSize = true;
			this->bunifuCustomLabel30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel30->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel30->Location = System::Drawing::Point(6, 50);
			this->bunifuCustomLabel30->Name = L"bunifuCustomLabel30";
			this->bunifuCustomLabel30->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel30->TabIndex = 4;
			this->bunifuCustomLabel30->Text = L"Автор:";
			this->bunifuCustomLabel31->AutoSize = true;
			this->bunifuCustomLabel31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel31->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel31->Location = System::Drawing::Point(134, 120);
			this->bunifuCustomLabel31->Name = L"bunifuCustomLabel31";
			this->bunifuCustomLabel31->Size = System::Drawing::Size(49, 20);
			this->bunifuCustomLabel31->TabIndex = 3;
			this->bunifuCustomLabel31->Text = L"1 138";
			this->bunifuCustomLabel32->AutoSize = true;
			this->bunifuCustomLabel32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel32->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel32->Location = System::Drawing::Point(66, 85);
			this->bunifuCustomLabel32->Name = L"bunifuCustomLabel32";
			this->bunifuCustomLabel32->Size = System::Drawing::Size(106, 20);
			this->bunifuCustomLabel32->TabIndex = 2;
			this->bunifuCustomLabel32->Text = L"Жахи/Трилер";
			this->bunifuCustomLabel33->AutoSize = true;
			this->bunifuCustomLabel33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel33->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel33->Location = System::Drawing::Point(73, 50);
			this->bunifuCustomLabel33->Name = L"bunifuCustomLabel33";
			this->bunifuCustomLabel33->Size = System::Drawing::Size(92, 20);
			this->bunifuCustomLabel33->TabIndex = 1;
			this->bunifuCustomLabel33->Text = L"Стівен Кінг";
			this->bunifuCustomLabel34->AutoSize = true;
			this->bunifuCustomLabel34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel34->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel34->Location = System::Drawing::Point(6, 15);
			this->bunifuCustomLabel34->Name = L"bunifuCustomLabel34";
			this->bunifuCustomLabel34->Size = System::Drawing::Size(61, 25);
			this->bunifuCustomLabel34->TabIndex = 0;
			this->bunifuCustomLabel34->Text = L"Воно";
			this->panel2->Controls->Add(this->bunifuCustomLabel27);
			this->panel2->Controls->Add(this->bunifuCustomLabel26);
			this->panel2->Controls->Add(this->bunifuCustomLabel25);
			this->panel2->Controls->Add(this->bunifuCustomLabel4);
			this->panel2->Controls->Add(this->bunifuCustomLabel3);
			this->panel2->Controls->Add(this->bunifuCustomLabel2);
			this->panel2->Controls->Add(this->bunifuCustomLabel1);
			this->panel2->Location = System::Drawing::Point(18, 48);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 195);
			this->panel2->TabIndex = 0;
			this->bunifuCustomLabel27->AutoSize = true;
			this->bunifuCustomLabel27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel27->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel27->Location = System::Drawing::Point(7, 129);
			this->bunifuCustomLabel27->Name = L"bunifuCustomLabel27";
			this->bunifuCustomLabel27->Size = System::Drawing::Size(128, 20);
			this->bunifuCustomLabel27->TabIndex = 6;
			this->bunifuCustomLabel27->Text = L"К-ть сторінок:";
			this->bunifuCustomLabel26->AutoSize = true;
			this->bunifuCustomLabel26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel26->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel26->Location = System::Drawing::Point(7, 97);
			this->bunifuCustomLabel26->Name = L"bunifuCustomLabel26";
			this->bunifuCustomLabel26->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel26->TabIndex = 5;
			this->bunifuCustomLabel26->Text = L"Жанр:";
			this->bunifuCustomLabel25->AutoSize = true;
			this->bunifuCustomLabel25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel25->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel25->Location = System::Drawing::Point(6, 67);
			this->bunifuCustomLabel25->Name = L"bunifuCustomLabel25";
			this->bunifuCustomLabel25->Size = System::Drawing::Size(66, 20);
			this->bunifuCustomLabel25->TabIndex = 4;
			this->bunifuCustomLabel25->Text = L"Автор:";
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel4->Location = System::Drawing::Point(134, 129);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(36, 20);
			this->bunifuCustomLabel4->TabIndex = 3;
			this->bunifuCustomLabel4->Text = L"320";
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(65, 97);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(58, 20);
			this->bunifuCustomLabel3->TabIndex = 2;
			this->bunifuCustomLabel3->Text = L"Комікс";
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(68, 67);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(129, 20);
			this->bunifuCustomLabel2->TabIndex = 1;
			this->bunifuCustomLabel2->Text = L"Chugong, DUBU";
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(5, 11);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(168, 50);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"Тільки я візьму\r\nновий рівень";
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(32, 30);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(70, 70);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 15;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 0;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &Recommendation::bunifuImageButton2_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 521);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->panel1);
			this->Name = L"Recommendation";
			this->Text = L"Recommendation";
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void bunifuImageButton2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
