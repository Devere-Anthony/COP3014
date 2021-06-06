/* ClassQuiz.hpp - Implementation of ClassQuiz
 *
 * Primary author: D'Anthony Weaver
 * Contributing authors: N/A
 * Last Modified: 16 MARCH 2021
 */

#ifndef CLASSQUIZ_HPP
#define CLASSQUIZ_HPP

#include <iostream>

class ClassQuiz
{
	public:
		ClassQuiz(){};
		ClassQuiz(int ns);
		void AcceptGrades();	
		double CalculateAverage();
		~ClassQuiz(){ delete[] grades;};
	private:
		int numStudents{};
		double *grades{nullptr};
};
#endif 
