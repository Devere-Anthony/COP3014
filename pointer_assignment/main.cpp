#include <iostream>
#include "ClassQuiz.hpp"

int main()
{
	int val{};

	std::cout << "How many students are in the class?\n> ";
	std::cin >> val;

	ClassQuiz quiz2{val};
	std::cout << std::endl;
	quiz2.AcceptGrades();
	std::cout << "Average: " << quiz2.CalculateAverage() << std::endl;


	return 0;
}
