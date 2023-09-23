#pragma once

namespace calculator {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button_slojenie;
    private: System::Windows::Forms::Button^ button_vichitanie;
    private: System::Windows::Forms::Button^ button_umnojenie;
    private: System::Windows::Forms::Button^ button_delenie;
    private: System::Windows::Forms::Button^ button_otvet;
    private: System::Windows::Forms::Label^ result_label;
    private: System::Windows::Forms::Button^ button_clear;

    private: int first_num;
    private: char user_action = ' ';
    private: bool is_equal = false;
    

    protected:

    private:
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button_slojenie = (gcnew System::Windows::Forms::Button());
            this->button_vichitanie = (gcnew System::Windows::Forms::Button());
            this->button_umnojenie = (gcnew System::Windows::Forms::Button());
            this->button_delenie = (gcnew System::Windows::Forms::Button());
            this->button_otvet = (gcnew System::Windows::Forms::Button());
            this->result_label = (gcnew System::Windows::Forms::Label());
            this->button_clear = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            

            this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(43, 218);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(108, 65);
            this->button1->TabIndex = 0;
            this->button1->Text = L"1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(175, 218);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(108, 65);
            this->button2->TabIndex = 1;
            this->button2->Text = L"2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(311, 218);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(108, 65);
            this->button3->TabIndex = 2;
            this->button3->Text = L"3";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(311, 312);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(108, 65);
            this->button4->TabIndex = 3;
            this->button4->Text = L"6";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(43, 312);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(108, 65);
            this->button5->TabIndex = 3;
            this->button5->Text = L"4";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(175, 312);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(108, 65);
            this->button6->TabIndex = 4;
            this->button6->Text = L"5";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(43, 408);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(108, 65);
            this->button7->TabIndex = 5;
            this->button7->Text = L"7";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(175, 408);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(108, 65);
            this->button8->TabIndex = 6;
            this->button8->Text = L"8";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(311, 408);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(108, 65);
            this->button9->TabIndex = 7;
            this->button9->Text = L"9";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(175, 504);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(108, 65);
            this->button10->TabIndex = 8;
            this->button10->Text = L"0";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
            

            this->button_slojenie->BackColor = System::Drawing::Color::Bisque;
            this->button_slojenie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_slojenie->Location = System::Drawing::Point(43, 504);
            this->button_slojenie->Name = L"button_slojenie";
            this->button_slojenie->Size = System::Drawing::Size(108, 65);
            this->button_slojenie->TabIndex = 9;
            this->button_slojenie->Text = L"+";
            this->button_slojenie->UseVisualStyleBackColor = false;
            this->button_slojenie->Click += gcnew System::EventHandler(this, &MyForm::button_slojenie_Click);
            

            this->button_vichitanie->BackColor = System::Drawing::Color::Bisque;
            this->button_vichitanie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_vichitanie->Location = System::Drawing::Point(311, 504);
            this->button_vichitanie->Name = L"button_vichitanie";
            this->button_vichitanie->Size = System::Drawing::Size(108, 65);
            this->button_vichitanie->TabIndex = 10;
            this->button_vichitanie->Text = L"-";
            this->button_vichitanie->UseVisualStyleBackColor = false;
            this->button_vichitanie->Click += gcnew System::EventHandler(this, &MyForm::button_vichitanie_Click);
         

            this->button_umnojenie->BackColor = System::Drawing::Color::Bisque;
            this->button_umnojenie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_umnojenie->Location = System::Drawing::Point(43, 600);
            this->button_umnojenie->Name = L"button_umnojenie";
            this->button_umnojenie->Size = System::Drawing::Size(108, 65);
            this->button_umnojenie->TabIndex = 11;
            this->button_umnojenie->Text = L"*";
            this->button_umnojenie->UseVisualStyleBackColor = false;
            this->button_umnojenie->Click += gcnew System::EventHandler(this, &MyForm::button_umnojenie_Click);
            

            this->button_delenie->BackColor = System::Drawing::Color::Bisque;
            this->button_delenie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_delenie->Location = System::Drawing::Point(175, 600);
            this->button_delenie->Name = L"button_delenie";
            this->button_delenie->Size = System::Drawing::Size(108, 65);
            this->button_delenie->TabIndex = 12;
            this->button_delenie->Text = L"/";
            this->button_delenie->UseVisualStyleBackColor = false;
            this->button_delenie->Click += gcnew System::EventHandler(this, &MyForm::button_delenie_Click);
            

            this->button_otvet->BackColor = System::Drawing::Color::Chartreuse;
            this->button_otvet->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_otvet->Location = System::Drawing::Point(311, 600);
            this->button_otvet->Name = L"button_otvet";
            this->button_otvet->Size = System::Drawing::Size(108, 65);
            this->button_otvet->TabIndex = 13;
            this->button_otvet->Text = L"=";
            this->button_otvet->UseVisualStyleBackColor = false;
            this->button_otvet->Click += gcnew System::EventHandler(this, &MyForm::button_otvet_Click);
            

            this->result_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->result_label->Location = System::Drawing::Point(44, 108);
            this->result_label->Name = L"result_lable";
            this->result_label->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->result_label->Size = System::Drawing::Size(390, 85);
            this->result_label->TabIndex = 14;
            this->result_label->Text = L"0";
            

            this->button_clear->BackColor = System::Drawing::Color::Coral;
            this->button_clear->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_clear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button_clear->Location = System::Drawing::Point(43, 697);
            this->button_clear->Name = L"button_clear";
            this->button_clear->Size = System::Drawing::Size(376, 42);
            this->button_clear->TabIndex = 15;
            this->button_clear->Text = L"Сбросить";
            this->button_clear->UseVisualStyleBackColor = false;
            this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
           

            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Window;
            this->ClientSize = System::Drawing::Size(466, 762);
            this->Controls->Add(this->button_clear);
            this->Controls->Add(this->result_label);
            this->Controls->Add(this->button_otvet);
            this->Controls->Add(this->button_delenie);
            this->Controls->Add(this->button_umnojenie);
            this->Controls->Add(this->button_vichitanie);
            this->Controls->Add(this->button_slojenie);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->Text = L"Калькулятор";
            this->ResumeLayout(false);
        }
    private:
        System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
            if (result_label->Text == "0" || is_equal) {
                result_label->Text = "";
                is_equal = false;
            }

            Button^ button = safe_cast<Button^>(sender);
            result_label->Text += button->Text;
        }

        System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
            result_label->Text = "0";
            first_num = 0;
            user_action = ' ';
            is_equal = false;
        }

        System::Void button_slojenie_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!is_equal) {
                first_num = Int32::Parse(result_label->Text);
                user_action = '+';
                result_label->Text = "0";
            }
        }

        System::Void button_vichitanie_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!is_equal) {
                first_num = Int32::Parse(result_label->Text);
                user_action = '-';
                result_label->Text = "0";
            }
        }

        System::Void button_umnojenie_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!is_equal) {
                first_num = Int32::Parse(result_label->Text);
                user_action = '*';
                result_label->Text = "0";
            }
        }

        System::Void button_delenie_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!is_equal) {
                first_num = Int32::Parse(result_label->Text);
                user_action = '/';
                result_label->Text = "0";
            }
        }

        System::Void button_otvet_Click(System::Object^ sender, System::EventArgs^ e) {
            int second_num = Int32::Parse(result_label->Text);
            int result = 0;

            switch (user_action) {
            case '+':
                result = first_num + second_num;
                break;
            case '-':
                result = first_num - second_num;
                break;
            case '*':
                result = first_num * second_num;
                break;
            case '/':
                if (second_num != 0)
                    result = first_num / second_num;
                else
                    result_label->Text = "Ошибка";
                break;
            }

            result_label->Text = result.ToString();
            is_equal = true;
        }
    };
}
