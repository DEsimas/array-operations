#pragma once

#include <vector>

namespace L7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Arrays
	/// </summary>
	public ref class Arrays : public System::Windows::Forms::Form
	{
	public:
		Arrays(void)
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
		~Arrays()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ static1;
	private: System::Windows::Forms::Label^ static4;
	private: System::Windows::Forms::Label^ static3;
	private: System::Windows::Forms::Label^ static2;
	private: System::Windows::Forms::TextBox^ lengthTB;
	private: System::Windows::Forms::TextBox^ minTB;
	private: System::Windows::Forms::TextBox^ maxTB;
	private: System::Windows::Forms::Button^ generateBtn;
	private: System::Windows::Forms::Label^ static5;
	private: System::Windows::Forms::TextBox^ inputFileTB;
	private: System::Windows::Forms::Button^ readBtn;
	private: System::Windows::Forms::Label^ static6;
	private: System::Windows::Forms::TextBox^ inputTB;
	private: System::Windows::Forms::GroupBox^ static7;
	private: System::Windows::Forms::RadioButton^ oddRB;
	private: System::Windows::Forms::RadioButton^ sortRB;
	private: System::Windows::Forms::RadioButton^ sortDescRB;



	private: System::Windows::Forms::RadioButton^ maxRB;

	private: System::Windows::Forms::RadioButton^ minRB;

	private: System::Windows::Forms::RadioButton^ avgRB;
	private: System::Windows::Forms::RadioButton^ sumRB;
	private: System::Windows::Forms::RadioButton^ evenRB;
	private: System::Windows::Forms::Label^ static8;
	private: System::Windows::Forms::TextBox^ outputTB;
	private: System::Windows::Forms::Button^ executeBtn;
	private: System::Windows::Forms::TextBox^ outputFileTB;


	private: System::Windows::Forms::Label^ static9;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::OpenFileDialog^ saveFileDialog;




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
			this->static1 = (gcnew System::Windows::Forms::GroupBox());
			this->lengthTB = (gcnew System::Windows::Forms::TextBox());
			this->minTB = (gcnew System::Windows::Forms::TextBox());
			this->maxTB = (gcnew System::Windows::Forms::TextBox());
			this->static4 = (gcnew System::Windows::Forms::Label());
			this->static3 = (gcnew System::Windows::Forms::Label());
			this->static2 = (gcnew System::Windows::Forms::Label());
			this->generateBtn = (gcnew System::Windows::Forms::Button());
			this->static5 = (gcnew System::Windows::Forms::Label());
			this->inputFileTB = (gcnew System::Windows::Forms::TextBox());
			this->readBtn = (gcnew System::Windows::Forms::Button());
			this->static6 = (gcnew System::Windows::Forms::Label());
			this->inputTB = (gcnew System::Windows::Forms::TextBox());
			this->static7 = (gcnew System::Windows::Forms::GroupBox());
			this->evenRB = (gcnew System::Windows::Forms::RadioButton());
			this->oddRB = (gcnew System::Windows::Forms::RadioButton());
			this->sortRB = (gcnew System::Windows::Forms::RadioButton());
			this->sortDescRB = (gcnew System::Windows::Forms::RadioButton());
			this->maxRB = (gcnew System::Windows::Forms::RadioButton());
			this->minRB = (gcnew System::Windows::Forms::RadioButton());
			this->avgRB = (gcnew System::Windows::Forms::RadioButton());
			this->sumRB = (gcnew System::Windows::Forms::RadioButton());
			this->static8 = (gcnew System::Windows::Forms::Label());
			this->outputTB = (gcnew System::Windows::Forms::TextBox());
			this->executeBtn = (gcnew System::Windows::Forms::Button());
			this->outputFileTB = (gcnew System::Windows::Forms::TextBox());
			this->static9 = (gcnew System::Windows::Forms::Label());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->static1->SuspendLayout();
			this->static7->SuspendLayout();
			this->SuspendLayout();
			// 
			// static1
			// 
			this->static1->Controls->Add(this->lengthTB);
			this->static1->Controls->Add(this->minTB);
			this->static1->Controls->Add(this->maxTB);
			this->static1->Controls->Add(this->static4);
			this->static1->Controls->Add(this->static3);
			this->static1->Controls->Add(this->static2);
			this->static1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->static1->Location = System::Drawing::Point(12, 12);
			this->static1->Name = L"static1";
			this->static1->Size = System::Drawing::Size(709, 202);
			this->static1->TabIndex = 1;
			this->static1->TabStop = false;
			this->static1->Text = L"Исходные данные";
			// 
			// lengthTB
			// 
			this->lengthTB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lengthTB->Location = System::Drawing::Point(483, 47);
			this->lengthTB->Name = L"lengthTB";
			this->lengthTB->ShortcutsEnabled = false;
			this->lengthTB->Size = System::Drawing::Size(120, 35);
			this->lengthTB->TabIndex = 3;
			this->lengthTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->lengthTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Arrays::positiveIntegerFilter);
			this->lengthTB->Validated += gcnew System::EventHandler(this, &Arrays::correctNumber);
			// 
			// minTB
			// 
			this->minTB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->minTB->Location = System::Drawing::Point(483, 97);
			this->minTB->Name = L"minTB";
			this->minTB->ShortcutsEnabled = false;
			this->minTB->Size = System::Drawing::Size(120, 35);
			this->minTB->TabIndex = 4;
			this->minTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->minTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Arrays::numberFilter);
			this->minTB->Validated += gcnew System::EventHandler(this, &Arrays::correctNumber);
			// 
			// maxTB
			// 
			this->maxTB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->maxTB->Location = System::Drawing::Point(483, 147);
			this->maxTB->Name = L"maxTB";
			this->maxTB->ShortcutsEnabled = false;
			this->maxTB->Size = System::Drawing::Size(120, 35);
			this->maxTB->TabIndex = 5;
			this->maxTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->maxTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Arrays::numberFilter);
			this->maxTB->Validated += gcnew System::EventHandler(this, &Arrays::correctNumber);
			// 
			// static4
			// 
			this->static4->AutoSize = true;
			this->static4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->static4->Location = System::Drawing::Point(6, 150);
			this->static4->Name = L"static4";
			this->static4->Size = System::Drawing::Size(456, 29);
			this->static4->TabIndex = 2;
			this->static4->Text = L"Максисмальное значение диапозона:";
			// 
			// static3
			// 
			this->static3->AutoSize = true;
			this->static3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->static3->Location = System::Drawing::Point(6, 100);
			this->static3->Name = L"static3";
			this->static3->Size = System::Drawing::Size(437, 29);
			this->static3->TabIndex = 1;
			this->static3->Text = L"Минимальное значение диапозона:";
			// 
			// static2
			// 
			this->static2->AutoSize = true;
			this->static2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->static2->Location = System::Drawing::Point(6, 50);
			this->static2->Name = L"static2";
			this->static2->Size = System::Drawing::Size(394, 29);
			this->static2->TabIndex = 0;
			this->static2->Text = L"Количество элементов массива:";
			// 
			// generateBtn
			// 
			this->generateBtn->Location = System::Drawing::Point(727, 12);
			this->generateBtn->Name = L"generateBtn";
			this->generateBtn->Size = System::Drawing::Size(287, 71);
			this->generateBtn->TabIndex = 0;
			this->generateBtn->Text = L"Генерация массива";
			this->generateBtn->UseVisualStyleBackColor = true;
			this->generateBtn->Click += gcnew System::EventHandler(this, &Arrays::generateBtn_Click);
			// 
			// static5
			// 
			this->static5->AutoSize = true;
			this->static5->Location = System::Drawing::Point(722, 91);
			this->static5->Name = L"static5";
			this->static5->Size = System::Drawing::Size(222, 29);
			this->static5->TabIndex = 2;
			this->static5->Text = L"Имя файла ввода:";
			// 
			// inputFileTB
			// 
			this->inputFileTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputFileTB->Location = System::Drawing::Point(727, 123);
			this->inputFileTB->Name = L"inputFileTB";
			this->inputFileTB->ReadOnly = true;
			this->inputFileTB->Size = System::Drawing::Size(287, 26);
			this->inputFileTB->TabIndex = 3;
			this->inputFileTB->TabStop = false;
			this->inputFileTB->Click += gcnew System::EventHandler(this, &Arrays::inputFileTB_Click);
			// 
			// readBtn
			// 
			this->readBtn->Location = System::Drawing::Point(727, 164);
			this->readBtn->Name = L"readBtn";
			this->readBtn->Size = System::Drawing::Size(287, 71);
			this->readBtn->TabIndex = 4;
			this->readBtn->Text = L"Ввод из файла";
			this->readBtn->UseVisualStyleBackColor = true;
			this->readBtn->Click += gcnew System::EventHandler(this, &Arrays::readBtn_Click);
			// 
			// static6
			// 
			this->static6->AutoSize = true;
			this->static6->Location = System::Drawing::Point(7, 232);
			this->static6->Name = L"static6";
			this->static6->Size = System::Drawing::Size(224, 29);
			this->static6->TabIndex = 5;
			this->static6->Text = L"Исходный массив:";
			// 
			// inputTB
			// 
			this->inputTB->Location = System::Drawing::Point(12, 264);
			this->inputTB->Name = L"inputTB";
			this->inputTB->Size = System::Drawing::Size(1002, 35);
			this->inputTB->TabIndex = 6;
			this->inputTB->TextChanged += gcnew System::EventHandler(this, &Arrays::inputTB_TextChanged);
			this->inputTB->Validated += gcnew System::EventHandler(this, &Arrays::inputTB_Validated);
			// 
			// static7
			// 
			this->static7->Controls->Add(this->evenRB);
			this->static7->Controls->Add(this->oddRB);
			this->static7->Controls->Add(this->sortRB);
			this->static7->Controls->Add(this->sortDescRB);
			this->static7->Controls->Add(this->maxRB);
			this->static7->Controls->Add(this->minRB);
			this->static7->Controls->Add(this->avgRB);
			this->static7->Controls->Add(this->sumRB);
			this->static7->ForeColor = System::Drawing::Color::RoyalBlue;
			this->static7->Location = System::Drawing::Point(12, 305);
			this->static7->Name = L"static7";
			this->static7->Size = System::Drawing::Size(709, 195);
			this->static7->TabIndex = 7;
			this->static7->TabStop = false;
			this->static7->Text = L"Операции с массивами";
			// 
			// evenRB
			// 
			this->evenRB->AutoSize = true;
			this->evenRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->evenRB->Location = System::Drawing::Point(334, 34);
			this->evenRB->Name = L"evenRB";
			this->evenRB->Size = System::Drawing::Size(251, 33);
			this->evenRB->TabIndex = 7;
			this->evenRB->Text = L"Чётные элементы";
			this->evenRB->UseVisualStyleBackColor = true;
			this->evenRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::evenRB_CheckedChanged);
			// 
			// oddRB
			// 
			this->oddRB->AutoSize = true;
			this->oddRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->oddRB->Location = System::Drawing::Point(334, 73);
			this->oddRB->Name = L"oddRB";
			this->oddRB->Size = System::Drawing::Size(279, 33);
			this->oddRB->TabIndex = 6;
			this->oddRB->Text = L"Нечётные элементы";
			this->oddRB->UseVisualStyleBackColor = true;
			this->oddRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::oddRB_CheckedChanged);
			// 
			// sortRB
			// 
			this->sortRB->AutoSize = true;
			this->sortRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sortRB->Location = System::Drawing::Point(335, 112);
			this->sortRB->Name = L"sortRB";
			this->sortRB->Size = System::Drawing::Size(369, 33);
			this->sortRB->TabIndex = 5;
			this->sortRB->Text = L"Сортировка по возрастанию";
			this->sortRB->UseVisualStyleBackColor = true;
			this->sortRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::sortRB_CheckedChanged);
			// 
			// sortDescRB
			// 
			this->sortDescRB->AutoSize = true;
			this->sortDescRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sortDescRB->Location = System::Drawing::Point(335, 151);
			this->sortDescRB->Name = L"sortDescRB";
			this->sortDescRB->Size = System::Drawing::Size(333, 33);
			this->sortDescRB->TabIndex = 4;
			this->sortDescRB->Text = L"Сортировка по убыванию";
			this->sortDescRB->UseVisualStyleBackColor = true;
			this->sortDescRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::sortDescRB_CheckedChanged);
			// 
			// maxRB
			// 
			this->maxRB->AutoSize = true;
			this->maxRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->maxRB->Location = System::Drawing::Point(6, 151);
			this->maxRB->Name = L"maxRB";
			this->maxRB->Size = System::Drawing::Size(323, 33);
			this->maxRB->TabIndex = 3;
			this->maxRB->Text = L"Максимальный элемент";
			this->maxRB->UseVisualStyleBackColor = true;
			this->maxRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::maxRB_CheckedChanged);
			// 
			// minRB
			// 
			this->minRB->AutoSize = true;
			this->minRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->minRB->Location = System::Drawing::Point(6, 112);
			this->minRB->Name = L"minRB";
			this->minRB->Size = System::Drawing::Size(316, 33);
			this->minRB->TabIndex = 2;
			this->minRB->Text = L"Минимальный элемент";
			this->minRB->UseVisualStyleBackColor = true;
			this->minRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::minRB_CheckedChanged);
			// 
			// avgRB
			// 
			this->avgRB->AutoSize = true;
			this->avgRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->avgRB->Location = System::Drawing::Point(6, 73);
			this->avgRB->Name = L"avgRB";
			this->avgRB->Size = System::Drawing::Size(259, 33);
			this->avgRB->TabIndex = 1;
			this->avgRB->Text = L"Среднее значение";
			this->avgRB->UseVisualStyleBackColor = true;
			this->avgRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::avgRB_CheckedChanged);
			// 
			// sumRB
			// 
			this->sumRB->AutoSize = true;
			this->sumRB->Checked = true;
			this->sumRB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sumRB->Location = System::Drawing::Point(6, 34);
			this->sumRB->Name = L"sumRB";
			this->sumRB->Size = System::Drawing::Size(249, 33);
			this->sumRB->TabIndex = 0;
			this->sumRB->TabStop = true;
			this->sumRB->Text = L"Сумма элементов";
			this->sumRB->UseVisualStyleBackColor = true;
			this->sumRB->CheckedChanged += gcnew System::EventHandler(this, &Arrays::sumRB_CheckedChanged);
			// 
			// static8
			// 
			this->static8->AutoSize = true;
			this->static8->Location = System::Drawing::Point(7, 503);
			this->static8->Name = L"static8";
			this->static8->Size = System::Drawing::Size(259, 29);
			this->static8->TabIndex = 8;
			this->static8->Text = L"Результат операции:";
			// 
			// outputTB
			// 
			this->outputTB->Location = System::Drawing::Point(12, 535);
			this->outputTB->Name = L"outputTB";
			this->outputTB->ReadOnly = true;
			this->outputTB->Size = System::Drawing::Size(1002, 35);
			this->outputTB->TabIndex = 9;
			// 
			// executeBtn
			// 
			this->executeBtn->Location = System::Drawing::Point(727, 305);
			this->executeBtn->Name = L"executeBtn";
			this->executeBtn->Size = System::Drawing::Size(287, 74);
			this->executeBtn->TabIndex = 10;
			this->executeBtn->Text = L"Выполнить";
			this->executeBtn->UseVisualStyleBackColor = true;
			this->executeBtn->Click += gcnew System::EventHandler(this, &Arrays::executeBtn_Click);
			// 
			// outputFileTB
			// 
			this->outputFileTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputFileTB->Location = System::Drawing::Point(732, 414);
			this->outputFileTB->Name = L"outputFileTB";
			this->outputFileTB->ReadOnly = true;
			this->outputFileTB->Size = System::Drawing::Size(287, 26);
			this->outputFileTB->TabIndex = 12;
			this->outputFileTB->TabStop = false;
			this->outputFileTB->Click += gcnew System::EventHandler(this, &Arrays::outputFileTB_Click);
			// 
			// static9
			// 
			this->static9->AutoSize = true;
			this->static9->Location = System::Drawing::Point(727, 382);
			this->static9->Name = L"static9";
			this->static9->Size = System::Drawing::Size(239, 29);
			this->static9->TabIndex = 11;
			this->static9->Text = L"Имя файла вывода:";
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(732, 458);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(287, 71);
			this->saveBtn->TabIndex = 13;
			this->saveBtn->Text = L"Сохранить в файл";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &Arrays::saveBtn_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"txt files (*.txt)|*.txt";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->FileName = L"openFileDialog1";
			this->saveFileDialog->Filter = L"txt files (*.txt)|*.txt";
			// 
			// Arrays
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1028, 596);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->outputFileTB);
			this->Controls->Add(this->static9);
			this->Controls->Add(this->executeBtn);
			this->Controls->Add(this->outputTB);
			this->Controls->Add(this->static8);
			this->Controls->Add(this->static7);
			this->Controls->Add(this->inputTB);
			this->Controls->Add(this->static6);
			this->Controls->Add(this->readBtn);
			this->Controls->Add(this->inputFileTB);
			this->Controls->Add(this->static5);
			this->Controls->Add(this->generateBtn);
			this->Controls->Add(this->static1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Arrays";
			this->ShowIcon = false;
			this->Text = L"Обработка массива";
			this->static1->ResumeLayout(false);
			this->static1->PerformLayout();
			this->static7->ResumeLayout(false);
			this->static7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		enum class Mode {
			Sum,
			Avg,
			Min,
			Max,
			Even,
			Odd,
			Sort,
			SortDesc
		};

		vector<int>* arr;
		//bool wasWrited = false;
		Mode mode = Mode::Sum;

		String^ toString(int number)
		{
			return number.ToString();
		}

		String^ toString(vector<int>* array)
		{
			String^ string = L"";
			vector<int> arr = *array;
			for (int number : arr)
			{
				string += toString(number) + L" ";
			}
			return string->Trim();
		}

		int toInt(String^ string)
		{
			return Convert::ToInt32(string);
		}

		//bool compareArrays(vector<int>* a1, vector<int>* a2)
		//{
		//	if (a1->size() != a2->size())
		//		return false;
		//	for (size_t i = 0; i < a1->size(); i++)
		//	{
		//		if (a1->at(i) != a2->at(i))
		//			return false;
		//	}
		//	return true;
		//}

		vector<int>* parseArray(String^ string)
		{
			vector<int>* res = new vector<int>{};
			Regex^ regex = gcnew Regex(L"[^0-9]");
			auto chunks = string->Split('-');
			for (size_t i = 0; i < chunks->Length; i++)
			{
				auto chunk = chunks[i];
				auto seq = regex->Split(chunk);
				for (size_t j = 0; j < seq->Length; j++)
				{
					if (seq[j] != "")
					{
						int number = toInt(seq[j]);
						res->push_back(j == 0 && (i != 0) ? number * -1 : number);
					}
				}
			}
			return res;
		}

		int arraySum()
		{
			int result = 0;
			for (size_t i = 0; i < arr->size(); i++)
				result += arr->at(i);	
			return result;
		}

		double arrayAverage()
		{
			return arraySum()/arr->size();
		}

		int arrayMin()
		{
			int result = arr->at(0);
			for (size_t i = 0; i < arr->size(); i++)
				if (arr->at(i) < result)
					result = arr->at(i);
			return result;
		}

		int arrayMax()
		{
			int result = arr->at(0);
			for (size_t i = 0; i < arr->size(); i++)
				if (arr->at(i) > result)
					result = arr->at(i);
			return result;
		}

		vector<int>* arrayEven()
		{
			vector<int>* result = new vector<int>{};
			for (size_t i = 0; i < arr->size(); i++)
				if (arr->at(i) % 2 == 0)
					result->push_back(arr->at(i));
			return result;
		}

		vector<int>* arrayOdd()
		{
			vector<int>* result = new vector<int>{};
			for (size_t i = 0; i < arr->size(); i++)
				if (arr->at(i) % 2 != 0)
					result->push_back(arr->at(i));
			return result;
		}

		vector<int>* bubbleSort(bool reversed)
		{
			vector<int>* result = new vector<int>{};
			for (size_t i = 0; i < arr->size(); i++)
				result->push_back(arr->at(i));
			int len = arr->size();
			while (len--)
			{
				bool swapped = false;
				for (int i = 0; i < len; i++)
				{
					if (((result->at(i) < result->at(i + 1)) && reversed == true) ||
						((result->at(i) > result->at(i + 1)) && reversed == false))
					{
						int tmp = result->at(i);
						result->at(i) = result->at(i + 1);
						result->at(i + 1) = tmp;
						swapped = true;
					}
				}
				if (swapped == false) break;
			}
			return result;
		}

		void positiveIntegerFilter(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
				e->Handled = true;
		}

		void numberFilter(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			const auto selectionStart = textBox->SelectionStart;
			const auto text = textBox->Text;
			const auto length = text->Length;
			if (e->KeyChar == '.')
				e->KeyChar = ',';
			if (!Char::IsControl(e->KeyChar) &&
				(
					(
						!Char::IsDigit(e->KeyChar) &&
						e->KeyChar != '-'
					) ||
					(
						(
							selectionStart != 0 ||
							text->IndexOf(L"-") != -1
						) &&
						e->KeyChar == '-'
					)
				))
				e->Handled = true;
		}

		void correctNumber(System::Object^ sender, System::EventArgs^ e)
		{
			const auto textBox = safe_cast<TextBox^>(sender);
			int value;
			try
			{
				value = toInt(textBox->Text);
			}
			catch (FormatException^ e)
			{
				value = 0;
			}
			textBox->Text = toString(value);
		}

		void generateBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (
				inputTB->Text != L"" &&
				MessageBox::Show(
					L"Введённый массив будет стёрт. Продолжить?",
					L"Предупреждение",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Warning,
					MessageBoxDefaultButton::Button2
				) == System::Windows::Forms::DialogResult::No)
				return;
			if (lengthTB->Text == L"")
			{
				MessageBox::Show(
					L"Длина массива не введена",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				return;
			}
			if (lengthTB->Text == L"0")
			{
				MessageBox::Show(
					L"Длина массива не может быть нулём",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				return;
			}
			if (minTB->Text == L"")
			{
				MessageBox::Show(
					L"Минимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				return;
			}
			if (maxTB->Text == L"")
			{
				MessageBox::Show(
					L"Максимальное значение не введено",
					L"Ошибка ввода",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				return;
			}

			int max = Math::Max(toInt(minTB->Text), toInt(maxTB->Text));
			int min = Math::Min(toInt(minTB->Text), toInt(maxTB->Text));
			int len = toInt(lengthTB->Text);
			maxTB->Text = toString(max);
			minTB->Text = toString(min);

			Random^ rand = gcnew Random();
			arr = new vector<int>{};
			for (size_t i = 0; i < len; i++)
			{
				arr->push_back(rand->Next(min, max + 1));
			}
			inputTB->Text = toString(arr);
		}

		void inputTB_Validated(System::Object^ sender, System::EventArgs^ e)
		{
			auto newArray = parseArray(inputTB->Text);
			arr = newArray;
			inputTB->Text = toString(newArray);
			//if (!compareArrays(arr, newArray))
			//	wasWrited = false;
		}

		void sumRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Sum;
		}
		void avgRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Avg;
		}
		void minRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			outputTB->Text = L"";
			mode = Mode::Min;
		}
		void maxRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Max;
		}
		void evenRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Even;
		}
		void oddRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Odd;
		}
		void sortRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::Sort;
		}
		void sortDescRB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
			mode = Mode::SortDesc;
		}
		void executeBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			switch (mode) {
				case Mode::Sum:
					outputTB->Text = sumRB->Text + L": " + toString(arraySum());
					break;
				case Mode::Avg:
					outputTB->Text = avgRB->Text + L": " + toString(arrayAverage());
					break;
				case Mode::Min:
					outputTB->Text = minRB->Text + L": " + toString(arrayMin());
					break;
				case Mode::Max:
					outputTB->Text = maxRB->Text + L": " + toString(arrayMax());
					break;
				case Mode::Even:
					outputTB->Text = evenRB->Text + L": " + toString(arrayEven());
					break;
				case Mode::Odd:
					outputTB->Text = oddRB->Text + L": " + toString(arrayOdd());
					break;
				case Mode::Sort:
					outputTB->Text = sortRB->Text + L": " + toString(bubbleSort(false));
					break;
				case Mode::SortDesc:
					outputTB->Text = sortDescRB->Text + L": " + toString(bubbleSort(true));
					break;
			}
		}
		void inputFileTB_Click(System::Object^ sender, System::EventArgs^ e) {
			openFileDialog->Filter = "txt files (*.txt)|*.txt";
			openFileDialog->FileName = "";

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				inputFileTB->Text = openFileDialog->FileName;
			}
		}
		void readBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (inputFileTB->Text == "") 
			{
				openFileDialog->Filter = "txt files (*.txt)|*.txt";
				openFileDialog->FileName = "";

				if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					inputFileTB->Text = openFileDialog->FileName;
				}
			}

			if (
				inputTB->Text != L"" &&
				MessageBox::Show(
					L"Введённый массив будет стёрт. Продолжить?",
					L"Предупреждение",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Warning,
					MessageBoxDefaultButton::Button2
				) == System::Windows::Forms::DialogResult::No)
				return;

			String^ input = L"";

			StreamReader^ reader = File::OpenText(openFileDialog->FileName);
			do {
				input += " " + reader->ReadLine();
			} while (reader->Peek() != -1);
			reader->Close();

			lengthTB->Text = "";
			minTB->Text = "";
			maxTB->Text = "";

			arr = parseArray(input);
			inputTB->Text = toString(arr);
		}
		void outputFileTB_Click(System::Object^ sender, System::EventArgs^ e)
		{
			saveFileDialog->Filter = "txt files (*.txt)|*.txt";
			saveFileDialog->FileName = "";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				outputFileTB->Text = saveFileDialog->FileName;
			}
		}
		void saveBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (outputFileTB->Text == "") {
				saveFileDialog->Filter = "txt files (*.txt)|*.txt";
				saveFileDialog->FileName = "";

				if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					outputFileTB->Text = saveFileDialog->FileName;
				}
			}

			if (inputTB->Text == "") {
				MessageBox::Show(
					L"Массив не введён",
					L"Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				return;
			}

			bool isArrayFound = false;
			bool isResFound = false;
			bool isEmpty = true;

			StreamReader^ reader = File::OpenText(saveFileDialog->FileName);
			while (reader->Peek() != -1) {
				isEmpty = false;
				String^ line = reader->ReadLine();
				if (line && line->Trim() == L"Исходный массив: " + inputTB->Text) {
					isArrayFound = true;
				}
				if (line && line->Trim() == outputTB->Text) {
					isResFound = true;
				}
			}
			reader->Close();

			StreamWriter^ writer = gcnew StreamWriter(saveFileDialog->FileName, true);
			if (!isArrayFound) {
				if(!isEmpty)
					writer->Write("\n");
				writer->WriteLine(L"Исходный массив: " + inputTB->Text);
			}
			if (!(isArrayFound && isResFound) && outputTB->Text != L"") {
				writer->WriteLine(outputTB->Text);
			}
			writer->Close();
			MessageBox::Show(
				L"Данные сохранены",
				L"Выполнено",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);
		}

		void inputTB_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			outputTB->Text = L"";
		}
	};
}
