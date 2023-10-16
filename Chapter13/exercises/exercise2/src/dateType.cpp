#include "dateType.h"
#include <iostream>


dateType::dateType(int month, int day, int year)
{
	//We asume that year must be >= 1900
    //ctor
	if (month < 1 | month > 12) {
		dMonth = 1;
	} else {
		dMonth = month;
	}
	if (day < 1 | day > 31) {
		dDay = 1;
	} else if ((dMonth == 4 | dMonth == 6 | dMonth == 9 | dMonth == 11) & (day > 30)){
		dDay = 1;
	} else if (!isLeapYear() & dMonth == 2 & day > 28) {
		dDay = 1;
	} else if (isLeapYear() & dMonth == 2 & day > 29) {
		dDay = 1;
	} else {
		dDay = day;
	}
	if (year < 1900 | year > 9999) {
		dYear = 1900;
	} else {
		dYear = year;
	}
}

dateType::~dateType()
{
    //dtor
}

void dateType::printDate() const {
	std::string result = "\n";
	if (dMonth < 10) {
		result.push_back('0');
		result.push_back(static_cast<char>(dMonth + 48));
	} else {
		result.push_back(static_cast<char>(dMonth/10 + 48));
		result.push_back(static_cast<char>(dMonth%10 + 48));
	}
	result.push_back('-');
	if (dDay < 10) {
		result.push_back('0');
		result.push_back(static_cast<char>(dDay + 48));
	} else {
		result.push_back(static_cast<char>(dDay/10 + 48));
		result.push_back(static_cast<char>(dDay%10) + 48);
	}
	result.push_back('-');
	int one, two;
	one = dYear/1000;
	two = dYear/100;
	result.push_back(static_cast<char>(one + 48));
	result.push_back(static_cast<char>((dYear - one*1000)/100 + 48));
	result.push_back(static_cast<char>((dYear - two*100)/10 + 48));
	result.push_back(static_cast<char>(dYear%10 + 48));
	std::cout << result;
}

bool dateType::isLeapYear() const{
	bool result = false;
	if (dYear % 4 == 0 & dYear % 100 != 0) {
		result = true;
	} else if ((dYear % 4) == 0 & (dYear % 100 == 0) & (dYear % 400 == 0)) {
		result = true;
	}
	return result;
}

/*
void dateType::checkLeapYear() {
	for (int i = 1990; i <= 2005; i++) {
		setYear(i);
		std::cout << "\nIs " << dYear << " Leap Year?: " << isLeapYear();
	}
}

void dateType::setYear(int year) {
	dYear = year;
}
*/

void dateType::setDate(int month, int day, int year) {
	if (month < 1 | month > 12) {
		// dMonth = dMonth;
	} else {
		dMonth = month;
	}
	if (day < 1 | day > 31) {
		// dDay = dDay;
	} else if ((dMonth == 4 | dMonth == 6 | dMonth == 9 | dMonth == 11) & (day > 30)){
		// dDay = dDay;
	} else if (!isLeapYear() & dMonth == 2 & day > 28) {
		// dDay = dDay;
	} else if (isLeapYear() & dMonth == 2 & day > 29) {
		// dDay = dDay;
	} else {
		dDay = day;
	}
	if (year < 1900 | year > 9999) {
		// dYear = dYear;
	} else {
		dYear = year;
	}
}

int dateType::getDay() const {
	return dDay;
}

int dateType::getMonth() const {
	return dMonth;
}

int dateType::getYear() const {
	return dYear;
}