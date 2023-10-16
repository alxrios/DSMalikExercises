#include "dateType.h"
#include <iostream>


int main()
{
    dateType test;
	test.printDate();
	// test.checkLeapYear();
	test.setDate(17, 8, 2005);
	test.printDate();
	test.setDate(24, 82, 1800);
	test.printDate();
	test.setDate(1, 5, 1999);
	test.printDate();
	std::cout << "\nDay: " << test.getDay();
	std::cout << "\nMonth: " << test.getMonth();
	std::cout << "\nYear: " << test.getYear();
	
    return 0;
}
