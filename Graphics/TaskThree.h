#pragma once

namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TaskThree
	/// </summary>
	public ref class TaskThree : public System::Windows::Forms::Form
	{
	public:
		TaskThree(void)
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
		~TaskThree()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::PeachPuff;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(2, 1);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(843, 406);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TaskThree::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TaskThree::button2_Click);
			// 
			// TaskThree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(848, 453);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"TaskThree";
			this->Text = L"Кардиоида";
			this->Load += gcnew System::EventHandler(this, &TaskThree::TaskThree_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Добавление точек в серию данных
		for (double t = 0; t <= 2 * Math::PI; t += 0.01)
		{
			double x = 16 * Math::Sin(t) * Math::Sin(t) * Math::Sin(t);
			double y = 13 * Math::Cos(t) - 5 * Math::Cos(2 * t) - 2 * Math::Cos(3 * t) - Math::Cos(4 * t);
			chart1->Series[0]->Points->AddXY(x, y);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series->Clear();
	}
private: System::Void TaskThree_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
