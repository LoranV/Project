#pragma once

#include "MainForm.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//ref class MainForm;

	/// <summary>
	/// Сводка для Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	public:MainForm^ parentForm;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::Button^ button1;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ bunifuCustomTextbox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ bunifuCustomDataGrid1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bunifuCustomTextbox1 = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->bunifuCustomDataGrid1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->bunifuCustomTextbox1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(860, 497);
			this->panel1->TabIndex = 1;
			this->bunifuCustomDataGrid1->AllowUserToAddRows = false;
			this->bunifuCustomDataGrid1->AllowUserToDeleteRows = false;
			this->bunifuCustomDataGrid1->AllowUserToResizeColumns = false;
			this->bunifuCustomDataGrid1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuCustomDataGrid1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(3, 162);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->ReadOnly = true;
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(860, 335);
			this->bunifuCustomDataGrid1->TabIndex = 11;
			this->button1->Location = System::Drawing::Point(634, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Пошук";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search::button1_Click);
			this->bunifuCustomTextbox1->BorderColor = System::Drawing::Color::SeaGreen;
			this->bunifuCustomTextbox1->Location = System::Drawing::Point(105, 126);
			this->bunifuCustomTextbox1->Multiline = true;
			this->bunifuCustomTextbox1->Name = L"bunifuCustomTextbox1";
			this->bunifuCustomTextbox1->Size = System::Drawing::Size(407, 21);
			this->bunifuCustomTextbox1->TabIndex = 2;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Назва", L"Автор", L"Жанр", L"К-ть сторінок" });
			this->comboBox1->Location = System::Drawing::Point(512, 126);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 21);
			this->comboBox1->TabIndex = 1;
			this->bunifuCustomLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(322, 23);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(172, 55);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"Пошук";
			this->bunifuImageButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(3, 3);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(90, 90);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 12;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Search::bunifuImageButton1_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 521);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Search";
			this->Text = L"Search";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = bunifuCustomTextbox1->Text;
		switch (comboBox1->SelectedIndex)
		{
		case 0: {
			String^ constring1 = L"Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `reg_user`.`book_info` WHERE Name LIKE '%" + text + "%';", conDataBase1);
			MySqlDataReader^ myReader1;

			try
			{
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase1;
				DataTable^ dbadataset = gcnew DataTable();
				sda->Fill(dbadataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbadataset;
				bunifuCustomDataGrid1->DataSource = bSource;
				sda->Update(dbadataset);
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			break;
		}
		case 1: {
			String^ constring1 = L"Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `reg_user`.`book_info` WHERE Autor LIKE '%" + text + "%';", conDataBase1);
			MySqlDataReader^ myReader1;

			try
			{
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase1;
				DataTable^ dbadataset = gcnew DataTable();
				sda->Fill(dbadataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbadataset;
				bunifuCustomDataGrid1->DataSource = bSource;
				sda->Update(dbadataset);
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			break;
		}
		case 2: {
			String^ constring1 = L"Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `reg_user`.`book_info` WHERE Genre LIKE '%" + text + "%';", conDataBase1);
			MySqlDataReader^ myReader1;

			try
			{
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase1;
				DataTable^ dbadataset = gcnew DataTable();
				sda->Fill(dbadataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbadataset;
				bunifuCustomDataGrid1->DataSource = bSource;
				sda->Update(dbadataset);
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			break;
		}
		case 3: {
			String^ constring1 = L"Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `reg_user`.`book_info` WHERE Pages LIKE '%" + text + "%';", conDataBase1);
			MySqlDataReader^ myReader1;

			try
			{
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase1;
				DataTable^ dbadataset = gcnew DataTable();
				sda->Fill(dbadataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbadataset;
				bunifuCustomDataGrid1->DataSource = bSource;
				sda->Update(dbadataset);
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			break;
		}
		}
	};
private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
