#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <clocale>

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(963, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбор метода";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 605);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(140, 605);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(275, 605);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 31);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(55, 274);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(330, 174);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"нелинейное уравнение (a)";
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(47, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(97, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Результат";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Точность :";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"М-д биссекции", L"М-д хорд", L"М-д простой иттерации",
					L"М-д Ньютона"
			});
			this->comboBox1->Location = System::Drawing::Point(0, 53);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"Метод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(6, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ln(x)-x+1(\?)8=0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"x=a=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Интервал: [2; 3]";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(979, 480);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1024, 414);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 22);
			this->textBox1->TabIndex = 4;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(34, 472);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(234, 109);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"выбор времени";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(135, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Реальное время";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(139, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Машинное время";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(962, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(119, 22);
			this->textBox3->TabIndex = 9;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(21, 11);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(397, 248);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"m=ИНТЕГРАЛ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(472, 26);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(251, 139);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Интеграл (m)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"количество итерраций:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"m= ";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"М-д трапеций", L"М-д прямоуголька", L"М-д Симпсона",
					L"М-д Гаусса"
			});
			this->comboBox2->Location = System::Drawing::Point(9, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->Text = L"Метод";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(472, 195);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(251, 156);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Система уравнений (n)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 135);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 16);
			this->label12->TabIndex = 15;
			this->label12->Text = L"z=n=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 111);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 16);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Наибольший корень системы:\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(93, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"p= ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"z= ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"СИСТЕМА";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Location = System::Drawing::Point(472, 380);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(251, 137);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Массив из 100 элементов (l)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(2, 93);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(230, 16);
			this->label15->TabIndex = 17;
			this->label15->Text = L"min-миниальный элемент массива";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(2, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(249, 16);
			this->label14->TabIndex = 16;
			this->label14->Text = L"max-максимальный элемент массива";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(2, 18);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 16);
			this->label13->TabIndex = 15;
			this->label13->Text = L"l=max-min=";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(51, 135);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(77, 16);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Результат";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 658);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Кнопка "выход"
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

		   //Кнопка "вычислить"
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double result;

		//Нелинейные уравнения в кнопке
		switch (comboBox1->SelectedIndex)
		{
		case 1:
			result = methodBiss();
		case 2:
			result = methodHord();
		default:
			result = methodBiss();
			break;
		}

		label16->Text = System::Convert::ToString(result);

		//Cистема уравнений в кнопке

		label17->Text = System::Convert::ToString(system());\
		
		// 
	}

		   //Кнопка "очистить"
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
	}

//Нелинейные уравнения

		   float f(float x) {
			   return log(x) - x + 1.8;
		   }

		   //М-д биссекции
		   double methodBiss() {

			   float minRange = 2, maxRange = 3, e = 0.001, result;

			   do {
				   result = (minRange + maxRange) / 2;
				   if (f(minRange) * f(result) < 0) {
					   maxRange = result;
				   }
				   else {
					   minRange = result;
				   }
			   } while
				   (fabs(minRange - maxRange) >= e);

			   return f(minRange);
		   }

		   //М-д хорд
		   double methodHord() {

			   float minRange = 2, maxRange = 3, e = 0.001, result;
			   while (fabs(f(minRange)) > e)
			   {
				   minRange = maxRange - (maxRange - minRange) * f(minRange) / (f(maxRange) - f(minRange));
			   }

			   return f(minRange);

			   //М-д Ньютона
		   };

//Интегралы 



//Cистема уравнений 

		   float system()
		   {
			   float a[2][2], y[2] = { 2, 3 }, m = 2, n = 2;
			   const double eps = 0.00001;
			   float matrixRoot[4] = { 5, -3, -2, 1 };
			   float matrixResult[2] = { 2, 3 };
			   int key = 0;


			   //Заполнение матрицы
			   for (int i = 0; i < n; i++)
			   {
				   for (int j = 0; j < m; j++)
				   {
					   a[i][j] = matrixRoot[key];
					   key++;
				   }
			   }

			   for (int i = 0; i < n; i++)
			   {
				   y[i] = matrixResult[i];
			   }

			   float x[4], max;
			   int k, index;
			   for (k = 0; k < n; k++)
			   {
				   // Поиск строки с максимальным a[i][k]
				   max = abs(a[k][k]);
				   index = k;
				   for (int i = k + 1; i < n; i++)
				   {
					   if (abs(a[i][k]) > max)
					   {
						   max = abs(a[i][k]);
						   index = i;
					   }
				   }

				   for (int j = 0; j < n; j++)
				   {
					   float temp = a[k][j];
					   a[k][j] = a[index][j];
					   a[index][j] = temp;
				   }

				   float temp = y[k];
				   y[k] = y[index];
				   y[index] = temp;
				   // Нормализация уравнений

				   for (int i = k; i < n; i++)
				   {
					   float temp = a[i][k];
					   if (fabs(temp) == 0) continue; // для нулевого коэффициента пропустить
					   for (int j = 0; j < n; j++)
						   a[i][j] = a[i][j] / temp;
					   y[i] = y[i] / temp;
					   if (i == k)  continue; // уравнение не вычитать само из себя
					   for (int j = 0; j < n; j++)
						   a[i][j] = a[i][j] - a[k][j];
					   y[i] = y[i] - y[k];
				   }
			   }

			   // обратная подстановка
			   for (k = n - 1; k >= 0; k--)
			   {
				   x[k] = y[k];
				   for (int i = 0; i < k; i++)
					   y[i] = y[i] - a[i][k] * x[k];
			   }

			   //Максимальный корень

			   if (x[0] > x[1]) {
				   return x[0];
			   }
			   else {
				   return x[1];
			   }
		   }

//Разность между max и min элементами массива 100 эл

		   double array() {

			   srand(time(NULL));
			   const int N = 100;
			   int  massiv[N];


			   for (int i = 0; i < N; i++)
			   {
				   massiv[i] = 1 + rand() % 150;
			   }

			   int max = 0, min = 0;
			   max = massiv[0];
			   min = massiv[0];
			   for (int i = 0; i < N; i++)
			   {
				   if (massiv[i] < min)
					   min = massiv[i];
				   if (massiv[i] > max)
					   max = massiv[i];
			   }

			   int paznoctb;
			   paznoctb = max - min;

			   return 0;
		   }
};
}