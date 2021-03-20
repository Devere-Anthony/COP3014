#include "Password.hpp"
#include <iostream>

int main()
{
	Password key;
	
	while(true)
	{
		if(key.setPassword() == true)
		{
			std::cout << "\nValid password.\nNew password set" << std::endl;
			break;
		}
		else
		{
			std::cout << "\nInvalid password! Try again."  
				  << "\nPassword must:\n*be at least 8 characters long"
				  << "\n*have at least one uppercase character"
				  << "\n*have at least one lowercase character"
				  << "\n*have at least one digit (1,2,3,etc...)"
				  << "\n*contain a special character (punctuation or spaces)\n"
				  << std::endl;
		}
	}

	return 0;
}
