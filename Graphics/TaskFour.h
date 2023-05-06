#pragma once

namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� TaskFour
	/// </summary>
	public ref class TaskFour : public System::Windows::Forms::Form
	{
	public:
		TaskFour(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
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
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->Text = L"��������";
			this->Load += gcnew System::EventHandler(this, &TaskFour::TaskFour_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		const int radius = 100; // ������ ����������
		double currentAngle = 0; // ������� ���� �����
		Point center; // ����� ����������
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// ������������� ���������� ����� �� ����������
		currentAngle += 0.5;
		int x = center.X + (int)(radius * Math::Cos(currentAngle));
		int y = center.Y + (int)(radius * Math::Sin(currentAngle));
		Point point(x, y);

		// ������� pictureBox � ������ �����
		pictureBox1->Refresh();
		System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
		g->FillEllipse(Brushes::Red, point.X, point.Y, 10, 10);
	}
	private: System::Void TaskFour_Load(System::Object^ sender, System::EventArgs^ e) {
		// ������� ����� pictureBox
		center = Point(pictureBox1->Width / 2, pictureBox1->Height / 2);
		// ��������� ������ � ���������� 50 ��
		timer1->Interval = 100;
		timer1->Start();
	}
	};
}
