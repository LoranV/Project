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

	//ref class MainForm;

	/// <summary>
	/// —водка дл€ BookBase
	/// </summary>
	public ref class BookBase : public System::Windows::Forms::Form
	{
	public:
		BookBase(MainForm^ Parent)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~BookBase()
		{
			if (components)
			{
				delete components;
			}
		}
	public:MainForm^ parentForm;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ bunifuCustomDataGrid1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;






	protected:






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookBase::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(266, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 78);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ѕаза  ниг";
			// 
			// bunifuCustomDataGrid1
			// 
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
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::SystemColors::ControlLight;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(12, 124);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->ReadOnly = true;
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(860, 385);
			this->bunifuCustomDataGrid1->TabIndex = 10;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(12, 20);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(90, 90);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 11;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &BookBase::bunifuImageButton1_Click);
			// 
			// BookBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 521);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->bunifuCustomDataGrid1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BookBase";
			this->Text = L"BookBase";
			this->Load += gcnew System::EventHandler(this, &BookBase::BookBase_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BookBase_Load(System::Object^ sender, System::EventArgs^ e) { 
		String^ constring1 =     L"Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=reg_user";
        MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
        MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM `reg_user`.`book_info`; ", conDataBase1);
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
	};
private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
