#pragma once

namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ TaskFour
	/// </summary>
	public ref class TaskFour : public System::Windows::Forms::Form
	{
	public:
		TaskFour(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			center = Point(ClientSize.Width / 2, ClientSize.Height / 2);
		}
	private:
		const double PI = 3.14159265358979323846;
		double angle = 0.0;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

		   double speed = 1.0;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~TaskFour()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &TaskFour::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(31, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(829, 486);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// TaskFour
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 542);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"TaskFour";
			this->Text = L"јнимаци€";
			this->Load += gcnew System::EventHandler(this, &TaskFour::TaskFour_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		const int radius = 100; // радиус окружности
		double currentAngle = 0; // текущий угол точки
		Point center; // центр окружности
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// ѕересчитываем координаты точки на окружности
		currentAngle += 0.5;
		int x = center.X + (int)(radius * Math::Cos(currentAngle));
		int y = center.Y + (int)(radius * Math::Sin(currentAngle));
		Point point(x, y);

		// ќчищаем pictureBox и рисуем точку
		pictureBox1->Refresh();
		System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
		g->FillEllipse(Brushes::Red, point.X, point.Y, 10, 10);
	}
	private: System::Void TaskFour_Load(System::Object^ sender, System::EventArgs^ e) {
		// находим центр pictureBox
		center = Point(pictureBox1->Width / 2, pictureBox1->Height / 2);
		// запускаем таймер с интервалом 50 мс
		timer1->Interval = 100;
		timer1->Start();
	}
	};
}
