#pragma once
#include "Scalar.h"
#include "Vector.h"
#include "Matrix.h"

namespace CalcLab {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
            InitializeData();
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        Scalar^ scalarA;	// объекты для хранения данных
        Scalar^ scalarB;
        Scalar^ scalarResult;

        Vector^ vectorA;
        Vector^ vectorB;
        Vector^ vectorResult;

        Matrix^ matrixA;
        Matrix^ matrixB;
        Matrix^ matrixResult;

        System::Windows::Forms::TabControl^ tabControl1;	//элементы управления
        System::Windows::Forms::TabPage^ tabPageScalar;
        System::Windows::Forms::TabPage^ tabPageVector;
        System::Windows::Forms::TabPage^ tabPageMatrix;
        System::Windows::Forms::TabPage^ tabPageAbout;
        System::Windows::Forms::GroupBox^ groupBoxScalarA;
        System::Windows::Forms::TextBox^ txtScalarA;
        System::Windows::Forms::GroupBox^ groupBoxScalarB;
        System::Windows::Forms::TextBox^ txtScalarB;
        System::Windows::Forms::Button^ btnScalarMultiply;
        System::Windows::Forms::Button^ btnScalarPower;
        System::Windows::Forms::GroupBox^ groupBoxScalarResult;
        System::Windows::Forms::TextBox^ txtScalarResult;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::GroupBox^ groupBoxVectorA;
        System::Windows::Forms::TextBox^ txtVectorA;
        System::Windows::Forms::GroupBox^ groupBoxVectorB;
        System::Windows::Forms::TextBox^ txtVectorB;
        System::Windows::Forms::Button^ btnVectorMultiply;
        System::Windows::Forms::GroupBox^ groupBoxVectorResult;
        System::Windows::Forms::TextBox^ txtVectorResult;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::GroupBox^ groupBoxMatrixA;
        System::Windows::Forms::TextBox^ txtMatrixA;
        System::Windows::Forms::GroupBox^ groupBoxMatrixB;
        System::Windows::Forms::TextBox^ txtMatrixB;
        System::Windows::Forms::Button^ btnMatrixElementWise;
        System::Windows::Forms::Button^ btnMatrixVectorMultiply;
        System::Windows::Forms::GroupBox^ groupBoxMatrixResult;
        System::Windows::Forms::TextBox^ txtMatrixResult;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::Label^ label9;
        System::Windows::Forms::MenuStrip^ menuStrip1;
        System::Windows::Forms::TextBox^ txtAbout;
        System::Windows::Forms::Label^ label10;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)	//инициализация элементов управления
        {
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPageScalar = (gcnew System::Windows::Forms::TabPage());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBoxScalarResult = (gcnew System::Windows::Forms::GroupBox());
            this->txtScalarResult = (gcnew System::Windows::Forms::TextBox());
            this->btnScalarPower = (gcnew System::Windows::Forms::Button());
            this->btnScalarMultiply = (gcnew System::Windows::Forms::Button());
            this->groupBoxScalarB = (gcnew System::Windows::Forms::GroupBox());
            this->txtScalarB = (gcnew System::Windows::Forms::TextBox());
            this->groupBoxScalarA = (gcnew System::Windows::Forms::GroupBox());
            this->txtScalarA = (gcnew System::Windows::Forms::TextBox());
            this->tabPageVector = (gcnew System::Windows::Forms::TabPage());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->groupBoxVectorResult = (gcnew System::Windows::Forms::GroupBox());
            this->txtVectorResult = (gcnew System::Windows::Forms::TextBox());
            this->btnVectorMultiply = (gcnew System::Windows::Forms::Button());
            this->groupBoxVectorB = (gcnew System::Windows::Forms::GroupBox());
            this->txtVectorB = (gcnew System::Windows::Forms::TextBox());
            this->groupBoxVectorA = (gcnew System::Windows::Forms::GroupBox());
            this->txtVectorA = (gcnew System::Windows::Forms::TextBox());
            this->tabPageMatrix = (gcnew System::Windows::Forms::TabPage());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->groupBoxMatrixResult = (gcnew System::Windows::Forms::GroupBox());
            this->txtMatrixResult = (gcnew System::Windows::Forms::TextBox());
            this->btnMatrixVectorMultiply = (gcnew System::Windows::Forms::Button());
            this->btnMatrixElementWise = (gcnew System::Windows::Forms::Button());
            this->groupBoxMatrixB = (gcnew System::Windows::Forms::GroupBox());
            this->txtMatrixB = (gcnew System::Windows::Forms::TextBox());
            this->groupBoxMatrixA = (gcnew System::Windows::Forms::GroupBox());
            this->txtMatrixA = (gcnew System::Windows::Forms::TextBox());
            this->tabPageAbout = (gcnew System::Windows::Forms::TabPage());
            this->txtAbout = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->tabControl1->SuspendLayout();
            this->tabPageScalar->SuspendLayout();
            this->groupBoxScalarResult->SuspendLayout();
            this->groupBoxScalarB->SuspendLayout();
            this->groupBoxScalarA->SuspendLayout();
            this->tabPageVector->SuspendLayout();
            this->groupBoxVectorResult->SuspendLayout();
            this->groupBoxVectorB->SuspendLayout();
            this->groupBoxVectorA->SuspendLayout();
            this->tabPageMatrix->SuspendLayout();
            this->groupBoxMatrixResult->SuspendLayout();
            this->groupBoxMatrixB->SuspendLayout();
            this->groupBoxMatrixA->SuspendLayout();
            this->tabPageAbout->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPageScalar);
            this->tabControl1->Controls->Add(this->tabPageVector);
            this->tabControl1->Controls->Add(this->tabPageMatrix);
            this->tabControl1->Controls->Add(this->tabPageAbout);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(0, 24);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(784, 537);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPageScalar
            // 
            this->tabPageScalar->Controls->Add(this->label1);
            this->tabPageScalar->Controls->Add(this->groupBoxScalarResult);
            this->tabPageScalar->Controls->Add(this->btnScalarPower);
            this->tabPageScalar->Controls->Add(this->btnScalarMultiply);
            this->tabPageScalar->Controls->Add(this->groupBoxScalarB);
            this->tabPageScalar->Controls->Add(this->groupBoxScalarA);
            this->tabPageScalar->Location = System::Drawing::Point(4, 22);
            this->tabPageScalar->Name = L"tabPageScalar";
            this->tabPageScalar->Padding = System::Windows::Forms::Padding(3);
            this->tabPageScalar->Size = System::Drawing::Size(776, 511);
            this->tabPageScalar->TabIndex = 0;
            this->tabPageScalar->Text = L"Скаляры";
            this->tabPageScalar->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(20, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(444, 16);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Введите скалярные значения (одно число), например, -2.5 или 3";
            // 
            // groupBoxScalarResult
            // 
            this->groupBoxScalarResult->Controls->Add(this->txtScalarResult);
            this->groupBoxScalarResult->Location = System::Drawing::Point(400, 200);
            this->groupBoxScalarResult->Name = L"groupBoxScalarResult";
            this->groupBoxScalarResult->Size = System::Drawing::Size(350, 200);
            this->groupBoxScalarResult->TabIndex = 4;
            this->groupBoxScalarResult->TabStop = false;
            this->groupBoxScalarResult->Text = L"Результат";
            // 
            // txtScalarResult
            // 
            this->txtScalarResult->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtScalarResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtScalarResult->Location = System::Drawing::Point(3, 16);
            this->txtScalarResult->Multiline = true;
            this->txtScalarResult->Name = L"txtScalarResult";
            this->txtScalarResult->ReadOnly = true;
            this->txtScalarResult->Size = System::Drawing::Size(344, 181);
            this->txtScalarResult->TabIndex = 0;
            // 
            // btnScalarPower
            // 
            this->btnScalarPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnScalarPower->Location = System::Drawing::Point(200, 300);
            this->btnScalarPower->Name = L"btnScalarPower";
            this->btnScalarPower->Size = System::Drawing::Size(150, 80);
            this->btnScalarPower->TabIndex = 3;
            this->btnScalarPower->Text = L"Возведение в степень";
            this->btnScalarPower->UseVisualStyleBackColor = true;
            this->btnScalarPower->Click += gcnew System::EventHandler(this, &MainForm::btnScalarPower_Click);
            // 
            // btnScalarMultiply
            // 
            this->btnScalarMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnScalarMultiply->Location = System::Drawing::Point(200, 250);
            this->btnScalarMultiply->Name = L"btnScalarMultiply";
            this->btnScalarMultiply->Size = System::Drawing::Size(150, 40);
            this->btnScalarMultiply->TabIndex = 2;
            this->btnScalarMultiply->Text = L"Умножение";
            this->btnScalarMultiply->UseVisualStyleBackColor = true;
            this->btnScalarMultiply->Click += gcnew System::EventHandler(this, &MainForm::btnScalarMultiply_Click);
            // 
            // groupBoxScalarB
            // 
            this->groupBoxScalarB->Controls->Add(this->txtScalarB);
            this->groupBoxScalarB->Location = System::Drawing::Point(400, 50);
            this->groupBoxScalarB->Name = L"groupBoxScalarB";
            this->groupBoxScalarB->Size = System::Drawing::Size(350, 130);
            this->groupBoxScalarB->TabIndex = 1;
            this->groupBoxScalarB->TabStop = false;
            this->groupBoxScalarB->Text = L"Скаляр B";
            // 
            // txtScalarB
            // 
            this->txtScalarB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtScalarB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtScalarB->Location = System::Drawing::Point(3, 16);
            this->txtScalarB->Multiline = true;
            this->txtScalarB->Name = L"txtScalarB";
            this->txtScalarB->Size = System::Drawing::Size(344, 111);
            this->txtScalarB->TabIndex = 0;
            // 
            // groupBoxScalarA
            // 
            this->groupBoxScalarA->Controls->Add(this->txtScalarA);
            this->groupBoxScalarA->Location = System::Drawing::Point(20, 50);
            this->groupBoxScalarA->Name = L"groupBoxScalarA";
            this->groupBoxScalarA->Size = System::Drawing::Size(350, 130);
            this->groupBoxScalarA->TabIndex = 0;
            this->groupBoxScalarA->TabStop = false;
            this->groupBoxScalarA->Text = L"Скаляр A";
            // 
            // txtScalarA
            // 
            this->txtScalarA->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtScalarA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtScalarA->Location = System::Drawing::Point(3, 16);
            this->txtScalarA->Multiline = true;
            this->txtScalarA->Name = L"txtScalarA";
            this->txtScalarA->Size = System::Drawing::Size(344, 111);
            this->txtScalarA->TabIndex = 0;
            // 
            // tabPageVector
            // 
            this->tabPageVector->Controls->Add(this->label2);
            this->tabPageVector->Controls->Add(this->groupBoxVectorResult);
            this->tabPageVector->Controls->Add(this->btnVectorMultiply);
            this->tabPageVector->Controls->Add(this->groupBoxVectorB);
            this->tabPageVector->Controls->Add(this->groupBoxVectorA);
            this->tabPageVector->Location = System::Drawing::Point(4, 22);
            this->tabPageVector->Name = L"tabPageVector";
            this->tabPageVector->Padding = System::Windows::Forms::Padding(3);
            this->tabPageVector->Size = System::Drawing::Size(776, 511);
            this->tabPageVector->TabIndex = 1;
            this->tabPageVector->Text = L"Векторы";
            this->tabPageVector->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(20, 20);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(593, 16);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Введите векторные значения, например, 1 2 3 4";
            // 
            // groupBoxVectorResult
            // 
            this->groupBoxVectorResult->Controls->Add(this->txtVectorResult);
            this->groupBoxVectorResult->Location = System::Drawing::Point(400, 200);
            this->groupBoxVectorResult->Name = L"groupBoxVectorResult";
            this->groupBoxVectorResult->Size = System::Drawing::Size(350, 200);
            this->groupBoxVectorResult->TabIndex = 4;
            this->groupBoxVectorResult->TabStop = false;
            this->groupBoxVectorResult->Text = L"Результат";
            // 
            // txtVectorResult
            // 
            this->txtVectorResult->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtVectorResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtVectorResult->Location = System::Drawing::Point(3, 16);
            this->txtVectorResult->Multiline = true;
            this->txtVectorResult->Name = L"txtVectorResult";
            this->txtVectorResult->ReadOnly = true;
            this->txtVectorResult->Size = System::Drawing::Size(344, 181);
            this->txtVectorResult->TabIndex = 0;
            // 
            // btnVectorMultiply
            // 
            this->btnVectorMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnVectorMultiply->Location = System::Drawing::Point(200, 300);
            this->btnVectorMultiply->Name = L"btnVectorMultiply";
            this->btnVectorMultiply->Size = System::Drawing::Size(150, 60);
            this->btnVectorMultiply->TabIndex = 3;
            this->btnVectorMultiply->Text = L"Поэлементное умножение";
            this->btnVectorMultiply->UseVisualStyleBackColor = true;
            this->btnVectorMultiply->Click += gcnew System::EventHandler(this, &MainForm::btnVectorMultiply_Click);
            // 
            // groupBoxVectorB
            // 
            this->groupBoxVectorB->Controls->Add(this->txtVectorB);
            this->groupBoxVectorB->Location = System::Drawing::Point(400, 50);
            this->groupBoxVectorB->Name = L"groupBoxVectorB";
            this->groupBoxVectorB->Size = System::Drawing::Size(350, 130);
            this->groupBoxVectorB->TabIndex = 1;
            this->groupBoxVectorB->TabStop = false;
            this->groupBoxVectorB->Text = L"Вектор B";
            // 
            // txtVectorB
            // 
            this->txtVectorB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtVectorB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtVectorB->Location = System::Drawing::Point(3, 16);
            this->txtVectorB->Multiline = true;
            this->txtVectorB->Name = L"txtVectorB";
            this->txtVectorB->Size = System::Drawing::Size(344, 111);
            this->txtVectorB->TabIndex = 0;
            // 
            // groupBoxVectorA
            // 
            this->groupBoxVectorA->Controls->Add(this->txtVectorA);
            this->groupBoxVectorA->Location = System::Drawing::Point(20, 50);
            this->groupBoxVectorA->Name = L"groupBoxVectorA";
            this->groupBoxVectorA->Size = System::Drawing::Size(350, 130);
            this->groupBoxVectorA->TabIndex = 0;
            this->groupBoxVectorA->TabStop = false;
            this->groupBoxVectorA->Text = L"Вектор A";
            // 
            // txtVectorA
            // 
            this->txtVectorA->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtVectorA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtVectorA->Location = System::Drawing::Point(3, 16);
            this->txtVectorA->Multiline = true;
            this->txtVectorA->Name = L"txtVectorA";
            this->txtVectorA->Size = System::Drawing::Size(344, 111);
            this->txtVectorA->TabIndex = 0;
            // 
            // tabPageMatrix
            // 
            this->tabPageMatrix->Controls->Add(this->label3);
            this->tabPageMatrix->Controls->Add(this->groupBoxMatrixResult);
            this->tabPageMatrix->Controls->Add(this->btnMatrixVectorMultiply);
            this->tabPageMatrix->Controls->Add(this->btnMatrixElementWise);
            this->tabPageMatrix->Controls->Add(this->groupBoxMatrixB);
            this->tabPageMatrix->Controls->Add(this->groupBoxMatrixA);
            this->tabPageMatrix->Location = System::Drawing::Point(4, 22);
            this->tabPageMatrix->Name = L"tabPageMatrix";
            this->tabPageMatrix->Size = System::Drawing::Size(776, 511);
            this->tabPageMatrix->TabIndex = 2;
            this->tabPageMatrix->Text = L"Матрицы";
            this->tabPageMatrix->UseVisualStyleBackColor = true;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(20, 20);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(734, 16);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Введите матричные значения, например, 1 2 3;4 5 6 создаст матрицу 2x3";
            // 
            // groupBoxMatrixResult
            // 
            this->groupBoxMatrixResult->Controls->Add(this->txtMatrixResult);
            this->groupBoxMatrixResult->Location = System::Drawing::Point(400, 200);
            this->groupBoxMatrixResult->Name = L"groupBoxMatrixResult";
            this->groupBoxMatrixResult->Size = System::Drawing::Size(350, 200);
            this->groupBoxMatrixResult->TabIndex = 4;
            this->groupBoxMatrixResult->TabStop = false;
            this->groupBoxMatrixResult->Text = L"Результат";
            // 
            // txtMatrixResult
            // 
            this->txtMatrixResult->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtMatrixResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtMatrixResult->Location = System::Drawing::Point(3, 16);
            this->txtMatrixResult->Multiline = true;
            this->txtMatrixResult->Name = L"txtMatrixResult";
            this->txtMatrixResult->ReadOnly = true;
            this->txtMatrixResult->Size = System::Drawing::Size(344, 181);
            this->txtMatrixResult->TabIndex = 0;
            // 
            // btnMatrixVectorMultiply
            // 
            this->btnMatrixVectorMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnMatrixVectorMultiply->Location = System::Drawing::Point(200, 250);
            this->btnMatrixVectorMultiply->Name = L"btnMatrixVectorMultiply";
            this->btnMatrixVectorMultiply->Size = System::Drawing::Size(150, 60);
            this->btnMatrixVectorMultiply->TabIndex = 3;
            this->btnMatrixVectorMultiply->Text = L"Умножение на вектор";
            this->btnMatrixVectorMultiply->UseVisualStyleBackColor = true;
            this->btnMatrixVectorMultiply->Click += gcnew System::EventHandler(this, &MainForm::btnMatrixVectorMultiply_Click);
            // 
            // btnMatrixElementWise
            // 
            this->btnMatrixElementWise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnMatrixElementWise->Location = System::Drawing::Point(200, 320);
            this->btnMatrixElementWise->Name = L"btnMatrixElementWise";
            this->btnMatrixElementWise->Size = System::Drawing::Size(150, 60);
            this->btnMatrixElementWise->TabIndex = 2;
            this->btnMatrixElementWise->Text = L"Поэлементное умножение";
            this->btnMatrixElementWise->UseVisualStyleBackColor = true;
            this->btnMatrixElementWise->Click += gcnew System::EventHandler(this, &MainForm::btnMatrixElementWise_Click);
            // 
            // groupBoxMatrixB
            // 
            this->groupBoxMatrixB->Controls->Add(this->txtMatrixB);
            this->groupBoxMatrixB->Location = System::Drawing::Point(400, 50);
            this->groupBoxMatrixB->Name = L"groupBoxMatrixB";
            this->groupBoxMatrixB->Size = System::Drawing::Size(350, 130);
            this->groupBoxMatrixB->TabIndex = 1;
            this->groupBoxMatrixB->TabStop = false;
            this->groupBoxMatrixB->Text = L"Матрица B";
            // 
            // txtMatrixB
            // 
            this->txtMatrixB->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtMatrixB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtMatrixB->Location = System::Drawing::Point(3, 16);
            this->txtMatrixB->Multiline = true;
            this->txtMatrixB->Name = L"txtMatrixB";
            this->txtMatrixB->Size = System::Drawing::Size(344, 111);
            this->txtMatrixB->TabIndex = 0;
            // 
            // groupBoxMatrixA
            // 
            this->groupBoxMatrixA->Controls->Add(this->txtMatrixA);
            this->groupBoxMatrixA->Location = System::Drawing::Point(20, 50);
            this->groupBoxMatrixA->Name = L"groupBoxMatrixA";
            this->groupBoxMatrixA->Size = System::Drawing::Size(350, 130);
            this->groupBoxMatrixA->TabIndex = 0;
            this->groupBoxMatrixA->TabStop = false;
            this->groupBoxMatrixA->Text = L"Матрица A";
            // 
            // txtMatrixA
            // 
            this->txtMatrixA->Dock = System::Windows::Forms::DockStyle::Fill;
            this->txtMatrixA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtMatrixA->Location = System::Drawing::Point(3, 16);
            this->txtMatrixA->Multiline = true;
            this->txtMatrixA->Name = L"txtMatrixA";
            this->txtMatrixA->Size = System::Drawing::Size(344, 111);
            this->txtMatrixA->TabIndex = 0;
            // 
            // tabPageAbout
            // 
            this->tabPageAbout->Controls->Add(this->txtAbout);
            this->tabPageAbout->Controls->Add(this->label10);
            this->tabPageAbout->Controls->Add(this->label4);
            this->tabPageAbout->Controls->Add(this->label5);
            this->tabPageAbout->Controls->Add(this->label6);
            this->tabPageAbout->Controls->Add(this->label7);
            this->tabPageAbout->Controls->Add(this->label8);
            this->tabPageAbout->Controls->Add(this->label9);
            this->tabPageAbout->Location = System::Drawing::Point(4, 22);
            this->tabPageAbout->Name = L"tabPageAbout";
            this->tabPageAbout->Size = System::Drawing::Size(776, 511);
            this->tabPageAbout->TabIndex = 3;
            this->tabPageAbout->Text = L"О программе";
            this->tabPageAbout->UseVisualStyleBackColor = true;
            // 
            // txtAbout
            // 
            this->txtAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtAbout->Location = System::Drawing::Point(20, 230);
            this->txtAbout->Multiline = true;
            this->txtAbout->Name = L"txtAbout";
            this->txtAbout->ReadOnly = true;
            this->txtAbout->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txtAbout->Size = System::Drawing::Size(730, 250);
            this->txtAbout->TabIndex = 7;
            this->txtAbout->Text = L"ПОМОЩЬ:\r\n\r\n1. Скаляры:\r\n   - Введите одно число в каждое поле\r\n   - Нажмите \"Умножение\" или \"Возведение в степень\"\r\n\r\n2. Векторы:\r\n   -"
                L" Введите числа через пробел\r\n   - Нажмите \"Поэлементное умножение\"\r\n\r\n3. Матрицы:\r\n   - Введите матрицу в формате: строка1;строка2\r\n   - Элементы строк разделяйте пробелами\r\n   -"
                L" Если хотите умножить матрицу на вектор, то матрицу следует вводить в поле \"Матрица А\", а вектор в поле \"Матрица В\"\r\n   -"
                L" Нажмите \"Поэлементное умножение\" или \"Умножение на вектор\"\r\n\r\nПРИМЕРЫ:\r\n   Вектор: 1 2 3\r\n   Матрица: 1 2 3;4 5 6\r\n";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(20, 190);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(205, 20);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Инструкция по работе:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(20, 20);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(352, 24);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Математический калькулятор";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(20, 70);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(151, 20);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Автор: Давыдов М.А.";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(20, 100);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(115, 20);
            this->label6->TabIndex = 2;
            this->label6->Text = L"Группа: 5.205-1";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(20, 130);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(286, 20);
            this->label7->TabIndex = 3;
            this->label7->Text = L"Вариант: 3, 4";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(400, 20);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(350, 17);
            this->label8->TabIndex = 4;
            this->label8->Text = L"Поддерживаемые операции:";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(400, 50);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(320, 102);
            this->label9->TabIndex = 5;
            this->label9->Text = L"1. Скаляры:\r\n   - Умножение\r\n   - Возведение в степень\r\n\r\n2. Векторы:\r\n   - Поэлементное умножение\r\n\r\n3. Матрицы:\r\n   - Поэлементное умножение\r\n   "
                L"- Умножение матрицы на вектор";
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(784, 561);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MainForm";
            this->Text = L"Математический калькулятор";
            this->tabControl1->ResumeLayout(false);
            this->tabPageScalar->ResumeLayout(false);
            this->tabPageScalar->PerformLayout();
            this->groupBoxScalarResult->ResumeLayout(false);
            this->groupBoxScalarResult->PerformLayout();
            this->groupBoxScalarB->ResumeLayout(false);
            this->groupBoxScalarB->PerformLayout();
            this->groupBoxScalarA->ResumeLayout(false);
            this->groupBoxScalarA->PerformLayout();
            this->tabPageVector->ResumeLayout(false);
            this->tabPageVector->PerformLayout();
            this->groupBoxVectorResult->ResumeLayout(false);
            this->groupBoxVectorResult->PerformLayout();
            this->groupBoxVectorB->ResumeLayout(false);
            this->groupBoxVectorB->PerformLayout();
            this->groupBoxVectorA->ResumeLayout(false);
            this->groupBoxVectorA->PerformLayout();
            this->tabPageMatrix->ResumeLayout(false);
            this->tabPageMatrix->PerformLayout();
            this->groupBoxMatrixResult->ResumeLayout(false);
            this->groupBoxMatrixResult->PerformLayout();
            this->groupBoxMatrixB->ResumeLayout(false);
            this->groupBoxMatrixB->PerformLayout();
            this->groupBoxMatrixA->ResumeLayout(false);
            this->groupBoxMatrixA->PerformLayout();
            this->tabPageAbout->ResumeLayout(false);
            this->tabPageAbout->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        void InitializeData() {
            scalarA = gcnew Scalar(0);	//инициализация объектов
            scalarB = gcnew Scalar(0);
            scalarResult = gcnew Scalar(0);

            vectorA = gcnew Vector(gcnew array<double>(0));
            vectorB = gcnew Vector(gcnew array<double>(0));
            vectorResult = gcnew Vector(gcnew array<double>(0));

            matrixA = gcnew Matrix(0, 0);
            matrixB = gcnew Matrix(0, 0);
            matrixResult = gcnew Matrix(0, 0);
        }

        //обработчики событий для скаляров
        void btnScalarMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                double a = ParseDouble(txtScalarA->Text);
                double b = ParseDouble(txtScalarB->Text);

                scalarA->SetValue(a);
                scalarB->SetValue(b);

                scalarResult = scalarA->Multiply(scalarB);
                txtScalarResult->Text = scalarResult->ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void btnScalarPower_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                double a = ParseDouble(txtScalarA->Text);
                double b = ParseDouble(txtScalarB->Text);

                scalarA->SetValue(a);
                scalarB->SetValue(b);

                scalarResult = scalarA->Power(scalarB);
                txtScalarResult->Text = scalarResult->ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        //обработчики событий для векторов
        void btnVectorMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                array<double>^ a = ParseArray(txtVectorA->Text);
                array<double>^ b = ParseArray(txtVectorB->Text);

                vectorA->SetData(a);
                vectorB->SetData(b);

                vectorResult = vectorA->ElementWiseMultiply(vectorB);
                txtVectorResult->Text = vectorResult->ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        //обработчики событий для матриц
        void btnMatrixElementWise_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                array<array<double>^>^ a = ParseMatrix(txtMatrixA->Text);
                array<array<double>^>^ b = ParseMatrix(txtMatrixB->Text);

                matrixA->SetData(a);
                matrixB->SetData(b);

                matrixResult = matrixA->ElementWiseMultiply(matrixB);
                txtMatrixResult->Text = matrixResult->ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void btnMatrixVectorMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                array<array<double>^>^ m = ParseMatrix(txtMatrixA->Text);
                array<double>^ v = ParseArray(txtMatrixB->Text);

                matrixA->SetData(m);
                vectorA->SetData(v);

                vectorResult = matrixA->MultiplyByVector(vectorA);
                txtMatrixResult->Text = vectorResult->ToString();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

		//парсинг
        double ParseDouble(String^ text) {		//вещественный тип данных	
            text = text->Trim();
            if (String::IsNullOrEmpty(text)) {
                throw gcnew ArgumentException("Пустое значение");
            }

            double result;
            if (!Double::TryParse(text->Replace(",", "."), System::Globalization::NumberStyles::Any,
                System::Globalization::CultureInfo::InvariantCulture, result)) {
                throw gcnew ArgumentException("Неверный формат числа");
            }
            return result;
        }

        array<double>^ ParseArray(String^ text) {	//массив
            text = text->Trim();
            if (String::IsNullOrEmpty(text)) {
                throw gcnew ArgumentException("Пустое значение");
            }

            String^ normalized = text->Replace(",", ".");
            array<String^>^ separators = gcnew array<String^> {" ", "\t" };
            array<String^>^ parts = normalized->Split(separators, StringSplitOptions::RemoveEmptyEntries);

            array<double>^ result = gcnew array<double>(parts->Length);

            for (int i = 0; i < parts->Length; i++) {
                if (!Double::TryParse(parts[i], System::Globalization::NumberStyles::Any,
                    System::Globalization::CultureInfo::InvariantCulture, result[i])) {
                    throw gcnew ArgumentException("Неверный формат числа в позиции " + (i + 1));
                }
            }

            return result;
        }

        array<array<double>^>^ ParseMatrix(String^ text) {	//матрицы
            text = text->Trim();
            if (String::IsNullOrEmpty(text)) {
                throw gcnew ArgumentException("Пустое значение");
            }

            array<String^>^ rows = text->Split(';');
            int rowCount = rows->Length;

            if (rowCount == 0) {
                throw gcnew ArgumentException("Матрица не содержит строк");
            }

            array<double>^ firstRow = ParseArray(rows[0]);
            int colCount = firstRow->Length;

            array<array<double>^>^ result = gcnew array<array<double>^>(rowCount);
            result[0] = firstRow;

            for (int i = 1; i < rowCount; i++) {
                array<double>^ row = ParseArray(rows[i]);
                if (row->Length != colCount) {
                    throw gcnew ArgumentException("Все строки матрицы должны иметь одинаковую длину");
                }
                result[i] = row;
            }

            return result;
        }
    };
}