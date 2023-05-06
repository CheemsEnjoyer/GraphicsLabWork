#pragma once

namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TaskTwo
	/// </summary>
	public ref class TaskTwo : public System::Windows::Forms::Form
	{
	public:
		TaskTwo(void)
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
		~TaskTwo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sin(x)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"2*Sin(x)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Sin(2x)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Sin(x/2)";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Bisque;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(22, 168);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Sin(x)";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"2*Sin(x)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Sin(2*x)";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Sin(x/2)";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(1113, 473);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(138, 17);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 22);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(245, 17);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 22);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown2_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(93, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"X min";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(200, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"X max";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(138, 51);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(56, 22);
			this->numericUpDown3->TabIndex = 12;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(138, 90);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(56, 22);
			this->numericUpDown4->TabIndex = 13;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(138, 126);
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(56, 22);
			this->numericUpDown5->TabIndex = 14;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(245, 128);
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(56, 22);
			this->numericUpDown6->TabIndex = 15;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(245, 90);
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(56, 22);
			this->numericUpDown7->TabIndex = 16;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(245, 53);
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(56, 22);
			this->numericUpDown8->TabIndex = 17;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &TaskTwo::numericUpDown8_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(196, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"X max";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(200, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"X max";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(200, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"X max";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(93, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"X min";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(93, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"X min";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(93, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"X min";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Blue", L"Green", L"Orange", L"Red" });
			this->listBox1->Location = System::Drawing::Point(326, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(120, 20);
			this->listBox1->TabIndex = 24;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TaskTwo::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Blue", L"Green", L"Orange", L"Red" });
			this->listBox2->Location = System::Drawing::Point(326, 53);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(120, 20);
			this->listBox2->TabIndex = 25;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &TaskTwo::listBox2_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Blue", L"Green", L"Orange", L"Red" });
			this->listBox3->Location = System::Drawing::Point(326, 92);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(120, 20);
			this->listBox3->TabIndex = 26;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &TaskTwo::listBox3_SelectedIndexChanged);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Blue", L"Green", L"Orange", L"Red" });
			this->listBox4->Location = System::Drawing::Point(326, 128);
			this->listBox4->Name = L"listBox4";
			this->listBox4->ScrollAlwaysVisible = true;
			this->listBox4->Size = System::Drawing::Size(120, 20);
			this->listBox4->TabIndex = 27;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &TaskTwo::listBox4_SelectedIndexChanged);
			// 
			// TaskTwo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1187, 685);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TaskTwo";
			this->Text = L"Графики в chart";
			this->Load += gcnew System::EventHandler(this, &TaskTwo::TaskTwo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateChartSeries1();
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateChartSeries1();
	}
private: System::Void UpdateChartSeries1()
{
	// Очистка старых данных
	chart1->Series[0]->Points->Clear();

	// Получение значений из элементов управления NumericUpDown
	double xMin = (double)numericUpDown1->Value;
	double xMax = (double)numericUpDown2->Value;

	// Расчет шага по оси X
	double step = (xMax - xMin) / 100;

	// Добавление точек на график
	int pointIndex = 0;
	for (double x = xMin; x <= xMax; x += step)
	{
		// Добавление только каждой 10-й точки
		if (pointIndex % 10 == 0)
		{
			double y = Math::Sin(x);
			chart1->Series[0]->Points->AddXY(x, y);
		}
		pointIndex++;
	}
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries2();
}
private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries2();
}
private: System::Void UpdateChartSeries2()
{
	// Очистка старых данных
	chart1->Series[1]->Points->Clear();

	// Получение значений из элементов управления NumericUpDown
	double xMin = (double)numericUpDown3->Value;
	double xMax = (double)numericUpDown8->Value;

	// Расчет шага по оси X
	double step = (xMax - xMin) / 100;

	// Добавление точек на график
	int pointIndex = 0;
	for (double x = xMin; x <= xMax; x += step)
	{
		// Добавление только каждой 10-й точки
		if (pointIndex % 10 == 0)
		{
			double y = 2*Math::Sin(x);
			chart1->Series[1]->Points->AddXY(x, y);
		}
		pointIndex++;
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получение выбранного цвета из ListBox
	String^ selectedColor = (String^)listBox1->SelectedItem;

	// Установка цвета линии графика
	if (selectedColor == "Red")
		chart1->Series[0]->Color = Color::Red;
	else if (selectedColor == "Green")
		chart1->Series[0]->Color = Color::Green;
	else if (selectedColor == "Blue")
		chart1->Series[0]->Color = Color::Blue;
	else if (selectedColor == "Orange")
		chart1->Series[0]->Color = Color::Orange;
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получение выбранного цвета из ListBox
	String^ selectedColor = (String^)listBox2->SelectedItem;

	// Установка цвета линии графика
	if (selectedColor == "Red")
		chart1->Series[1]->Color = Color::Red;
	else if (selectedColor == "Green")
		chart1->Series[1]->Color = Color::Green;
	else if (selectedColor == "Blue")
		chart1->Series[1]->Color = Color::Blue;
	else if (selectedColor == "Orange")
		chart1->Series[1]->Color = Color::Orange;
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries3();
}
private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries3();
}
private: System::Void UpdateChartSeries3()
{
	// Очистка старых данных
	chart1->Series[2]->Points->Clear();

	// Получение значений из элементов управления NumericUpDown
	double xMin = (double)numericUpDown4->Value;
	double xMax = (double)numericUpDown7->Value;

	// Расчет шага по оси X
	double step = (xMax - xMin) / 100;

	// Добавление точек на график
	int pointIndex = 0;
	for (double x = xMin; x <= xMax; x += step)
	{
		// Добавление только каждой 10-й точки
		if (pointIndex % 10 == 0)
		{
			double y = Math::Sin(2*x);
			chart1->Series[2]->Points->AddXY(x, y);
		}
		pointIndex++;
	}
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получение выбранного цвета из ListBox
	String^ selectedColor = (String^)listBox3->SelectedItem;

	// Установка цвета линии графика
	if (selectedColor == "Red")
		chart1->Series[2]->Color = Color::Red;
	else if (selectedColor == "Green")
		chart1->Series[2]->Color = Color::Green;
	else if (selectedColor == "Blue")
		chart1->Series[2]->Color = Color::Blue;
	else if (selectedColor == "Orange")
		chart1->Series[2]->Color = Color::Orange;
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries4();
}
private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateChartSeries4();
}
private: System::Void UpdateChartSeries4()
{
	// Очистка старых данных
	chart1->Series[3]->Points->Clear();

	// Получение значений из элементов управления NumericUpDown
	double xMin = (double)numericUpDown5->Value;
	double xMax = (double)numericUpDown6->Value;

	// Расчет шага по оси X
	double step = (xMax - xMin) / 100;

	// Добавление точек на график
	int pointIndex = 0;
	for (double x = xMin; x <= xMax; x += step)
	{
		// Добавление только каждой 10-й точки
		if (pointIndex % 10 == 0)
		{
			double y = Math::Sin(x/2);
			chart1->Series[3]->Points->AddXY(x, y);
		}
		pointIndex++;
	}
}
private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получение выбранного цвета из ListBox
	String^ selectedColor = (String^)listBox4->SelectedItem;

	// Установка цвета линии графика
	if (selectedColor == "Red")
		chart1->Series[3]->Color = Color::Red;
	else if (selectedColor == "Green")
		chart1->Series[3]->Color = Color::Green;
	else if (selectedColor == "Blue")
		chart1->Series[3]->Color = Color::Blue;
	else if (selectedColor == "Orange")
		chart1->Series[3]->Color = Color::Orange;
}
private: System::Void TaskTwo_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
