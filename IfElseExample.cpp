#include <iostream>
#include <string>

int main()
{
	bool bSunnyDay, bCarIsReady, bSalaryDeposited, bAccess;
	std::string Password = "cplusplus";
	std::string TypedPassword;

	// This code is a login - you need to type the right password to use the application, otherwilse it will quit it.
	std::cout << "Type the password: ";
	std::cin >> TypedPassword;
	if (TypedPassword == Password) // This is the case where the comparassion results positive, so the code will go to the next part.
	{
		std::cout << "\nAccess granted!" << "\n";
		bAccess = true;
		system("PAUSE");
	}
	else // In case of a wrong type password, the code will quit.
	{
		std::cout << "\n Access denied!" << "\n";
		system("PAUSE");
		exit(0);
	}
}