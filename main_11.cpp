#pragma once

#include <string>;



namespace CppCLRWinformsProjekt {



	using namespace System;

	using namespace System::ComponentModel;

	using namespace System::Collections;

	using namespace System::Windows::Forms;

	using namespace System::Data;

	using namespace System::Drawing;



	/// <summary>

	/// Zusammenfassung fьr Form1

	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form

	{

	public:

		Form1(void)

		{

			InitializeComponent();

			//

			//TODO: Konstruktorcode hier hinzufьgen.

			//

		}



	protected:

		/// <summary>

		/// Verwendete Ressourcen bereinigen.

		/// </summary>

		~Form1()

		{

			if (components)

			{

				delete components;

			}

		}

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ OutPut1;

	private: System::Windows::Forms::Label^ OutPut2;













	protected:



	private:

		/// <summary>

		/// Erforderliche Designervariable.

		/// </summary>

		System::ComponentModel::Container ^components;



#pragma region Windows Form Designer generated code

		/// <summary>

		/// Erforderliche Methode fьr die Designerunterstьtzung.

		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.

		/// </summary>

		void InitializeComponent(void)

		{

			this->button1 = (gcnew System::Windows::Forms::Button());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->label1 = (gcnew System::Windows::Forms::Label());

			this->label2 = (gcnew System::Windows::Forms::Label());

			this->label3 = (gcnew System::Windows::Forms::Label());

			this->label4 = (gcnew System::Windows::Forms::Label());

			this->textBox3 = (gcnew System::Windows::Forms::TextBox());

			this->label5 = (gcnew System::Windows::Forms::Label());

			this->OutPut1 = (gcnew System::Windows::Forms::Label());

			this->OutPut2 = (gcnew System::Windows::Forms::Label());

			this->SuspendLayout();

			// 

			// button1

			// 

			this->button1->Location = System::Drawing::Point(15, 242);

			this->button1->Name = L"button1";

			this->button1->Size = System::Drawing::Size(255, 48);

			this->button1->TabIndex = 0;

			this->button1->Text = L"Розрахувати";

			this->button1->UseVisualStyleBackColor = true;

			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);

			// 

			// textBox1

			// 

			this->textBox1->Location = System::Drawing::Point(15, 23);

			this->textBox1->Name = L"textBox1";

			this->textBox1->Size = System::Drawing::Size(255, 22);

			this->textBox1->TabIndex = 1;

			// 

			// textBox2

			// 

			this->textBox2->Location = System::Drawing::Point(15, 68);

			this->textBox2->Name = L"textBox2";

			this->textBox2->Size = System::Drawing::Size(255, 22);

			this->textBox2->TabIndex = 2;

			// 

			// label1

			// 

			this->label1->AutoSize = true;

			this->label1->Location = System::Drawing::Point(12, 3);

			this->label1->Name = L"label1";

			this->label1->Size = System::Drawing::Size(229, 17);

			this->label1->TabIndex = 3;

			this->label1->Text = L"Введіть скільки кілограм цукерок:";

			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);

			// 

			// label2

			// 

			this->label2->AutoSize = true;

			this->label2->Location = System::Drawing::Point(12, 48);

			this->label2->Name = L"label2";

			this->label2->Size = System::Drawing::Size(222, 17);

			this->label2->TabIndex = 4;

			this->label2->Text = L"Введіть скільки вони коштували:";

			// 

			// label3

			// 

			this->label3->AutoSize = true;

			this->label3->Location = System::Drawing::Point(12, 138);

			this->label3->Name = L"label3";

			this->label3->Size = System::Drawing::Size(131, 17);

			this->label3->TabIndex = 5;

			this->label3->Text = L"1 кілограм коштує:";

			// 

			// label4

			// 

			this->label4->AutoSize = true;

			this->label4->Location = System::Drawing::Point(12, 180);

			this->label4->Name = L"label4";

			this->label4->Size = System::Drawing::Size(232, 17);

			this->label4->TabIndex = 6;

			this->label4->Text = L"Задана кількість кілограм коштує:";

			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);

			// 

			// textBox3

			// 

			this->textBox3->Location = System::Drawing::Point(15, 113);

			this->textBox3->Name = L"textBox3";

			this->textBox3->Size = System::Drawing::Size(255, 22);

			this->textBox3->TabIndex = 7;

			// 

			// label5

			// 

			this->label5->AutoSize = true;

			this->label5->Location = System::Drawing::Point(12, 93);

			this->label5->Name = L"label5";

			this->label5->Size = System::Drawing::Size(190, 17);

			this->label5->TabIndex = 8;

			this->label5->Text = L"Введіть скільки кг потрібно:";

			// 

			// OutPut1

			// 

			this->OutPut1->AutoSize = true;

			this->OutPut1->Location = System::Drawing::Point(15, 159);

			this->OutPut1->Name = L"OutPut1";

			this->OutPut1->Size = System::Drawing::Size(0, 17);

			this->OutPut1->TabIndex = 9;

			// 

			// OutPut2

			// 

			this->OutPut2->AutoSize = true;

			this->OutPut2->Location = System::Drawing::Point(15, 201);

			this->OutPut2->Name = L"OutPut2";

			this->OutPut2->Size = System::Drawing::Size(0, 17);

			this->OutPut2->TabIndex = 10;

			// 

			// Form1

			// 

			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);

			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->ClientSize = System::Drawing::Size(289, 301);

			this->Controls->Add(this->OutPut2);

			this->Controls->Add(this->OutPut1);

			this->Controls->Add(this->label5);

			this->Controls->Add(this->textBox3);

			this->Controls->Add(this->label4);

			this->Controls->Add(this->label3);

			this->Controls->Add(this->label2);

			this->Controls->Add(this->label1);

			this->Controls->Add(this->textBox2);

			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->button1);

			this->Name = L"Form1";

			this->Text = L"Form1";

			this->ResumeLayout(false);

			this->PerformLayout();



		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//Зчитування з текст боксів даних

		double x = double::Parse(textBox1->Text);

		double a = double::Parse(textBox2->Text);

		double y = double::Parse(textBox3->Text);

		//Роззрахунок і додавання їх до лейблів щоб вивесь  розраховані значення

		OutPut1->Text = (a / x).ToString();

		OutPut2->Text = (a/x*y).ToString();



	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void printDocument1_PrintPage_1(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

}

private: System::Void printDocument2_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

}

};

}