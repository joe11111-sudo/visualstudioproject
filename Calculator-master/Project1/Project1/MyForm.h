#pragma once

namespace Project1 {
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
		//声明元件
#pragma region private
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ EqualsButton;
	private: System::Windows::Forms::Button^ DecimalPointButton;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ XButton;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ PlusMinusButton;
	private: System::Windows::Forms::Button^ CButton;
	private: System::Windows::Forms::Button^ CEButton;
	private: System::Windows::Forms::Button^ SinButton;
	private: System::Windows::Forms::Button^ SqrtButton;
	private: System::Windows::Forms::Button^ lnButton;
	private: System::Windows::Forms::Button^ Facbutton;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ ExpButton;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ TanhButton;
	private: System::Windows::Forms::Button^ SinhButton;
	private: System::Windows::Forms::Button^ CoshButton;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ CosButton;
	private: System::Windows::Forms::Button^ TanButton;
	private: System::Windows::Forms::Button^ button36;

	private: System::Windows::Forms::ToolStripMenuItem^ sToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ temperatureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem1;

	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblshowOp;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma endregion

		//设置Form里元件的参数
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->EqualsButton = (gcnew System::Windows::Forms::Button());
			this->DecimalPointButton = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->XButton = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->PlusMinusButton = (gcnew System::Windows::Forms::Button());
			this->CButton = (gcnew System::Windows::Forms::Button());
			this->CEButton = (gcnew System::Windows::Forms::Button());
			this->SinButton = (gcnew System::Windows::Forms::Button());
			this->SqrtButton = (gcnew System::Windows::Forms::Button());
			this->lnButton = (gcnew System::Windows::Forms::Button());
			this->Facbutton = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->ExpButton = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->TanhButton = (gcnew System::Windows::Forms::Button());
			this->SinhButton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->CoshButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->lblshowOp = (gcnew System::Windows::Forms::Label());
			this->CosButton = (gcnew System::Windows::Forms::Button());
			this->TanButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();

			this->SuspendLayout();
			//
			// menuStrip1
			//
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1271, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			//
			// fileToolStripMenuItem
			//
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->standardToolStripMenuItem,
					this->sToolStripMenuItem, this->temperatureToolStripMenuItem, this->historyToolStripMenuItem1, this->historyToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			//
			// standardToolStripMenuItem
			//
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			//
			// sToolStripMenuItem
			//
			this->sToolStripMenuItem->Name = L"sToolStripMenuItem";
			this->sToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->sToolStripMenuItem->Text = L"Scientific";
			this->sToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sToolStripMenuItem_Click);
			//
			// temperatureToolStripMenuItem
			//
			this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
			this->temperatureToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->temperatureToolStripMenuItem->Text = L"Temperature";
			this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temperatureToolStripMenuItem_Click);
			//
			// historyToolStripMenuItem1
			//
			this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
			this->historyToolStripMenuItem1->Size = System::Drawing::Size(176, 26);
			this->historyToolStripMenuItem1->Text = L"history";
			this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
			//
			// historyToolStripMenuItem
			//
			this->historyToolStripMenuItem->Checked = true;
			this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->historyToolStripMenuItem->Text = L"History";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
			//
			// exitToolStripMenuItem
			//
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			//
			// editToolStripMenuItem
			//
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			//
			// helpToolStripMenuItem
			//
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			//
			// textBox1
			//
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(821, 147);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			//
			// button1
			//
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button2
			//
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(124, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 67);
			this->button2->TabIndex = 5;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button3
			//
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(236, 266);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 67);
			this->button3->TabIndex = 6;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button4
			//
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(348, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 67);
			this->button4->TabIndex = 7;
			this->button4->Text = L"×";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			//
			// button5
			//
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(348, 412);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 67);
			this->button5->TabIndex = 11;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			//
			// button6
			//
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(237, 338);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 67);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button7
			//
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(124, 339);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 67);
			this->button7->TabIndex = 9;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button8
			//
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 339);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 67);
			this->button8->TabIndex = 8;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button9
			//
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(348, 485);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(106, 67);
			this->button9->TabIndex = 15;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			//
			// button10
			//
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(236, 412);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(106, 67);
			this->button10->TabIndex = 14;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button11
			//
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(124, 412);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 67);
			this->button11->TabIndex = 13;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// button12
			//
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 412);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(106, 67);
			this->button12->TabIndex = 12;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// EqualsButton
			//
			this->EqualsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualsButton->Location = System::Drawing::Point(236, 485);
			this->EqualsButton->Name = L"EqualsButton";
			this->EqualsButton->Size = System::Drawing::Size(106, 67);
			this->EqualsButton->TabIndex = 19;
			this->EqualsButton->Text = L"=";
			this->EqualsButton->UseVisualStyleBackColor = true;
			this->EqualsButton->Click += gcnew System::EventHandler(this, &MyForm::EqualsButton_Click);
			//
			// DecimalPointButton
			//
			this->DecimalPointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DecimalPointButton->Location = System::Drawing::Point(124, 485);
			this->DecimalPointButton->Name = L"DecimalPointButton";
			this->DecimalPointButton->Size = System::Drawing::Size(106, 67);
			this->DecimalPointButton->TabIndex = 18;
			this->DecimalPointButton->Text = L".";
			this->DecimalPointButton->UseVisualStyleBackColor = true;
			this->DecimalPointButton->Click += gcnew System::EventHandler(this, &MyForm::DecimalPointButton_Click);
			//
			// button15
			//
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(12, 484);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(106, 67);
			this->button15->TabIndex = 17;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			//
			// XButton
			//
			this->XButton->Font = (gcnew System::Drawing::Font(L"Wingdings", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->XButton->Location = System::Drawing::Point(236, 193);
			this->XButton->Name = L"XButton";
			this->XButton->Size = System::Drawing::Size(106, 67);
			this->XButton->TabIndex = 16;
			this->XButton->Text = L"Õ";
			this->XButton->UseVisualStyleBackColor = true;
			this->XButton->Click += gcnew System::EventHandler(this, &MyForm::XButton_Click);
			//
			// button17
			//
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(348, 266);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 67);
			this->button17->TabIndex = 23;
			this->button17->Text = L"÷";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			//
			// PlusMinusButton
			//
			this->PlusMinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusMinusButton->Location = System::Drawing::Point(348, 193);
			this->PlusMinusButton->Name = L"PlusMinusButton";
			this->PlusMinusButton->Size = System::Drawing::Size(106, 67);
			this->PlusMinusButton->TabIndex = 22;
			this->PlusMinusButton->Text = L"±";
			this->PlusMinusButton->UseVisualStyleBackColor = true;
			this->PlusMinusButton->Click += gcnew System::EventHandler(this, &MyForm::PlusMinusButton_Click);
			//
			// CButton
			//
			this->CButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CButton->Location = System::Drawing::Point(124, 195);
			this->CButton->Name = L"CButton";
			this->CButton->Size = System::Drawing::Size(106, 67);
			this->CButton->TabIndex = 21;
			this->CButton->Text = L"C";
			this->CButton->UseVisualStyleBackColor = true;
			this->CButton->Click += gcnew System::EventHandler(this, &MyForm::CButton_Click);
			//
			// CEButton
			//
			this->CEButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CEButton->Location = System::Drawing::Point(12, 193);
			this->CEButton->Name = L"CEButton";
			this->CEButton->Size = System::Drawing::Size(106, 67);
			this->CEButton->TabIndex = 20;
			this->CEButton->Text = L"CE";
			this->CEButton->UseVisualStyleBackColor = true;
			this->CEButton->Click += gcnew System::EventHandler(this, &MyForm::CEButton_Click);
			//
			// SinButton
			//
			this->SinButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SinButton->Location = System::Drawing::Point(503, 265);
			this->SinButton->Name = L"SinButton";
			this->SinButton->Size = System::Drawing::Size(106, 67);
			this->SinButton->TabIndex = 36;
			this->SinButton->Text = L"sin";
			this->SinButton->UseVisualStyleBackColor = true;
			this->SinButton->Click += gcnew System::EventHandler(this, &MyForm::SinButton_Click);
			//
			// SqrtButton
			//
			this->SqrtButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SqrtButton->Location = System::Drawing::Point(615, 412);
			this->SqrtButton->Name = L"SqrtButton";
			this->SqrtButton->Size = System::Drawing::Size(106, 67);
			this->SqrtButton->TabIndex = 33;
			this->SqrtButton->Text = L"√";
			this->SqrtButton->UseVisualStyleBackColor = true;
			this->SqrtButton->Click += gcnew System::EventHandler(this, &MyForm::SqrtButton_Click);
			//
			// lnButton
			//
			this->lnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnButton->Location = System::Drawing::Point(503, 412);
			this->lnButton->Name = L"lnButton";
			this->lnButton->Size = System::Drawing::Size(106, 67);
			this->lnButton->TabIndex = 32;
			this->lnButton->Text = L"ln";
			this->lnButton->UseVisualStyleBackColor = true;
			this->lnButton->Click += gcnew System::EventHandler(this, &MyForm::lnButton_Click);
			//
			// Facbutton
			//
			this->Facbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Facbutton->Location = System::Drawing::Point(727, 412);
			this->Facbutton->Name = L"Facbutton";
			this->Facbutton->Size = System::Drawing::Size(106, 67);
			this->Facbutton->TabIndex = 30;
			this->Facbutton->Text = L"!";
			this->Facbutton->UseVisualStyleBackColor = true;
			this->Facbutton->Click += gcnew System::EventHandler(this, &MyForm::Facbutton_Click);
			//
			// button30
			//
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(727, 485);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(106, 67);
			this->button30->TabIndex = 29;
			this->button30->Text = L"x^3";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			//
			// button31
			//
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(615, 485);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(106, 67);
			this->button31->TabIndex = 28;
			this->button31->Text = L"x^2";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			//
			// button32
			//
			this->button32->Font = (gcnew System::Drawing::Font(L"Candara", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(503, 485);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(106, 67);
			this->button32->TabIndex = 27;
			this->button32->Text = L"π";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			//
			// button33
			//
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(727, 339);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(106, 67);
			this->button33->TabIndex = 26;
			this->button33->Text = L"mod";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);

			//
			// ExpButton
			//
			this->ExpButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExpButton->Location = System::Drawing::Point(615, 339);
			this->ExpButton->Name = L"button34";
			this->ExpButton->Size = System::Drawing::Size(106, 67);
			this->ExpButton->TabIndex = 25;
			this->ExpButton->Text = L"exp";
			this->ExpButton->UseVisualStyleBackColor = true;
			this->ExpButton->Click += gcnew System::EventHandler(this, &MyForm::ExpButton_Click);
			//
			// button35
			//
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(503, 339);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(106, 67);
			this->button35->TabIndex = 24;
			this->button35->Text = L"log";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::LogButton_Click);
			//
			// TanhButton
			//
			this->TanhButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TanhButton->Location = System::Drawing::Point(727, 192);
			this->TanhButton->Name = L"TanhButton";
			this->TanhButton->Size = System::Drawing::Size(106, 67);
			this->TanhButton->TabIndex = 41;
			this->TanhButton->Text = L"tanh";
			this->TanhButton->UseVisualStyleBackColor = true;
			this->TanhButton->Click += gcnew System::EventHandler(this, &MyForm::TanhButton_Click);
			//
			// SinhButton
			//
			this->SinhButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SinhButton->Location = System::Drawing::Point(503, 192);
			this->SinhButton->Name = L"SinhButton";
			this->SinhButton->Size = System::Drawing::Size(106, 67);
			this->SinhButton->TabIndex = 39;
			this->SinhButton->Text = L"sinh";
			this->SinhButton->UseVisualStyleBackColor = true;
			this->SinhButton->Click += gcnew System::EventHandler(this, &MyForm::SinhButton_Click);
			//
			// listBox1
			//
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 558);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(821, 148);
			this->listBox1->TabIndex = 42;
			//
			// CoshButton
			//
			this->CoshButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CoshButton->Location = System::Drawing::Point(615, 192);
			this->CoshButton->Name = L"CoshButton";
			this->CoshButton->Size = System::Drawing::Size(106, 67);
			this->CoshButton->TabIndex = 43;
			this->CoshButton->Text = L"cosh";
			this->CoshButton->UseVisualStyleBackColor = true;
			this->CoshButton->Click += gcnew System::EventHandler(this, &MyForm::CoshButton_Click);
			//
			// panel1
			//
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button37);
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->radioButton7);
			this->panel1->Controls->Add(this->radioButton6);
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(849, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(410, 665);
			this->panel1->TabIndex = 44;
			//
			// textBox3
			//
			this->textBox3->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(154, 359);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(189, 50);
			this->textBox3->TabIndex = 14;
			//
			// textBox2
			//
			this->textBox2->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(263, 13);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 45);
			this->textBox2->TabIndex = 13;
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 48);
			this->label2->TabIndex = 11;
			this->label2->Text = L"RESULT:";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Algerian", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 20);
			this->label3->Name = L"label1";
			this->label3->Size = System::Drawing::Size(323, 48);
			this->label3->TabIndex = 7;
			this->label3->Text = L"ENTER VALUE:";
			//
			// button37
			//
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(220, 443);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(158, 67);
			this->button37->TabIndex = 12;
			this->button37->Text = L"RESET";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			//
			// button36
			//
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(17, 444);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(149, 67);
			this->button36->TabIndex = 9;
			this->button36->Text = L"CONVERT";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			//
			// radioButton7
			//
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton7->Location = System::Drawing::Point(46, 297);
			this->radioButton7->Margin = System::Windows::Forms::Padding(2);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(151, 31);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"K -> °C";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			//
			// radioButton6
			//
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton6->Location = System::Drawing::Point(46, 203);
			this->radioButton6->Margin = System::Windows::Forms::Padding(2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(151, 31);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"°F -> K";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			//
			// radioButton5
			//
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton5->Location = System::Drawing::Point(46, 249);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(151, 31);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"K -> °F";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			//
			// radioButton3
			//
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton3->Location = System::Drawing::Point(46, 113);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(224, 31);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"°F  -> °C  ";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			//
			// radioButton2
			//
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(46, 155);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(151, 31);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"°C -> K";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			//
			// radioButton1
			//
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"SimSun", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(46, 67);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(194, 31);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"°C  -> °F";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			//
			// lblshowOp
			//
			this->lblshowOp->AutoSize = true;
			this->lblshowOp->Location = System::Drawing::Point(18, 47);
			this->lblshowOp->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblshowOp->Name = L"lblshowOp";
			this->lblshowOp->Size = System::Drawing::Size(46, 17);
			this->lblshowOp->TabIndex = 45;
			this->lblshowOp->Text = L"0";
			//
			// CosButton
			//
			this->CosButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CosButton->Location = System::Drawing::Point(727, 265);
			this->CosButton->Name = L"CosButton";
			this->CosButton->Size = System::Drawing::Size(106, 67);
			this->CosButton->TabIndex = 46;
			this->CosButton->Text = L"tan";
			this->CosButton->UseVisualStyleBackColor = true;
			this->CosButton->Click += gcnew System::EventHandler(this, &MyForm::CosButton_Click);
			//
			// TanButton
			//
			this->TanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TanButton->Location = System::Drawing::Point(615, 266);
			this->TanButton->Name = L"TanButton";
			this->TanButton->Size = System::Drawing::Size(106, 67);
			this->TanButton->TabIndex = 47;
			this->TanButton->Text = L"cos";
			this->TanButton->UseVisualStyleBackColor = true;
			this->TanButton->Click += gcnew System::EventHandler(this, &MyForm::TanButton_Click);
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 702);
			this->Controls->Add(this->TanButton);
			this->Controls->Add(this->CosButton);
			this->Controls->Add(this->lblshowOp);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->SinhButton);
			this->Controls->Add(this->TanhButton);
			this->Controls->Add(this->CoshButton);
			this->Controls->Add(this->SinButton);
			this->Controls->Add(this->SqrtButton);
			this->Controls->Add(this->lnButton);
			this->Controls->Add(this->Facbutton);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->ExpButton);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->PlusMinusButton);
			this->Controls->Add(this->CButton);
			this->Controls->Add(this->CEButton);
			this->Controls->Add(this->EqualsButton);
			this->Controls->Add(this->DecimalPointButton);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->XButton);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		//运算用到的变量声明（会在之后的运算用到）
#pragma region variables
		double firstNum, secondNum, result, a;
		String^ Operator;
		float DegreeCelsius, Fahrenheit, Kelvin;
		char operation;
#pragma endregion

		//File界面的函数定义（Temperature、History、Scientific）
#pragma region 目录
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 365;
		MyForm::Height = 490;
		textBox1->Width = 331;
		historyToolStripMenuItem->Visible = false;
	}
	private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 365;
		MyForm::Height = 490;
		textBox1->Width = 331;
	}

	private: System::Void sToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 650;
		MyForm::Height = 620;
		textBox1->Width = 615;
		listBox1->Width = 615;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void historyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (historyToolStripMenuItem->Checked == true) {
			listBox1->Visible = true;
			historyToolStripMenuItem->Visible = false;
			historyToolStripMenuItem1->Visible = true;
			MyForm::Width = 365;
			MyForm::Height = 620;
			textBox1->Width = 331;
			listBox1->Width = 331;
		}
	}
	private: System::Void temperatureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 1050;
		MyForm::Height = 620;
		textBox1->Width = 615;
	}
	private: System::Void historyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		historyToolStripMenuItem->Visible = true;
		listBox1->Width = 331;
		listBox1->Visible = false;
		MyForm::Height = 490;
		historyToolStripMenuItem1->Visible = false;
	}
#pragma endregion

		   //Temperature界面的函数定义
#pragma region temperature
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'A';
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'B';
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'C';
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'D';
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'E';
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		operation = 'F';
	}

	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		//convert 按钮
		switch (operation) {
		case'A'://C->F
			(float::TryParse(textBox2->Text, DegreeCelsius));
			textBox3->Text = ((((9 * DegreeCelsius) / 5) + 32).ToString());
			break;
		case'B'://F->C
			(float::TryParse(textBox2->Text, Fahrenheit));
			textBox3->Text = ((((Fahrenheit - 32) * 5) / 9).ToString());
			break;
		case'C'://C->K
			(float::TryParse(textBox2->Text, DegreeCelsius));
			textBox3->Text = ((DegreeCelsius + 273.15).ToString());
			break;
		case'D'://K->C
			(float::TryParse(textBox2->Text, Kelvin));
			textBox3->Text = ((Kelvin - 273.15).ToString());
			break;
		case'E'://F->K
			(float::TryParse(textBox2->Text, Fahrenheit));
			textBox3->Text = (((((Fahrenheit - 32) * 5) / 9) + 273.15).ToString());
			break;
		case'F'://K->F
			(float::TryParse(textBox2->Text, Kelvin));
			textBox3->Text = (((((Kelvin - 273.15) * 9) / 5) + 32).ToString());
			break;
		}
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		//reset
		textBox2->Text = "";
		textBox3->Text = "";
		radioButton1->Checked = false;
		radioButton3->Checked = false;
		radioButton2->Checked = false;
		radioButton6->Checked = false;
		radioButton5->Checked = false;
		radioButton7->Checked = false;
	}
#pragma endregion

		   //Standard界面的函数定义
#pragma region 数字键（左）
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);//对应0~9数字键，收集button响应的数字
		if (textBox1->Text == "0")
			textBox1->Text = Numbers->Text;
		else
			textBox1->Text = textBox1->Text + Numbers->Text;
	}
		   //CE Button
	private: System::Void CEButton_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
	}
		   //C Button
	private: System::Void CButton_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
	}
		   // backspace X Button
	private: System::Void XButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
		   //plus/Minus Button
	private: System::Void PlusMinusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			return;
		if (textBox1->Text->Contains("-"))
		{
			textBox1->Text = textBox1->Text->Remove(0, 1);
		}
		else
		{
			textBox1->Text = "-" + textBox1->Text;
		}
	}
		   //Decimal Point Button 小数点
	private: System::Void DecimalPointButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textBox1->Text->Contains("."))
		{
			textBox1->Text = textBox1->Text + ".";
		}
	}
		   //Equals Button
	private: System::Void EqualsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		lblshowOp->Text = "";
		secondNum = Double::Parse(textBox1->Text);
		if (Operator == "+") {	//显示（+-x%符号）
			result = firstNum + secondNum;
			textBox1->Text = System::Convert::ToString(result);
			listBox1->Items->Add(System::Convert::ToString(result));
		}
		else if (Operator == "-") {	//显示（+-x%符号）
			result = firstNum - secondNum;
			textBox1->Text = System::Convert::ToString(result);
			listBox1->Items->Add(System::Convert::ToString(result));
		}
		else if (Operator == "÷") {	//显示（+-x%符号）
			result = firstNum / secondNum;
			textBox1->Text = System::Convert::ToString(result);
			listBox1->Items->Add(System::Convert::ToString(result));
		}
		else if (Operator == "×") {
			result = firstNum * secondNum;
			textBox1->Text = System::Convert::ToString(result);
			listBox1->Items->Add(System::Convert::ToString(result));
		}
		else if (Operator == "mod") {
			int iFirst, iSecond, results;
			iFirst = Convert::ToInt32(firstNum);
			iSecond = Convert::ToInt32(secondNum);
			results = iFirst % iSecond;
			textBox1->Text = System::Convert::ToString(results);
			listBox1->Items->Add(System::Convert::ToString(results));
		}
	}

		   //Arithmetic 有规律性的函数值（+-*%）
	private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
		//Operators
		Button^ op = safe_cast<Button^>(sender);

		firstNum = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		Operator = op->Text;
		lblshowOp->Text = System::Convert::ToString(firstNum) + " " + Operator;
	}
#pragma endregion

		   //Scientific界面的函数定义
#pragma region 科学计算机（右）
		   //square (^2)
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;//若textbox为空，则无响应
		a = Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox1->Text);//运算
		lblshowOp->Text = System::Convert::ToString("(" + textBox1->Text + ")^2");//左上角显示
		listBox1->Items->Add(System::Convert::ToString(a));//history
		textBox1->Text = Convert::ToString(a);//答案显示在textbox
	}
		   //以此类推
		  //π
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = ("3.1415926535897932384626433832795028841971");
		lblshowOp->Text = System::Convert::ToString("π");
		listBox1->Items->Add(System::Convert::ToString("π"));
	}
		   //cube(^3)
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("(" + textBox1->Text + ")^3");
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = Convert::ToString(a);
	}
		   //sinh
	private: System::Void SinhButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("sinh""(" + textBox1->Text + ")");
		a = Math::Sinh(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //cosh
	private: System::Void CoshButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("cosh""(" + textBox1->Text + ")");
		a = Math::Cosh(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}
		   //tanh
	private: System::Void TanhButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("tanh""(" + textBox1->Text + ")");
		a = Math::Tanh(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //cos
	private: System::Void TanButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("cos""(" + textBox1->Text + ")");
		a = Math::Cos(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //sin
	private: System::Void SinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("sin""(" + textBox1->Text + ")");
		a = Math::Sin(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //tan
	private: System::Void CosButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("tan""(" + textBox1->Text + ")");
		a = Math::Tan(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //ln
	private: System::Void lnButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("ln""(" + textBox1->Text + ")");
		a = Math::Log(a) / Math::Log(Math::Exp(1));
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //sqrt
	private: System::Void SqrtButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("sqrt(" + a + ")");
		a = Math::Sqrt(a);
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}

		   //Factorial
	private: System::Void Facbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		int ans = 1;
		a = Int64::Parse(textBox1->Text);
		lblshowOp->Text = System::Convert::ToString("(" + a + ")!");
		for (int i = 1; i <= a; i++)ans *= i;
		listBox1->Items->Add(System::Convert::ToString(ans));
		textBox1->Text = System::Convert::ToString(ans);
	}

		   //log
	private: System::Void LogButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		a = Math::Log10(a);
		lblshowOp->Text = System::Convert::ToString("log" + "(" + textBox1->Text + ")");
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}
		   //Exp
	private: System::Void ExpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")return;
		a = Double::Parse(textBox1->Text);
		a = Math::Exp(a);
		lblshowOp->Text = System::Convert::ToString("exp" + "(" + textBox1->Text + ")");
		listBox1->Items->Add(System::Convert::ToString(a));
		textBox1->Text = System::Convert::ToString(a);
	}
#pragma endregion
	};
}
