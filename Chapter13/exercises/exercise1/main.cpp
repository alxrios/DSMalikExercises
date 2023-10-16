#include <iostream>
#include "clockType.h"
#include "extClockType.h"

int main()
{

	/*
	extClockType test;
	test.printTime();
	test.setTime(7, 8, 9, "UTC+02");
	test.printTime();
	extClockType test2;
	test2.printTime();
	test2.setTime(7, 3, 3, "UTC+01");
	test2.printTime();
	std::cout << test.equalTime(test2);
	test2.setTime(7, 8, 9, "UTC+02");
	std::cout << test.equalTime(test2);
	std::cout << "This is a test\n";
	*/
	
	//Test clockOne
	std::cout << "Testing clockType class...\n";
	clockType clockOne;
	std::cout << "\nInitial time of clock one:";
	clockOne.printTime();
	clockOne.setTime(14, 59, 0);
	std::cout << "\nTime of clock one:";
	clockOne.printTime();
	std::cout << "\nTime of clock two:";
	clockType clockTwo;
	clockTwo.setTime(14, 59, 1);
	clockTwo.printTime();
	std::cout << "\nAre both clocks equal?: " << clockOne.equalTime(clockTwo);
	clockOne.setTime(15, 32, 14);
	std::cout << "\nNew time of clock one:";
	clockOne.printTime();
	clockTwo.setTime(15, 32, 14);
	std::cout << "\nNew time of clock two:";
	clockTwo.printTime();
	std::cout << "\nAre both clocks equal now?: " << clockOne.equalTime(clockTwo);
	
	//Test clockTwo
	std::cout << "\n\nTesting extClockType class...\n";
	extClockType clockThree;
	std::cout << "\nInitial time of clock three:";
	clockThree.printTime();
	clockThree.setTime(16, 14, 0, "UTC+01");
	std::cout << "\nTime of clock three:";
	clockThree.printTime();
	extClockType clockFour;
	clockFour.setTime(16, 14, 0, "UTC+05");
	std::cout << "\nTime of clock four:";
	clockFour.printTime();
	std::cout << "\nAre both clocks equal?: " << clockThree.equalTime(clockFour);
	std::cout << "\nNew time of clock four:";
	clockFour.setTime(16, 14, 0, "UTC+01");
	clockFour.printTime();
	std::cout << "\nAre both clocks equal now?: " << clockThree.equalTime(clockFour);
	
    return 0;
}
