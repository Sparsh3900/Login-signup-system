#pragma once
#include "user.h";
#include "sendCode.h";


namespace Loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Web;
	using namespace System::Net;
	using namespace System::Runtime::InteropServices;
	using namespace System::Net;
	using System::Net::Sockets::NetworkStream;
	using System::Net::Sockets::TcpClient;
	using System::IO::StreamReader;


	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbemail;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ tbconfirm;

	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::Label^ label4;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::LinkLabel^ llForgetpassword;
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tbconfirm = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			llForgetpassword = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// llForgetpassword
			// 
			llForgetpassword->AutoSize = true;
			llForgetpassword->Cursor = System::Windows::Forms::Cursors::Hand;
			llForgetpassword->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			llForgetpassword->Location = System::Drawing::Point(688, 367);
			llForgetpassword->Name = L"llForgetpassword";
			llForgetpassword->Size = System::Drawing::Size(168, 23);
			llForgetpassword->TabIndex = 8;
			llForgetpassword->TabStop = true;
			llForgetpassword->Text = L"Forgot Password";
			llForgetpassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(882, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome Back !";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(306, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(311, 170);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(542, 54);
			this->tbemail->TabIndex = 2;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbemail_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(306, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(311, 305);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(542, 54);
			this->tbpassword->TabIndex = 4;
			// 
			// tbconfirm
			// 
			this->tbconfirm->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbconfirm->Location = System::Drawing::Point(311, 428);
			this->tbconfirm->Name = L"tbconfirm";
			this->tbconfirm->Size = System::Drawing::Size(542, 54);
			this->tbconfirm->TabIndex = 5;
			this->tbconfirm->Text = L"Login";
			this->tbconfirm->UseVisualStyleBackColor = true;
			this->tbconfirm->Click += gcnew System::EventHandler(this, &LoginForm::tbconfirm_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llRegister->Location = System::Drawing::Point(510, 553);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(160, 28);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register Now";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(428, 525);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(310, 28);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Don\'t have an account yet\?";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1183, 645);
			this->Controls->Add(this->label4);
			this->Controls->Add(llForgetpassword);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->tbconfirm);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void tbcancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;
	private: System::Void tbconfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbemail->Text;
		String^ password = this->tbpassword->Text;

		if (email->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter email or password", "Email or password empty", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\;Initial Catalog=Loginpage;Integrated Security=True";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlquery = "Select * FROM users WHERE email=@email AND Password=@pwd;";
			SqlCommand command(sqlquery, % sqlconn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email= reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				this->Close();
			}
			else
			{

				MessageBox::Show("email or password incorrect", "email or password error", MessageBoxButtons::OK);

			}
		 }
		catch(Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database connection error", MessageBoxButtons::OK);

		}
	}
	public: bool switchtoregister = false;
	public: bool switchtosendCode = false;
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->switchtoregister = true;
	this->Close();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtosendCode = true;
	this->Close();
	




}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
