#include <iostream>

int main()
{
	bool bSunnyDay, bCarIsReady, bSalaryDeposited, bAccess;
	std::string Password = "cplusplus";
	std::string TypedPassword;

	// This code is a login - you need to type the right password to use the application, otherwise it will quit it.
	std::cout << "Type the password: ";
	std::cin >> TypedPassword;
	if (TypedPassword == Password) // This is the case where the comparassion results positive, so the code will go to the next part.
	{
		std::cout << "\nAccess granted!" << "\n";
		bAccess = true;
	}
	else // In case of a wrong type password, the code will quit.
	{
		std::cout << "\n Access denied!" << "\n";
		system("PAUSE");
		exit(0);
	}

	//bSunnyDay = bCarIsReady = bSalaryDeposited = true; We may set the value to a lot of variables this way.
	bSunnyDay = bSalaryDeposited = false;
	bCarIsReady = false;
	if (bAccess) // We only need the boolean variable name to test it in C++. It will only run the code if its true.
	{
		//if (bSunnyDay && bCarIsReady && bSalaryDeposited) The only way this expression will be true is if every part of it also is.
		if (bSunnyDay || bCarIsReady || bSalaryDeposited) //This expression can only be false if all parts of it are false.
		{
			std::cout << "We will go to the beach because the car is ready, the salary is deposited and it is a sunny day!" << "\n";
		}
		else if (!bSalaryDeposited) // This elseif will only run if the OR expression is false. It checks if SalaryDeposited is false.
		{
			std::cout << "We can't go to the beach and the salary wasn't deposited!" << "\n";
		}
	}
}