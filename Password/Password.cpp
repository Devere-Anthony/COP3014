#include <iostream>
#include <cctype>
#include "Password.hpp"

bool Password::IsValidPassword()
{
	/* Check to see if password data is valid.
	 * 1) at least 8 characters long
	 * 2) has at least one uppercase letter
	 * 3) has at least one lower case letter
	 * 4) has at least one digit
	 * 5) has at least one special character (other than the above cats) 
	 */

	// Must pass all for flag to remain true
	bool flag{false};
	bool length{false};
	bool upper{false};
	bool lower{false};
	bool digit{false};
	bool special{false};

	// Test if it has at least 8 characters
	if(password.length() >= 8)
	{
		length = true;
	}

	// Test if password has at least one digit
	for(size_t i{}; i < password.length(); ++i)
	{	
		if(isdigit(password[i]))
			digit = true;
		if(isupper(password[i]))
			upper = true;
		if(islower(password[i]))
			lower = true;
		if(isspace(password[i]) || ispunct(password[i]) ||
			   isblank(password[i]))
			special = true;
	}	

	// Set flag
	if(length && digit && upper && lower && special)
		flag = true;

	return flag;
};

// TO DO: Possible write overloaded function that will check if a given password is valid

std::string Password::getPassword()
{
	return password;
};

bool Password::setPassword()
{
	std::cout << "Enter a new password: " << std::endl;
	std::cin >> password;

	// Make a call to IsValidPassword() to make sure user doesn't
	// enter in an invalid password
	bool test = Password::IsValidPassword();
	return test;
};
