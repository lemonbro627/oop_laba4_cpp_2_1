#pragma once
#include "_3DShape.h"
#include "Конус.h"
#include "Параллелепипед.h"
#include "Пирамида.h"
#include "Цилиндр.h"
#include <cstdlib>
#include <string>

float мойРандом() {
	return float(rand() % 10000) / 100.0;
}

int КоличествоЭлементов;
int элемент, элемент1, элемент2, номерФигуры, параметр;
float tmpДлина, tmpШирина, tmpВысота, вводПараметра;
_3DShape** МассивФигур;
_3DShape** новыйМассивФигур;

namespace ooplaba4cpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Длин;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Номер;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Тип;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Длина;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Высота;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ширина;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Номер = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Тип = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Длина = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Высота = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ширина = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Номер,
					this->Тип, this->Длина, this->Высота, this->Ширина
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(588, 539);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Номер
			// 
			this->Номер->HeaderText = L"Номер";
			this->Номер->Name = L"Номер";
			this->Номер->ReadOnly = true;
			this->Номер->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Номер->Width = 45;
			// 
			// Тип
			// 
			this->Тип->HeaderText = L"Тип";
			this->Тип->Name = L"Тип";
			this->Тип->ReadOnly = true;
			this->Тип->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Тип->Width = 200;
			// 
			// Длина
			// 
			this->Длина->HeaderText = L"Длина";
			this->Длина->Name = L"Длина";
			this->Длина->ReadOnly = true;
			this->Длина->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Высота
			// 
			this->Высота->HeaderText = L"Высота";
			this->Высота->Name = L"Высота";
			this->Высота->ReadOnly = true;
			this->Высота->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Ширина
			// 
			this->Ширина->HeaderText = L"Ширина";
			this->Ширина->Name = L"Ширина";
			this->Ширина->ReadOnly = true;
			this->Ширина->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Кол-во элементов в массиве: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(232, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Задать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(606, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(298, 79);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Объём и площадь";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(122, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Узнать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(53, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Номер: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(606, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(298, 55);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(606, 158);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(298, 71);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Увеличение";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Во сколько раз:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(211, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Увеличить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(53, 21);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Номер: ";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Location = System::Drawing::Point(606, 235);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(298, 74);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Отношение объёмов";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(122, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(211, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Узнать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(53, 45);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Номер2: ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(53, 19);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Номер1: ";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Location = System::Drawing::Point(606, 315);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(298, 74);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Сравнение объёмов";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(122, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(211, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Узнать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(53, 45);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Номер2: ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(53, 19);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Номер1: ";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->radioButton4);
			this->groupBox6->Controls->Add(this->radioButton3);
			this->groupBox6->Controls->Add(this->radioButton2);
			this->groupBox6->Controls->Add(this->radioButton1);
			this->groupBox6->Controls->Add(this->textBox9);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Location = System::Drawing::Point(606, 395);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(298, 156);
			this->groupBox6->TabIndex = 16;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Смена типа";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(211, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Изменить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 94);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(77, 17);
			this->radioButton4->TabIndex = 15;
			this->radioButton4->Text = L"Пирамида";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 76);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(55, 17);
			this->radioButton3->TabIndex = 14;
			this->radioButton3->Text = L"Конус";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 58);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->Text = L"Цилиндр";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 40);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 17);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Параллелепипед";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(53, 14);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 20);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Номер: ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->textBox11);
			this->groupBox7->Controls->Add(this->radioButton7);
			this->groupBox7->Controls->Add(this->radioButton6);
			this->groupBox7->Controls->Add(this->radioButton5);
			this->groupBox7->Controls->Add(this->button7);
			this->groupBox7->Controls->Add(this->textBox10);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Location = System::Drawing::Point(910, 12);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(407, 140);
			this->groupBox7->TabIndex = 17;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Изменение параметров";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(106, 63);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Значение:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(166, 60);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(51, 20);
			this->textBox11->TabIndex = 21;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 81);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(64, 17);
			this->radioButton7->TabIndex = 20;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Ширина";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Location = System::Drawing::Point(6, 63);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(63, 17);
			this->radioButton6->TabIndex = 19;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Высота";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 45);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(58, 17);
			this->radioButton5->TabIndex = 18;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Длина";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(326, 17);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Изменить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(52, 19);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(43, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->Text = L"0";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Номер: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1329, 563);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Бажин Дмитрий, ООП Лаба 4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void UpdateGrid() {
		//номер тип длина высота ширина
		dataGridView1->Rows->Clear();
		for (int i = 0; i < КоличествоЭлементов; i++) {
			array<String^>^ row0 = gcnew array<String^>(5);
			row0[0] = Convert::ToString(i);
			row0[1] = Marshal::PtrToStringAnsi((IntPtr)(char*)МассивФигур[i]->Тип());
			row0[2] = "0";
			row0[3] = Convert::ToString(МассивФигур[i]->ВернутьВысоту());
			row0[4] = Convert::ToString(МассивФигур[i]->ВернутьШирину());
			if (row0[1] == "Параллелепипед" || row0[1] == "Пирамида") {
				row0[2] = Convert::ToString(МассивФигур[i]->ВернутьДлину());
			}
			dataGridView1->Rows->Add(row0);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ttt = textBox1->Text;
		if (ttt == "") { ttt = "0"; }
		КоличествоЭлементов = Convert::ToInt32(ttt);
		МассивФигур = new _3DShape * [КоличествоЭлементов];
		for (int i = 0; i < КоличествоЭлементов; i++) {
			if (i % 4 == 0) {
				МассивФигур[i] = new Параллелепипед(мойРандом(), мойРандом(), мойРандом());
			}
			if (i % 4 == 1) {
				МассивФигур[i] = new Цилиндр(мойРандом(), мойРандом(), мойРандом());
			}
			if (i % 4 == 2) {
				МассивФигур[i] = new Конус(мойРандом(), мойРандом(), мойРандом());
			}
			if (i % 4 == 3) {
				МассивФигур[i] = new Пирамида(мойРандом(), мойРандом(), мойРандом());
			}
		}
		UpdateGrid();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt32(textBox2->Text);
		if (i < 0) { i = 0; textBox2->Text = "0"; }
		if (i > КоличествоЭлементов-1) { i = 0; textBox2->Text = "0"; }
		label3->Text = "Площадь: " + МассивФигур[i]->Площадь();
		label4->Text = "Объём: " + МассивФигур[i]->Объём();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt32(textBox3->Text);
		double k = Convert::ToDouble(textBox4->Text->Replace('.',','));
		if (i < 0) { i = 0; textBox3->Text = "0"; }
		if (i > КоличествоЭлементов - 1) { i = 0; textBox3->Text = "0"; }
		if (k <= 0.0) { k = 1; textBox4->Text = "1"; }
		*МассивФигур[i] *= k;
		UpdateGrid();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt32(textBox5->Text);
		int j = Convert::ToInt32(textBox6->Text);
		if (i < 0) { i = 0; textBox5->Text = "0"; }
		if (j < 0) { j = 0; textBox6->Text = "0"; }
		if (i > КоличествоЭлементов - 1) { i = 0; textBox5->Text = "0"; }
		if (j > КоличествоЭлементов - 1) { j = 0; textBox6->Text = "0"; }
		label9->Text = "Отношение объёмов: " + *МассивФигур[i] / *МассивФигур[j];
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt32(textBox8->Text);
		int j = Convert::ToInt32(textBox7->Text);
		if (i < 0) { i = 0; textBox8->Text = "0"; }
		if (j < 0) { j = 0; textBox7->Text = "0"; }
		if (i > КоличествоЭлементов - 1) { i = 0; textBox8->Text = "0"; }
		if (j > КоличествоЭлементов - 1) { j = 0; textBox7->Text = "0"; }
		if (МассивФигур[i] == МассивФигур[j]) {
			label10->Text = "Объём 1 == Объём 2";
		}
		if (МассивФигур[i] > МассивФигур[j]) {
			label10->Text = "Объём 1 > Объём 2";
		}
		if (МассивФигур[i] < МассивФигур[j]) {
			label10->Text = "Объём 1 < Объём 2";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = Convert::ToInt32(textBox9->Text);
		if (i < 0) { i = 0; textBox9->Text = "0"; }
		if (i > КоличествоЭлементов - 1) { i = 0; textBox9->Text = "0"; }
		float tmp1 = МассивФигур[i]->ВернутьВысоту();
		float tmp2 = МассивФигур[i]->ВернутьДлину();
		float tmp3 = МассивФигур[i]->ВернутьШирину();
		delete[] МассивФигур[i];
		if (radioButton1->Checked){
			МассивФигур[i] = new Параллелепипед(tmp1, tmp2, tmp3);
		}
		if (radioButton2->Checked) {
			МассивФигур[i] = new Цилиндр(tmp1, tmp2, tmp3);
		}
		if (radioButton3->Checked) {
			МассивФигур[i] = new Конус(tmp1, tmp2, tmp3);
		}
		if (radioButton4->Checked) {
			МассивФигур[i] = new Пирамида(tmp1, tmp2, tmp3);
		}
		UpdateGrid();
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ ttt = textBox10->Text;
		if (ttt == "") { ttt = "0"; }
		int i = Convert::ToInt32(ttt);
		if (i < 0) { i = 0; textBox10->Text = "0"; }
		if (i > КоличествоЭлементов - 1) { i = 0; textBox10->Text = "0"; }
		String^ type = Marshal::PtrToStringAnsi((IntPtr)(char*)МассивФигур[i]->Тип());
		if (type == "Параллелепипед" || type == "Пирамида") {
			radioButton5->Visible = true;
		}
		else {
			radioButton5->Visible = false;
			if (!radioButton7->Checked) {
				radioButton6->Checked = true;
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		double newParam = Convert::ToDouble(textBox11->Text);
		int i = Convert::ToInt32(textBox10->Text);
		if (newParam < 0) { newParam = -newParam; }
		if (newParam == 0) { newParam = 1; }
		if (radioButton5->Checked) {
			МассивФигур[i]->ЗадатьДлину(newParam);
		}
		if (radioButton6->Checked) {
			МассивФигур[i]->ЗадатьВысоту(newParam);
		}
		if (radioButton7->Checked) {
			МассивФигур[i]->ЗадатьШирину(newParam);
		}
		UpdateGrid();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
