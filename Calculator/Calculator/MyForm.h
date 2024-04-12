#pragma once
#include <string>



namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button43;
	protected:

	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button36;
	protected:










	private: System::Windows::Forms::Button^ button35;

	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button33;




	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button46;

	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button49;




	private: System::Windows::Forms::Button^ button48;

	private: System::Windows::Forms::Button^ button47;

	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button50;


	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button44;


	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;


	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button45;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button43->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold));
			this->button43->ForeColor = System::Drawing::SystemColors::Window;
			this->button43->Location = System::Drawing::Point(293, 452);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(62, 56);
			this->button43->TabIndex = 0;
			this->button43->Text = L"=";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button34->Location = System::Drawing::Point(27, 308);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(62, 56);
			this->button34->TabIndex = 23;
			this->button34->Text = L"4";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button36->Location = System::Drawing::Point(204, 308);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(62, 56);
			this->button36->TabIndex = 22;
			this->button36->Text = L"6";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button35->Location = System::Drawing::Point(116, 308);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(62, 56);
			this->button35->TabIndex = 21;
			this->button35->Text = L"5";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button31->Location = System::Drawing::Point(27, 236);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(62, 56);
			this->button31->TabIndex = 27;
			this->button31->Text = L"1";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button33->Location = System::Drawing::Point(204, 236);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(62, 56);
			this->button33->TabIndex = 26;
			this->button33->Text = L"3";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button32->Location = System::Drawing::Point(116, 236);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(62, 56);
			this->button32->TabIndex = 25;
			this->button32->Text = L"2";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button46->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button46->Location = System::Drawing::Point(293, 236);
			this->button46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(62, 56);
			this->button46->TabIndex = 24;
			this->button46->Text = L"x";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button42->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button42->Location = System::Drawing::Point(204, 452);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(62, 56);
			this->button42->TabIndex = 31;
			this->button42->Text = L"C";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button49->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button49->Location = System::Drawing::Point(116, 164);
			this->button49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(62, 56);
			this->button49->TabIndex = 30;
			this->button49->Text = L"%";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button48->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button48->Location = System::Drawing::Point(204, 164);
			this->button48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(62, 56);
			this->button48->TabIndex = 29;
			this->button48->Text = L"<";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button47->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button47->Location = System::Drawing::Point(293, 164);
			this->button47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(62, 56);
			this->button47->TabIndex = 28;
			this->button47->Text = L"÷";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button40->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button40->Location = System::Drawing::Point(116, 452);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(62, 56);
			this->button40->TabIndex = 1;
			this->button40->Text = L"0";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button50->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button50->Location = System::Drawing::Point(27, 164);
			this->button50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(62, 56);
			this->button50->TabIndex = 2;
			this->button50->Text = L"^";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button41->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button41->Location = System::Drawing::Point(27, 452);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(62, 56);
			this->button41->TabIndex = 3;
			this->button41->Text = L".";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button44->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button44->Location = System::Drawing::Point(293, 380);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(62, 56);
			this->button44->TabIndex = 16;
			this->button44->Text = L"+";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button38->Location = System::Drawing::Point(116, 380);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(62, 56);
			this->button38->TabIndex = 17;
			this->button38->Text = L"8";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button39->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button39->Location = System::Drawing::Point(204, 380);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(62, 56);
			this->button39->TabIndex = 18;
			this->button39->Text = L"9";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button37->Location = System::Drawing::Point(27, 380);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(62, 56);
			this->button37->TabIndex = 19;
			this->button37->Text = L"7";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button45->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button45->Location = System::Drawing::Point(292, 308);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(62, 56);
			this->button45->TabIndex = 20;
			this->button45->Text = L"-";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(36, 45);
			this->label1->MaximumSize = System::Drawing::Size(330, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 51);
			this->label1->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 12);
			this->label2->MaximumSize = System::Drawing::Size(1, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 1);
			this->label2->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 12);
			this->label3->MaximumSize = System::Drawing::Size(1, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 1);
			this->label3->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(88, 6);
			this->label4->MaximumSize = System::Drawing::Size(1, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 1);
			this->label4->TabIndex = 35;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(376, 522);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button43);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
		  
		   

private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "1";
	label1->Text = label1->Text + "1";
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "2";
	label1->Text = label1->Text + "2";
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "3";
	label1->Text = label1->Text + "3";
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "4";
	label1->Text = label1->Text + "4";
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "5";
	label1->Text = label1->Text + "5";
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "6";
	label1->Text = label1->Text + "6";
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "7";
	label1->Text = label1->Text + "7";
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "8";
	label1->Text = label1->Text + "8";
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "9";
	label1->Text = label1->Text + "9";
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "H") {
		label1->Text = "";
		label4->Text = "";
	}
	label2->Text = label2->Text + "0";
	label1->Text = label1->Text + "0";
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {

	if (label4->Text == "H" || label1->Text == "") {
		label2->Text = "0.";
		label1->Text = "0.";
		label4->Text = "";
	}
	else
	{
		label2->Text = label2->Text + ".";
		label1->Text = label1->Text + ".";
	}
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
	label2->Text = "";
	label3->Text = "";
	label4->Text = "";
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	float num1, num2, result;

	num1 = System::Convert::ToSingle(label3->Text);
	num2 = System::Convert::ToSingle(label2->Text);


	if (label4->Text == "A") {
		result = num1 + num2;
	}
	else if (label4->Text == "B") {
		result = num1 - num2;
	}
	else if (label4->Text == "C") {
		result = num1 * num2;
	}
	else if (label4->Text == "D") {
		result = num1 / num2;
	}
	else if (label4->Text == "E") {
		result = 100 * num2 / num1;
	}
	else if (label4->Text == "F") {
		result = 1;
		for (int i = 1; i <= num2; i++) {
			result = result * num1;
		}
	}
	if (label1->Text->Length > 12) {
		label1->Text = "Math Error";
	}
	else {
		label1->Text = System::Convert::ToString(result);
	}
	
	
	label2->Text = "";
	label3->Text = "";
	label4->Text = "H";
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {

	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "A";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "+";
	}
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "B";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "-";
	}
	
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "C";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "x";
	}
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "D";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "÷";
	}
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label2->Text != "") {
		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
		label2->Text = label2->Text->Remove(label2->Text->Length - 1);
	}
	else if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {
		label4->Text = "";
		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
		label2->Text = label3->Text;
	}
	
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "E";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "%";
	}
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label4->Text == "A" || label4->Text == "B" || label4->Text == "C" || label4->Text == "D" || label4->Text == "E" || label4->Text == "F") {

		label1->Text = label1->Text->Remove(label1->Text->Length - 1);
	}

	if (label4->Text != "H") {
		label4->Text = "F";
		label3->Text = label2->Text;
		label2->Text = "";
		label1->Text = label1->Text + "^";
	}
}
};
}
