#pragma once
#include <cliext/vector>
#include <sstream>

namespace AchkasovPractice {

	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	// Определение узла бинарного дерева
	ref struct TreeNode {
		int value;
		int index;
		TreeNode^ left;
		TreeNode^ right;

		TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
	};

	// Определение бинарного дерева
	ref class BinaryTree {
	public:
		TreeNode^ root;

		BinaryTree() : root(nullptr) {}

		void Insert(int value) {
			root = InsertRec(root, value);
		}
		void AssignIndexes() {
			int index = 0;
			AssignIndexes(root, index);
		}
	private:
		TreeNode^ InsertRec(TreeNode^ node, int value) {
			if (node == nullptr) {
				return gcnew TreeNode(value);
			}

			if (value < node->value) {
				node->left = InsertRec(node->left, value);
			}
			else {
				node->right = InsertRec(node->right, value);
			}

			return node;
		}
		void AssignIndexes(TreeNode^ node, int& index) {
			if (node == nullptr) return;

			// Сначала обрабатываем левое поддерево
			AssignIndexes(node->left, index);

			// Присваиваем текущему узлу индекс
			node->index = index;
			index++;

			// Затем обрабатываем правое поддерево
			AssignIndexes(node->right, index);
		}
	};

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
			tree = gcnew BinaryTree();
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
	private: BinaryTree^ tree;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1262, 873);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel6, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 87);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1262, 698);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(883, 3);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 70)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(376, 692);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 484);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 484);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(370, 208);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Андрюша Ачкасов ПИ-23-1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel4->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button1, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1262, 87);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel5->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 785);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1262, 88);
			this->tableLayoutPanel5->TabIndex = 2;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(877, 692);
			this->tableLayoutPanel6->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 87);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Введите числа через пробел";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(1012, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 81);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Сортировать!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(129, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(877, 81);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"1 2 5 12 4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(871, 69);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Бинарное дерево";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 88);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Отсортированый массив";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(871, 617);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(899, 647);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew PaintEventHandler(this, &MyForm::OnPictureBoxPaint);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(129, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(877, 88);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Результат сортировки";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1262, 873);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->Load += gcnew System::EventHandler(this, &MyForm::MainForm_Load);

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		

	}
	private: void InOrder(TreeNode^ node, System::Text::StringBuilder^ sb) {
		if (node == nullptr) return;
		InOrder(node->left, sb);
		sb->Append(node->value + " ");
		InOrder(node->right, sb);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистка дерева
		tree = gcnew BinaryTree();

		// Получение и обработка ввода пользователя
		String^ input = this->textBox1->Text;
		array<String^>^ numbers = input->Split(' ');

		for each (String ^ numberStr in numbers) {
			int number;
			if (Int32::TryParse(numberStr, number)) {
				tree->Insert(number);
			}
		}
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		InOrder(tree->root, sb);

		// Выводим результат сортировки в label6
		this->label6->Text = sb->ToString();

		tree->AssignIndexes();
		// Перерисовка дерева
		this->textBox1->Invalidate();
	}
	void OnPictureBoxPaint(Object^ sender, PaintEventArgs^ e) {
		// Получение значений узлов и их сортировка
		List<int>^ values = gcnew List<int>();
		GetValues(tree->root, values);
		values->Sort();

		// Создание словаря для хранения индексов узлов
		Dictionary<int, int>^ valueToIndexMap = gcnew Dictionary<int, int>();
		for (int i = 0; i < values->Count; ++i) {
			valueToIndexMap[values[i]] = i;
		}

		// Вычисление размеров PictureBox
		int treeHeight = CalculateTreeHeight(tree->root);
		int treeWidth = CalculateTreeWidth(treeHeight);

		pictureBox1->Width = Math::Max(treeWidth, this->ClientSize.Width - 20);
		pictureBox1->Height = Math::Max(treeHeight * 50, this->ClientSize.Height - 70);

		Bitmap^ bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ g = Graphics::FromImage(bitmap);
		g->Clear(Color::White);

		// Отрисовка сетки
		int cellSize = 10;
		Pen^ gridPen = gcnew Pen(Color::LightGray);
		for (int x = 0; x <= pictureBox1->Width; x += cellSize) {
			g->DrawLine(gridPen, x, 0, x, pictureBox1->Height);
		}
		for (int y = 0; y <= pictureBox1->Height; y += cellSize) {
			g->DrawLine(gridPen, 0, y, pictureBox1->Width, y);
		}

		// Отрисовка дерева с индексами
		if (tree->root != nullptr) {
			DrawTree(tree->root, g, pictureBox1->Width / 2, 20, pictureBox1->Width / 4, 50, valueToIndexMap);
		}

		// Установка изображения в PictureBox
		pictureBox1->Image = bitmap;
	}
	void GetValues(TreeNode^ node, List<int>^ values) {
		if (node == nullptr) return;
		GetValues(node->left, values);
		values->Add(node->value);
		GetValues(node->right, values);
	}

	int CalculateTreeHeight(TreeNode^ node) {
		if (node == nullptr) return 0;
		return 1 + Math::Max(CalculateTreeHeight(node->left), CalculateTreeHeight(node->right));
	}

	int CalculateTreeWidth(int height) {
		return (1 << (height - 1)) * 60;
	}

	void DrawTree(TreeNode^ node, Graphics^ g, int x, int y, int hGap, int vGap, Dictionary<int, int>^ valueToIndexMap) {
		if (node == nullptr) return;

		// Рисуем узел с голубым фоном
		int nodeRadius = 15;
		Brush^ nodeBrush = gcnew SolidBrush(Color::LightBlue);
		g->FillEllipse(nodeBrush, x - nodeRadius, y - nodeRadius, nodeRadius * 2, nodeRadius * 2);
		g->DrawEllipse(Pens::Black, x - nodeRadius, y - nodeRadius, nodeRadius * 2, nodeRadius * 2);
		g->DrawString(node->value.ToString(), this->Font, Brushes::Black, x - 10, y - 10);

		// Получение индекса узла в отсортированном массиве
		int index = node->index;
		g->DrawString(index.ToString(), this->Font, Brushes::Red, x + nodeRadius, y - nodeRadius);

		// Рекурсивно рисуем детей
		if (node->left != nullptr) {
			int childX = x - hGap;
			int childY = y + vGap;
			g->DrawLine(Pens::Black, x, y + nodeRadius, childX, childY - nodeRadius);
			DrawTree(node->left, g, childX, childY, hGap / 2, vGap, valueToIndexMap);
		}

		if (node->right != nullptr) {
			int childX = x + hGap;
			int childY = y + vGap;
			g->DrawLine(Pens::Black, x, y + nodeRadius, childX, childY - nodeRadius);
			DrawTree(node->right, g, childX, childY, hGap / 2, vGap, valueToIndexMap);
		}
	}
};
}
