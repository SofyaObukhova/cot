#pragma once

namespace cot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainWindoy
	/// </summary>
	public ref class MainWindoy : public System::Windows::Forms::Form
	{
	public:
		MainWindoy(void)
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
		~MainWindoy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button9;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindoy::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(423, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindoy::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainWindoy::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(265, 168);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name T.";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(123, 511);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1058, 278);
			this->dataGridView1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 316);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 26);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(265, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"PerMin";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(423, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 43);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Record";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(237, 26);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(285, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ID";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(180, 391);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(237, 26);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(285, 420);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Min";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(176, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Add";
			this->label5->Click += gcnew System::EventHandler(this, &MainWindoy::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(662, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Search";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(650, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 26);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(650, 213);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(179, 26);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(650, 287);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(179, 26);
			this->textBox7->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Location = System::Drawing::Point(835, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 39);
			this->button3->TabIndex = 16;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(835, 207);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 39);
			this->button4->TabIndex = 17;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Location = System::Drawing::Point(835, 281);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 38);
			this->button5->TabIndex = 18;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1203, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 53);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(707, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Name T.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(717, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"PerMin";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(707, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Revenue";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1222, 138);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 31);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindoy::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1139, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"ID";
			this->label10->Click += gcnew System::EventHandler(this, &MainWindoy::label10_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1075, 139);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(141, 26);
			this->textBox8->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(360, 12);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(224, 26);
			this->textBox9->TabIndex = 26;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(590, 15);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 27;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(399, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 20);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Create/select table";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(123, 475);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(105, 30);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Save";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainWindoy::button9_Click);
			// 
			// MainWindoy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1713, 794);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MainWindoy";
			this->Text = L"MainWindoy";
			this->Load += gcnew System::EventHandler(this, &MainWindoy::MainWindoy_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MainWindoy_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitter1_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
