#include "calendarType.h"
#include <iostream>
#include <iomanip>

calendarType::calendarType(int month, int year) {
    //ctor
	date.setMonth(month);
	date.setYear(year);
}

calendarType::~calendarType() {
    //dtor
}

void calendarType::setFirstDay(std::string fday) {
	firstDay.setDay(fday);
}

void calendarType::setMonth(int mth) {
	date.setMonth(mth);
}

void calendarType::setYear(int yr) {
	date.setYear(yr);
}

std::string calendarType::firstDayOfMonth() {
	std::string resultDay = "";
	int daysToSum = 0;
	for (int i = 1500; i <= date.getYear(); i++) { //date is an elment of extDateType
		if (i != date.getYear()) {
			for (int j = 1; j <= 12; j++) {
				daysToSum += dateType(j, 1, i).monthDays();
			}
		} else {
			for (int j = 1; j < date.getMonth(); j++) {
				daysToSum += dateType(j, 1, i).monthDays();
			}
		}
	}
	resultDay = firstDay.getNthDay(daysToSum);
	return resultDay;
}

void calendarType::printCalendar() {
	std::cout << "\t" << date.monthName() << " " << date.getYear() << "\n";
	dayType auxDay("Sun"); //Auxiliar variable for printing the first row with the days names
	std::cout << auxDay.getDay();
	for (int i = 1; i < 7; i++) {
		std::cout << "  " << auxDay.getNthDay(i);
	}
	int countDay = 1;
	if (numOfSpaces(firstDayOfMonth()) > 0) {
		std::cout << "\n";
		std::cout << std::setw(3) << " ";
		for (int i = 2; i <= numOfSpaces(firstDayOfMonth()); i++) {
			std::cout << std::setw(5) << " ";
		}
		//First line
		for (int i = numOfSpaces(firstDayOfMonth()) + 1; i <= 7; i++) {
			std::cout << std::setw(5) << countDay;
			countDay++;
		}
	} else {
		std::cout << "";
	}
	//Rest of the lines
	while (countDay <= date.monthDays()) {
		if (countDay > 9) {
			std::cout << "\n" << std::setw(3) << countDay;
			countDay++;
			for (int i = 1; i < 7; i++) {
				if (countDay > date.monthDays()) {
					break;
				}
				std::cout << std::setw(5) << countDay;
				countDay++;
			}
		} else {
			std::cout << "\n" << std::setw(3) << countDay;
			countDay++;
			for (int i = 1; i < 7; i++) {
				std::cout << std::setw(5) << countDay;
				countDay++;
			}
		}
	}
}

int calendarType::numOfSpaces(std::string firstDayName) {
	int spaces = 0;
	if (firstDayName == "Mon") {
		spaces = 1;
	} else if (firstDayName == "Tue") {
		spaces = 2;
	} else if (firstDayName == "Wed") {
		spaces = 3;
	} else if (firstDayName == "Thu") {
		spaces = 4;
	} else if (firstDayName == "Fri") {
		spaces = 5;
	} else if (firstDayName == "Sat") {
		spaces = 6;
	}
	return spaces;
}

void calendarType::printWholeCalendar() {
	for (int i = 1; i <= 12; i++) {
		setMonth(i);
		std::cout << "\n\n";
		printCalendar();
	}
}
