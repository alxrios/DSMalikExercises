#include "dateType.h"
#include <iostream>


dateType::dateType(int month, int day, int year)
{
	//We asume that year must be >= 1500
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
	if (year < 1500 | year > 9999) {
		dYear = 1500;
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

void dateType::setMonth(int mth) {
	//Only assign if value passed is coherent
	if (mth >= 1 & mth <= 12) {
		dMonth = mth;
	}
}

void dateType::setYear(int year) {
	if (year >= 1500 & year <= 9999) {
		dYear = year;
	}
}

void dateType::setDay(int day) {
	if (day < 1 | day > 31) {
		// dDay = 1;
	} else if ((dMonth == 4 | dMonth == 6 | dMonth == 9 | dMonth == 11) & (day > 30)){
		// dDay = 1;
	} else if (!isLeapYear() & dMonth == 2 & day > 28) {
		// dDay = 1;
	} else if (isLeapYear() & dMonth == 2 & day > 29) {
		// dDay = 1;
	} else {
		dDay = day;
	}
}

int dateType::monthDays() const {
	int result;
	switch(dMonth) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			result = 31;
			break;
		case 4: case 6: case 9: case 11:
			result = 30;
			break;
		case 2:
			if (!isLeapYear()) {
				result = 28;
			} else {
				result = 29;
			}
			break;
		default:
			result = 0;
	}
	return result;
}

std::string dateType::monthName() {
	std::string name;
	switch (dMonth) {
		case 1:
			name = "January";
			break;
		case 2:
			name = "February";
			break;
		case 3:
			name = "March";
			break;
		case 4:
			name = "April";
			break;
		case 5:
			name = "May";
			break;
		case 6:
			name = "June";
			break;
		case 7:
			name = "July";
			break;
		case 8:
			name = "August";
			break;
		case 9:
			name = "September";
			break;
		case 10:
			name = "October";
			break;
		case 11:
			name = "November";
			break;
		case 12:
			name = "December";
			break;
		default:
			name = "error";
	}
	return name;
}

int dateType::daysPassed() {
	int result = 0;
	for (int i = 1; i <= dMonth; i++) {
		if (i == dMonth) {
			result += dDay;
		} else {
			result += dateType(i, dDay, dYear).monthDays();
		}
	}
	return result;
}

int dateType::daysRemaining() {
	int result = 0;
	for (int i = dMonth; i <= 12; i++) {
		if (i == dMonth) {
			result += monthDays() - dDay;
		} else {
			result += dateType(i, dDay, dYear).monthDays();
		}
	}
	return result;
}

void dateType::calculateNewDate(int addDays) {
	dateType auxDate(dMonth, dDay, dYear); //We are going to use an auxiliar variable to not modify the original one
	while (addDays > 0) {
		if (auxDate.monthDays() >= auxDate.getDay() + addDays) {
			auxDate.setDay(auxDate.getDay() + addDays);
			addDays -= addDays;
		} else {
			addDays -= auxDate.monthDays() - auxDate.getDay() + 1;
			auxDate.setDay(1);
			if (auxDate.getMonth() + 1 > 12) {
				auxDate.setMonth(1);
			} else {
				auxDate.setMonth(auxDate.getMonth() + 1);
			}
		}
		if (auxDate.getMonth() == 12 & auxDate.getDay() + addDays > auxDate.monthDays()) {
			auxDate.setYear(auxDate.getYear() + 1);
		} 
	}
	auxDate.printDate();
}