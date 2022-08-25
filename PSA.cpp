#include <iostream>
#include <string>
#include <stdio.h>
#include <random>
#include <Windows.h>


std::string AnalysePassword(std::string InputPass)
{
	std::string PasswordStatus;

	if (InputPass.length() <= 10 && InputPass.find("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM") && !InputPass.find("~`!@#$%^&*()_+-={}[]:'/?.>") && !InputPass.find("1234567890"))
		PasswordStatus = "Weak";

	else if (!InputPass.find("~`!@#$%^&*()_+-={}[]:'/?.>") && InputPass.find("1234567890") && InputPass.find("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM") && InputPass.length() > 10)
		PasswordStatus = "Decent";

	else if (InputPass.find("~`!@#$%^&*()_+-={}[]:'/?.>") && InputPass.find("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM") && InputPass.find("1234567890") && InputPass.length() > 20)
		PasswordStatus = "Strong";

	else if (InputPass.find("~`!@#$%^&*()_+-={}[]:'/?.>") && InputPass.find("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM") && InputPass.find("1234567890") && InputPass.length() > 35)
		PasswordStatus = "Very Strong";

	else if (InputPass.find("~`!@#$%^&*()_+-={}[]:'/?.>") && InputPass.find("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM") && InputPass.find("1234567890") && InputPass.length() > 40)
		PasswordStatus = "Insane";

	return PasswordStatus;

}

int main()
{
	std::string InputPassword;

	std::cout << "Input a password - > ";
	std::cin >> InputPassword;

	std::string Result = AnalysePassword(InputPassword);

	std::cout << "Your password is - > " << Result << "\n";

    system("pause");

	return 0;
}
