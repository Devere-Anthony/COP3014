/* ClassQuiz.cpp - Implementation of ClassQuiz functions
 *
 * Primary author: D'Anthony Weaver
 * Contributing authors: N/A
 * Last Modified: 16 MARCH 2021
 */

#include "ClassQuiz.hpp"

ClassQuiz::ClassQuiz(int ns)
{
	/* Accepts number of students and creates an array with 
	 * size = numStudents
	 */
	numStudents = ns; 

	grades = new double[ns]; // allocate array in free store
};

void ClassQuiz::AcceptGrades()
{
	/* AcceptGrades() - Accepts grades from end user and stores them 
	 * in the grades array.
	 */
	for(size_t i{}; i < numStudents; ++i)
	{
		std::cout << "Enter grade for student "
			  << i+1 << ": ";
		std::cin >> *(grades+i);	
	}		
};

double ClassQuiz::CalculateAverage()
{
	/* CalculateAverage() - Calculates and returns the average quiz 
	 * grade of the class.
	 */
	double average{}, total{};

	if (numStudents == 0)	// instance with default constructor
		return 0;
	else
	{
		for(size_t i{}; i < numStudents; ++i)
			total += *(grades + i);	

		average = total / numStudents;
		return average;
	}
};
