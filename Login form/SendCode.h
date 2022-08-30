#pragma once
#include "LoginForm.h"
#include "RegistrationForm.h"
#ifndef SENDCODE_H_INCLUDED
#endif SENDCODE_H_INCLUDED
#define SENDCODE_H_INCLUDED
namespace Loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net;
	using namespace System::Runtime::InteropServices;
	using namespace System::Net::Mail;
	using System::Net::Sockets::NetworkStream;
	using System::Net::Sockets::TcpClient;
	using System::IO::StreamReader;

	/// <summary>
	/// Summary for SendCode
	/// </summary>
	public ref class SendCode : public System::Windows::Forms::Form
	{
		//To generate random code within range
		String^ randomCode;

		Random^ r = gcnew Random();
		int^ OTP = r->Next(1000, 9999);
	private: System::Windows::Forms::TextBox^ tbNewPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmNewPassword;
	private: System::Windows::Forms::Button^ btnCancel;
		   String^ username;//username in sendcode and reset page
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	public:static String^ to;
	public:
		SendCode(void)
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
		~SendCode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbmail;
	protected:

	private: System::Windows::Forms::Button^ btnSendCode;
	private: System::Windows::Forms::TextBox^ tbVerCode;
	private: System::Windows::Forms::Button^ btnVerCode;
	protected:

	protected:


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
			this->tbmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSendCode = (gcnew System::Windows::Forms::Button());
			this->tbVerCode = (gcnew System::Windows::Forms::TextBox());
			this->btnVerCode = (gcnew System::Windows::Forms::Button());
			this->tbNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbmail
			// 
			this->tbmail->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->tbmail->Location = System::Drawing::Point(312, 151);
			this->tbmail->Multiline = true;
			this->tbmail->Name = L"tbmail";
			this->tbmail->Size = System::Drawing::Size(544, 34);
			this->tbmail->TabIndex = 0;
			this->tbmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tbmail->TextChanged += gcnew System::EventHandler(this, &SendCode::textBox1_TextChanged);
			// 
			// btnSendCode
			// 
			this->btnSendCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSendCode->Location = System::Drawing::Point(524, 206);
			this->btnSendCode->Name = L"btnSendCode";
			this->btnSendCode->Size = System::Drawing::Size(129, 37);
			this->btnSendCode->TabIndex = 1;
			this->btnSendCode->Text = L"Send Code";
			this->btnSendCode->UseVisualStyleBackColor = true;
			this->btnSendCode->Click += gcnew System::EventHandler(this, &SendCode::btnSendCode_Click);
			// 
			// tbVerCode
			// 
			this->tbVerCode->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->tbVerCode->Location = System::Drawing::Point(310, 302);
			this->tbVerCode->Multiline = true;
			this->tbVerCode->Name = L"tbVerCode";
			this->tbVerCode->Size = System::Drawing::Size(544, 34);
			this->tbVerCode->TabIndex = 2;
			this->tbVerCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnVerCode
			// 
			this->btnVerCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerCode->Location = System::Drawing::Point(409, 544);
			this->btnVerCode->Name = L"btnVerCode";
			this->btnVerCode->Size = System::Drawing::Size(129, 37);
			this->btnVerCode->TabIndex = 3;
			this->btnVerCode->Text = L"Reset";
			this->btnVerCode->UseVisualStyleBackColor = true;
			this->btnVerCode->Click += gcnew System::EventHandler(this, &SendCode::btnVerCode_Click);
			// 
			// tbNewPassword
			// 
			this->tbNewPassword->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->tbNewPassword->Location = System::Drawing::Point(310, 392);
			this->tbNewPassword->Multiline = true;
			this->tbNewPassword->Name = L"tbNewPassword";
			this->tbNewPassword->Size = System::Drawing::Size(544, 42);
			this->tbNewPassword->TabIndex = 4;
			this->tbNewPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbConfirmNewPassword
			// 
			this->tbConfirmNewPassword->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->tbConfirmNewPassword->Location = System::Drawing::Point(310, 485);
			this->tbConfirmNewPassword->Multiline = true;
			this->tbConfirmNewPassword->Name = L"tbConfirmNewPassword";
			this->tbConfirmNewPassword->Size = System::Drawing::Size(544, 34);
			this->tbConfirmNewPassword->TabIndex = 5;
			this->tbConfirmNewPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(628, 544);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(129, 37);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &SendCode::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(421, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 54);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Reset Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(306, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 28);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &SendCode::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(305, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 28);
			this->label3->TabIndex = 9;
			this->label3->Text = L"New Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(305, 448);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(268, 28);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Confirm New Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(307, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 28);
			this->label5->TabIndex = 11;
			this->label5->Text = L"OTP";
			// 
			// SendCode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1187, 612);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbConfirmNewPassword);
			this->Controls->Add(this->tbNewPassword);
			this->Controls->Add(this->btnVerCode);
			this->Controls->Add(this->tbVerCode);
			this->Controls->Add(this->btnSendCode);
			this->Controls->Add(this->tbmail);
			this->Name = L"SendCode";
			this->Text = L"SendCode";
			this->Load += gcnew System::EventHandler(this, &SendCode::SendCode_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SendCode_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Send button Clicked 
	
private: System::Void btnSendCode_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ Myemailaddress = "thapasparsh30@gmail.com";
		String^ Mypassword = "kanchan@2001";
		String^ to;
		String^ from = "thapasparsh30@gmail.com";
		String^ Subject = "OTP to reset password";
		username = tbmail->Text;//Reading the username
		String^ msg = "Hi" + username + "," + "\n" + "Your OTP is" + OTP;//Message with OTP

		//code to search for mail id of the particular name
		String^ connString = "Data Source=localhost;Initial Catalog=Loginpage;Integrated Security=True";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlquery = "Select email FROM users WHERE Name=@username;";
		SqlCommand command(sqlquery, % sqlconn);
		command.Parameters->AddWithValue("@username", username);
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			to = reader->GetString(0);
			this->Close();
		}
		else
		{
			MessageBox::Show("Incorrect username", "Error in username", MessageBoxButtons::OK);
		}

		try
		{
			MailMessage^ mail = gcnew MailMessage(from, to, Subject, msg);//details for the mail
			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");//Connecting the domain
			client->Port = 587;//common port for all
			client->Credentials = gcnew System::Net::NetworkCredential(Myemailaddress, Mypassword);//Credentials of your email
			client->Send(mail);
			MessageBox::Show("OTP sent", "Success", MessageBoxButtons::OK);
		}
		catch(Exception^ ex)
		{

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error", "Error in send code", MessageBoxButtons::OK);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnVerCode_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (tbVerCode->Text == OTP->ToString())
		{
			if (tbNewPassword->Text == tbConfirmNewPassword->Text)
			{
				String^ password = tbConfirmNewPassword->Text;
				String^ connString = "Data Source=localhost;Initial Catalog=Loginpage;Integrated Security=True";
				SqlConnection sqlconn(connString);
				sqlconn.Open();

				String^ sqlquery = "update users set Password=@pass WHERE Name=@username;";
				SqlCommand command(sqlquery, % sqlconn);
				command.Parameters->AddWithValue("@pass", password);
				command.Parameters->AddWithValue("@username", username);
				MessageBox::Show("Password Reset Successful", "Password Changed", MessageBoxButtons::OK);
			}
			else
			{
				MessageBox::Show("Confirm Password do not match", "Password unmatched", MessageBoxButtons::OK);
			}
		}
		else
		{
			MessageBox::Show("OTP does not match", "OTP do not match", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ ex)
	{

	}
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
