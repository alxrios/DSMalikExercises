#include <iostream>
#include "dateType.h"

int main()
{
    dateType test(3, 18, 2017);
	// std::cout << "\nTesting number of days in month " << test.monthName() << ": " << test.monthDays();
	// std::cout << "\nTesting passed days in year: " << test.daysPassed();
	// test.daysPassed();
	// std::cout << "\nTesting remaining days in year: " << test.daysRemaining();
	test.calculateNewDate(765);
    return 0;
}
