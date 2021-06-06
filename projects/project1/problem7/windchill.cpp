/* COP3014 Project 1 - Exercise 7
 * Create a C++ program that uses National Weather Services's formula 
 * to find the wind chill outside based on a users input.
 *
 * By: D'Anthony Weaver 😎🔥
 * Other contributors: N/A
 * Last Modified: 6 FEB 2021
 */

#include <iostream>
#include <math.h>

//==========================================================
// Function Prototype(s)
//==========================================================
void calculateWindChill(double, double);


//==========================================================
// Main
//==========================================================
int main()
{
	double temp{}, windSpeed{};
	bool flag{true};
	
	while (flag)
	{
	    std::cout << "Enter a temperature\n> ";
	    std::cin >>  temp;

	    std::cout << "Enter wind speed\n> ";
	    std::cin >> windSpeed;

	    // Verify inputs
	    if ((temp > -55 && temp < 41) && windSpeed >= 2)
	    {
	        calculateWindChill(temp, windSpeed);
	    	break;
	    }
	    else
	        std::cout << "Value out of range, try again.\n"
			<< std::endl;
	}	
	return 0;
}


//==========================================================
// Function Definition(s)
//==========================================================
void calculateWindChill(double temperature, double windVelocity)
{
	/* calculateWindChill() -> calculates outside wind chill given 
	 * the outside temperature and wind speed.
	 * Args:
	 * 	- temperature -> double, temperature in degrees Fahrenheit
	 * 	- windVelocity -> double, wind speed in miles per hour
	 */
	double v = pow(windVelocity, 0.16);
	double windChill{(35.74)+(0.6215 * temperature) - (35.75 * v)+ (0.4275 * temperature * v)};
	std::cout << "Approximate Wind Chill: " << windChill << std::endl; 
	// decimal precision wasn't specified in specs, just left it up to function 
}
