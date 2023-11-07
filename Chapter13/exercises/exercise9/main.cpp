#include <iostream>
#include "calendarType.h"

int main()
{
	/*
	dayType test("Wed");
	std::cout << "\nCurrent day: ";
	test.printDay();
	std::cout << "\nNext day: " << test.getNextDay();
	std::cout << "\nPrevious day: " << test.getPreviousDay();
	std::cout << "\nAdd three days: " << test.getNthDay(13);
	*/
	calendarType test(9, 1988);
	// test.printCalendar();
	test.printWholeCalendar();

    return 0;
}
