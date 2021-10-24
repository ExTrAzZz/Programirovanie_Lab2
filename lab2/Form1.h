#pragma once
#include "triangle_equilateral.h"
#include <vector>
namespace lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Записать сведения о треугольнике";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(103, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(403, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Количество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(105, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Пирамида";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Апофема";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 270);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(293, 329);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(-2, -4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 105);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(257, 126);
			this->panel1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(60, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Треугльник";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(16, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Сторона\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Location = System::Drawing::Point(643, 105);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(260, 149);
			this->panel2->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Сторона\r\n";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(119, 53);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(491, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 66);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Записать сведения о пирамиде";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(237, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(592, 66);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 22);
			this->textBox4->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(218, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Треугольников";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(598, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Пирамид";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(379, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 34);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Записать количество";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 332);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(308, 32);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Количество треугольников с площадью, \r\nбольше средней площади всех треугольников";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(76, 380);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(151, 22);
			this->textBox5->TabIndex = 20;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Location = System::Drawing::Point(303, 270);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(309, 418);
			this->panel3->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(236, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Пирамида с наибольшим объемом";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(34, 32);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(233, 225);
			this->richTextBox3->TabIndex = 23;
			this->richTextBox3->Text = L"";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(76, 277);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 34);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Определить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(610, 270);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(293, 329);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 694);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Треугольники и пирамиды";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int N,M,count_triangle,count_piramid;
		double *triangles_square; // Площади треугольников
		double max_volum;
		System::String^ max_volum_piramid;


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // Кнопка "Запись сведения о треугольнике"
				 double value;
				 if (N == 0) // Не ввели количество треугольников
				 {
					MessageBox::Show("Введите количество треугольников");
					return;
				 }
				 if (count_triangle == N) // Было введены все треугольники
				 {
					MessageBox::Show("Было введено "+Convert::ToString(N)+" треугольников"); 
					return;
				 }
				 try
				 {
					value = Convert::ToDouble(textBox1->Text); // Сторона треугольника
				 }
				 catch(...)
				 { // Исключение на ввод
					MessageBox::Show("Ошибка ввода"); // Ошибка ввода
					return;
				 }
				 if (value <= 0) // Сторона треугольника отрицательная или равная 0
				 {
					MessageBox::Show("Число должно быть больше 0");
					return;
				 }
				 triangle triangle_info(value); // Конструктор класса 
				 triangles_square[count_triangle] = triangle_info.square(); // Площадь треугольника
				 richTextBox1->Text += triangle_info.getInfo(); // Вывод информации о треугольнике
				 richTextBox1->Text += "--------------------------------------------------------\n"; // Разделительная черат
				 count_triangle++; // Счетчик количества введенных треугольников
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {// Кнопка "Запись сведения о пирамиде"
			double value, apopheme;
				 if (M == 0)
				 {
					MessageBox::Show("Введите количество пирамид");
					return;
				 }
				 if (count_piramid == M) // Попытка ввести больше заданного количества пирамид
				 {
					MessageBox::Show("Было введено "+Convert::ToString(M)+" пирамид");
					return;
				 }
				 try
				 {
					value = Convert::ToDouble(textBox6->Text); // Сторона пирамыды
					apopheme = Convert::ToDouble(textBox3->Text); // Апофема пирамиды
				 }
				 catch(...) 
				 { // Исключение на ввод
					MessageBox::Show("Ошибка ввода"); // Ошибка ввода
					return;
				 }
				 if (value <= 0) // Сторона пирамиды отрицательная или равная 0
				 {
					MessageBox::Show("Число должно быть больше 0");
					return;
				 }
				 piramid piramid_info(value,apopheme); // Конструктор класса
				 if(count_piramid == 0)
				 {
					max_volum = piramid_info.volum();
					max_volum_piramid = piramid_info.getInfo();
				 }
				 else
				 {
					 if (max_volum < piramid_info.volum())
					 {
							max_volum = piramid_info.volum();
							max_volum_piramid = piramid_info.getInfo();
					 }
				 }
				 richTextBox2->Text += piramid_info.getInfo(); // Вывод информации о пирамиде
				 richTextBox2->Text += "--------------------------------------------------------\n";
				 count_piramid++; // Счетчик количества введенных пирамид
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // Кнопка "Выход"
			Close();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { // Кнопка "Определить"
			if (count_triangle != N || count_piramid != M) // Ввели не все данные
			{
				MessageBox::Show("Введены не все треугольники или пирамиды");
				return;
			}
			double sum; // Сумма площадей треугольников и среднее значение площайдей труегольников
			double average; //Cреднее значение площайдей труегольников
			int count = 0; // Количество треугольников с площадью, большей средней площади  
			for (int i = 0; i < N; i++)
				sum += triangles_square[i]; // Суммирование элементов массива
			average = sum/N; // Среднее значение площадей треугольников
			for (int i = 0; i < N; i++)
				if (triangles_square[i] > average)
					count++; // Увеличение на 1-цу количество треугольников, площадь которых больше среднего значения
			textBox5->Text = Convert::ToString(count); // Вывод количества треугольников
			
			richTextBox3->Text = max_volum_piramid;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {// Кнопка "Записать количество"
			 try {
					 N = Convert::ToInt32(textBox2->Text); // Количество треугольников
					 M = Convert::ToInt32(textBox4->Text); // Количество пирамид

				 }
				 catch(...) 
				 { // Исключение на ввод
					MessageBox::Show("Ошибка ввода");
					return;
				 }
			 if (N <= 1 || M <= 1)
			 {
				MessageBox::Show("Введите числа больше 1");
				return;
			 }
				 delete [] triangles_square; // Очистка память
				 triangles_square = new double [N]; // Выделение памяти под N элементов площадей треугольника

				 count_triangle = 0; // Обнуление счетчика треугольников
				 count_piramid = 0;	// Обнуление счетчика пирамид
				 richTextBox1->Clear(); // Очистка полей вывода треугольников и пирамид
				 richTextBox2->Clear();
		 }
};
}

