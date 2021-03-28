#pragma once
#include "_3DShape.h"
#include "Конус.h"
#include "Параллелепипед.h"
#include "Пирамида.h"
#include "Цилиндр.h"

namespace ooplaba4cpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Номер;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Тип;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Длин;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Высота;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ширина;


	protected:



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
			this->Длин = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Высота = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ширина = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Номер,
					this->Тип, this->Длин, this->Высота, this->Ширина
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(488, 539);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Номер
			// 
			this->Номер->HeaderText = L"Номер";
			this->Номер->Name = L"Номер";
			this->Номер->Width = 45;
			// 
			// Тип
			// 
			this->Тип->HeaderText = L"Тип";
			this->Тип->Name = L"Тип";
			// 
			// Длин
			// 
			this->Длин->HeaderText = L"Длина";
			this->Длин->Name = L"Длин";
			// 
			// Высота
			// 
			this->Высота->HeaderText = L"Высота";
			this->Высота->Name = L"Высота";
			// 
			// Ширина
			// 
			this->Ширина->HeaderText = L"Ширина";
			this->Ширина->Name = L"Ширина";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1329, 563);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
