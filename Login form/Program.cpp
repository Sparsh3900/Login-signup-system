#include "LoginForm.h"
#include "MainForm.h"
#include "RegistrationForm.h"
#include "SendCode.h"


using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	while (true)
	{
		Loginform::LoginForm loginForm;
		loginForm.ShowDialog();
		
		

		if (loginForm.switchtoregister)
		{
			Loginform::RegistrationForm registerForm;
			registerForm.ShowDialog();
			
			if (registerForm.switchToLogin)
			{
				continue;
			}


			else
			{
				user = loginForm.user;
				break;
			}
		}

		if (loginForm.switchtosendCode)
		{
			Loginform::SendCode sendCode;
			sendCode.ShowDialog();
			
		}
		
		
	}

	if (user!= nullptr)
	{
		
		MessageBox::Show("Authentication successful" + user->name, "Program.cpp", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Authentication failes", "Program.cpp", MessageBoxButtons::OK);

	}

	

}