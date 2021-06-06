#ifndef PASSWORD_HPP
#define PASSWORD_HPP

#include <string>

class Password
{
	public:
		Password(){};
		bool IsValidPassword();	
		std::string getPassword();
		bool setPassword();
	private:
		std::string password{};

};

#endif
