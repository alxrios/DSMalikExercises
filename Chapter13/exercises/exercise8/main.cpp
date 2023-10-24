#include <iostream>
// #include "dateType.h"
#include "extDateType.h"

int main()
{
    // dateType test(5, 25, 2017);
	// test.printDate();
	extDateType testDate(3, 25, 2017);
	testDate.printDate();
	testDate.printMonth();
	testDate.printDate2();
    return 0;
}
