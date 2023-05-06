#pragma once
#include "TaskTwo.h"
#include "TaskThree.h"
#include "TaskFour.h"
namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для TaskOne
	/// </summary>
	public ref class TaskOne : public System::Windows::Forms::Form
	{
	public:
		TaskOne(void)
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
		~TaskOne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::ToolStripMenuItem^ графикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ySinxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ysin2xToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ysinx2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CloseToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ ChoiceTaskToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ задание2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ задание3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ задание4ToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->графикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ySinxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ysin2xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ysinx2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CloseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ChoiceTaskToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->задание2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->задание3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->задание4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->графикToolStripMenuItem,
					this->CloseToolStripMenuItem, this->ChoiceTaskToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(451, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// графикToolStripMenuItem
			// 
			this->графикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ySinxToolStripMenuItem,
					this->yToolStripMenuItem, this->ysin2xToolStripMenuItem, this->ysinx2ToolStripMenuItem
			});
			this->графикToolStripMenuItem->Name = L"графикToolStripMenuItem";
			this->графикToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->графикToolStripMenuItem->Text = L"График";
			// 
			// ySinxToolStripMenuItem
			// 
			this->ySinxToolStripMenuItem->Name = L"ySinxToolStripMenuItem";
			this->ySinxToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->ySinxToolStripMenuItem->Text = L"y=Sin(x)";
			this->ySinxToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::ySinxToolStripMenuItem_Click);
			// 
			// yToolStripMenuItem
			// 
			this->yToolStripMenuItem->Name = L"yToolStripMenuItem";
			this->yToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->yToolStripMenuItem->Text = L"y=2*Sin(x)";
			this->yToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::yToolStripMenuItem_Click);
			// 
			// ysin2xToolStripMenuItem
			// 
			this->ysin2xToolStripMenuItem->Name = L"ysin2xToolStripMenuItem";
			this->ysin2xToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->ysin2xToolStripMenuItem->Text = L"y=sin(2x)";
			this->ysin2xToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::ysin2xToolStripMenuItem_Click);
			// 
			// ysinx2ToolStripMenuItem
			// 
			this->ysinx2ToolStripMenuItem->Name = L"ysinx2ToolStripMenuItem";
			this->ysinx2ToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->ysinx2ToolStripMenuItem->Text = L"y=sin(x/2)";
			this->ysinx2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::ysinx2ToolStripMenuItem_Click);
			// 
			// CloseToolStripMenuItem
			// 
			this->CloseToolStripMenuItem->Name = L"CloseToolStripMenuItem";
			this->CloseToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->CloseToolStripMenuItem->Text = L"Выход";
			this->CloseToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::CloseToolStripMenuItem_Click);
			// 
			// ChoiceTaskToolStripMenuItem
			// 
			this->ChoiceTaskToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->задание2ToolStripMenuItem,
					this->задание3ToolStripMenuItem, this->задание4ToolStripMenuItem
			});
			this->ChoiceTaskToolStripMenuItem->Name = L"ChoiceTaskToolStripMenuItem";
			this->ChoiceTaskToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->ChoiceTaskToolStripMenuItem->Text = L"Выбор задания";
			// 
			// задание2ToolStripMenuItem
			// 
			this->задание2ToolStripMenuItem->Name = L"задание2ToolStripMenuItem";
			this->задание2ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->задание2ToolStripMenuItem->Text = L"Задание 2";
			this->задание2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::ChoiceTaskToolStripMenuItem_Click);
			// 
			// задание3ToolStripMenuItem
			// 
			this->задание3ToolStripMenuItem->Name = L"задание3ToolStripMenuItem";
			this->задание3ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->задание3ToolStripMenuItem->Text = L"Задание 3";
			this->задание3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::задание3ToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(454, 336);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 370);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Xmin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(277, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Xmax";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"-5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(252, 394);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"5";
			// 
			// задание4ToolStripMenuItem
			// 
			this->задание4ToolStripMenuItem->Name = L"задание4ToolStripMenuItem";
			this->задание4ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->задание4ToolStripMenuItem->Text = L"Задание 4";
			this->задание4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TaskOne::задание4ToolStripMenuItem_Click);
			// 
			// TaskOne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 428);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TaskOne";
			this->Text = L"Графики в pictureBox";
			this->Load += gcnew System::EventHandler(this, &TaskOne::TaskOne_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TaskOne_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private:
	bool showGrid = true;
private: System::Void ySinxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
	{
		MessageBox::Show("Введите минимальное и максимальное значения оси X","Ошибка!");
		return;
	}
	// Получение минимального и максимального значений оси X
	double xMin = Convert::ToDouble(textBox1->Text);
	double xMax = Convert::ToDouble(textBox2->Text);

	// Создание нового изображения
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);

	System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(bmp);

	if (showGrid)
	{
		// Отрисовка осей координат
		Pen^ axisPen = gcnew Pen(Color::Gray);
		g->DrawLine(axisPen, 0, bmp->Height / 2, bmp->Width, bmp->Height / 2);
		g->DrawLine(axisPen, bmp->Width / 2, 0, bmp->Width / 2, bmp->Height);

		// Отрисовка сетки
		Pen^ gridPen = gcnew Pen(Color::LightGray);
		for (int i = 1; i < 4; i++)
		{
			int x = i * bmp->Width / 8;
			g->DrawLine(gridPen, x, 0, x, bmp->Height);
			g->DrawLine(gridPen, bmp->Width - x, 0, bmp->Width - x, bmp->Height);

			int y = i * bmp->Height / 8;
			g->DrawLine(gridPen, 0, y, bmp->Width, y);
			g->DrawLine(gridPen, 0, bmp->Height - y, bmp->Width, bmp->Height - y);
		}
	}

	// Отрисовка графика на изображении
	Pen^ graphPen = gcnew Pen(Color::Green);
	for (int i = 0; i < bmp->Width - 1; i++)
	{
		double x1 = xMin + (xMax - xMin) * i / bmp->Width;
		double y1 = Math::Sin(x1);
		int py1 = (int)(bmp->Height / 2 - y1 * bmp->Height / 4);

		double x2 = xMin + (xMax - xMin) * (i + 1) / bmp->Width;
		double y2 = Math::Sin(x2);
		int py2 = (int)(bmp->Height / 2 - y2 * bmp->Height / 4);

		g->DrawLine(graphPen, i, py1, i + 1, py2);
	}

	// Отображение изображения на PictureBox
	pictureBox1->Image = bmp;
}
private: System::Void AxisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	showGrid = !showGrid;
}
private: System::Void yToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
	{
		MessageBox::Show("Введите минимальное и максимальное значения оси X", "Ошибка!");
		return;
	}
	// Получение минимального и максимального значений оси X
	double xMin = Convert::ToDouble(textBox1->Text);
	double xMax = Convert::ToDouble(textBox2->Text);

	// Создание нового изображения
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);

	System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(bmp);

	if (showGrid)
	{
		// Отрисовка осей координат
		Pen^ axisPen = gcnew Pen(Color::Gray);
		g->DrawLine(axisPen, 0, bmp->Height / 2, bmp->Width, bmp->Height / 2);
		g->DrawLine(axisPen, bmp->Width / 2, 0, bmp->Width / 2, bmp->Height);

		// Отрисовка сетки
		Pen^ gridPen = gcnew Pen(Color::LightGray);
		for (int i = 1; i < 4; i++)
		{
			int x = i * bmp->Width / 8;
			g->DrawLine(gridPen, x, 0, x, bmp->Height);
			g->DrawLine(gridPen, bmp->Width - x, 0, bmp->Width - x, bmp->Height);

			int y = i * bmp->Height / 8;
			g->DrawLine(gridPen, 0, y, bmp->Width, y);
			g->DrawLine(gridPen, 0, bmp->Height - y, bmp->Width, bmp->Height - y);
		}
	}

	// Отрисовка графика на изображении
	Pen^ graphPen = gcnew Pen(Color::Green);
	for (int i = 0; i < bmp->Width - 1; i++)
	{
		double x1 = xMin + (xMax - xMin) * i / bmp->Width;
		double y1 = 2*Math::Sin(x1);
		int py1 = (int)(bmp->Height / 2 - y1 * bmp->Height / 4);

		double x2 = xMin + (xMax - xMin) * (i + 1) / bmp->Width;
		double y2 = 2*Math::Sin(x2);
		int py2 = (int)(bmp->Height / 2 - y2 * bmp->Height / 4);

		g->DrawLine(graphPen, i, py1, i + 1, py2);
	}

	// Отображение изображения на PictureBox
	pictureBox1->Image = bmp;
}
private: System::Void ysin2xToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
	{
		MessageBox::Show("Введите минимальное и максимальное значения оси X", "Ошибка!");
		return;
	}
	// Получение минимального и максимального значений оси X
	double xMin = Convert::ToDouble(textBox1->Text);
	double xMax = Convert::ToDouble(textBox2->Text);

	// Создание нового изображения
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);

	System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(bmp);

	if (showGrid)
	{
		// Отрисовка осей координат
		Pen^ axisPen = gcnew Pen(Color::Gray);
		g->DrawLine(axisPen, 0, bmp->Height / 2, bmp->Width, bmp->Height / 2);
		g->DrawLine(axisPen, bmp->Width / 2, 0, bmp->Width / 2, bmp->Height);

		// Отрисовка сетки
		Pen^ gridPen = gcnew Pen(Color::LightGray);
		for (int i = 1; i < 4; i++)
		{
			int x = i * bmp->Width / 8;
			g->DrawLine(gridPen, x, 0, x, bmp->Height);
			g->DrawLine(gridPen, bmp->Width - x, 0, bmp->Width - x, bmp->Height);

			int y = i * bmp->Height / 8;
			g->DrawLine(gridPen, 0, y, bmp->Width, y);
			g->DrawLine(gridPen, 0, bmp->Height - y, bmp->Width, bmp->Height - y);
		}
	}

	// Отрисовка графика на изображении
	Pen^ graphPen = gcnew Pen(Color::Green);
	for (int i = 0; i < bmp->Width - 1; i++)
	{
		double x1 = xMin + (xMax - xMin) * i / bmp->Width;
		double y1 = 2 * Math::Sin(2*x1);
		int py1 = (int)(bmp->Height / 2 - y1 * bmp->Height / 4);

		double x2 = xMin + (xMax - xMin) * (i + 1) / bmp->Width;
		double y2 = 2 * Math::Sin(2*x2);
		int py2 = (int)(bmp->Height / 2 - y2 * bmp->Height / 4);

		g->DrawLine(graphPen, i, py1, i + 1, py2);
	}

	// Отображение изображения на PictureBox
	pictureBox1->Image = bmp;
}
private: System::Void ysinx2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
	{
		MessageBox::Show("Введите минимальное и максимальное значения оси X", "Ошибка!");
		return;
	}
	// Получение минимального и максимального значений оси X
	double xMin = Convert::ToDouble(textBox1->Text);
	double xMax = Convert::ToDouble(textBox2->Text);

	// Создание нового изображения
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);

	System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(bmp);

	if (showGrid)
	{
		// Отрисовка осей координат
		Pen^ axisPen = gcnew Pen(Color::Gray);
		g->DrawLine(axisPen, 0, bmp->Height / 2, bmp->Width, bmp->Height / 2);
		g->DrawLine(axisPen, bmp->Width / 2, 0, bmp->Width / 2, bmp->Height);

		// Отрисовка сетки
		Pen^ gridPen = gcnew Pen(Color::LightGray);
		for (int i = 1; i < 4; i++)
		{
			int x = i * bmp->Width / 8;
			g->DrawLine(gridPen, x, 0, x, bmp->Height);
			g->DrawLine(gridPen, bmp->Width - x, 0, bmp->Width - x, bmp->Height);

			int y = i * bmp->Height / 8;
			g->DrawLine(gridPen, 0, y, bmp->Width, y);
			g->DrawLine(gridPen, 0, bmp->Height - y, bmp->Width, bmp->Height - y);
		}
	}

	// Отрисовка графика на изображении
	Pen^ graphPen = gcnew Pen(Color::Green);
	for (int i = 0; i < bmp->Width - 1; i++)
	{
		double x1 = xMin + (xMax - xMin) * i / bmp->Width;
		double y1 = 2 * Math::Sin(x1/2);
		int py1 = (int)(bmp->Height / 2 - y1 * bmp->Height / 4);

		double x2 = xMin + (xMax - xMin) * (i + 1) / bmp->Width;
		double y2 = 2 * Math::Sin(x2/2);
		int py2 = (int)(bmp->Height / 2 - y2 * bmp->Height / 4);

		g->DrawLine(graphPen, i, py1, i + 1, py2);
	}

	// Отображение изображения на PictureBox
	pictureBox1->Image = bmp;
}
private: System::Void CloseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void ChoiceTaskToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TaskTwo^ task2 = gcnew TaskTwo;
	task2->Show();
}
private: System::Void задание3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TaskThree^ task3 = gcnew TaskThree;
	task3->Show();
}
private: System::Void задание4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TaskFour^ task4 = gcnew TaskFour;
	task4->Show();
}
};
}
