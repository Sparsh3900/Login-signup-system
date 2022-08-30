#pragma once
#include "User.h"
namespace Loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;


	private: System::Windows::Forms::LinkLabel^ llLogin;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1170, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Now!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(348, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &RegistrationForm::label2_Click);
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(351, 115);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(510, 34);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(346, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &RegistrationForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(386, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 34);
			this->label4->TabIndex = 4;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(351, 196);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(510, 34);
			this->tbEmail->TabIndex = 5;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &RegistrationForm::tbEmail_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(346, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 28);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Phone";
			this->label5->Click += gcnew System::EventHandler(this, &RegistrationForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(345, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 28);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Address";
			this->label6->Click += gcnew System::EventHandler(this, &RegistrationForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(345, 406);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 28);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegistrationForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(345, 487);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 28);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Confirm Password";
			this->label8->Click += gcnew System::EventHandler(this, &RegistrationForm::label8_Click);
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPhone->Location = System::Drawing::Point(351, 274);
			this->tbPhone->Multiline = true;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(510, 34);
			this->tbPhone->TabIndex = 10;
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAddress->Location = System::Drawing::Point(351, 356);
			this->tbAddress->Multiline = true;
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(510, 34);
			this->tbAddress->TabIndex = 11;
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(351, 437);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(510, 34);
			this->tbPassword->TabIndex = 12;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(351, 518);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(510, 34);
			this->tbConfirmPassword->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(351, 585);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(510, 41);
			this->btnOK->TabIndex = 14;
			this->btnOK->Text = L"Register";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegistrationForm::btnOK_Click);
			// 
			// llLogin
			// 
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(793, 633);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(68, 22);
			this->llLogin->TabIndex = 16;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::llLogin_LinkClicked);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1170, 666);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->Load += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogin = true;
		this->Close();
	}
	public: User^ user= nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmpassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0 || confirmpassword->Length == 0)
		{
			MessageBox::Show("Please enter all field", "one or more field empty", MessageBoxButtons::OK);

		}

		if (password != confirmpassword)
		{
			MessageBox::Show("Password and ConfirmPassword do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost//Initial Catalog=Loginpage;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO user" + "(name, email, phone, address, password) VALUES" +
				"(@name, @email, @phone,@address,@password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();

			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("failed to register new user", "Failed to register", MessageBoxButtons::OK);
		}

	}
	private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
