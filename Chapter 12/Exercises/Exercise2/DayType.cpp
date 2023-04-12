#include "DayType.h"
#include <iostream>

DayType::DayType() {
	currentDay = 0;
		// Monday by default if nothing else is specified
}

int DayType::strToIndex(std::string day) {
	int index = 0;
	
	if (day == "Tue") {
		index = 1;
	} else if (day == "Wed") {
		index = 2;
	} else if (day == "Thu") {
		index = 3;
	} else if (day == "Fri") {
		index = 4;
	} else if (day == "Sat") {
		index = 5;
	} else if (day == "Sun") {
		index = 6;
	}
	
	return(index);
}

DayType::DayType(std::string day) {
	currentDay = strToIndex(day);
}

void DayType::setDay(std::string newDay) {
	currentDay = strToIndex(newDay);
}

void DayType::printDay() {
	std::cout << "Current day: " << returnDay() << "\n";
}

std::string DayType::returnDay() {
	return(daysOfWeek[currentDay]);
}

std::string DayType::returnNextDay() {
	int nextIndex = currentDay + 1;
	
	if (nextIndex == 7) {
		nextIndex = 0;
	}
	return(daysOfWeek[nextIndex]);
}

std::string DayType::returnPreviousDay() {
	int prevIndex = currentDay - 1;
	if (prevIndex == -1) {
		prevIndex = 6;
	}
	return(daysOfWeek[prevIndex]);
}

void DayType::printNextDay() {
	std::cout << "Next day: " << returnNextDay() << "\n";
}

void DayType::printPreviousDay() {
	std::cout << "Previous day: " << returnPreviousDay() << "\n";
}

std::string DayType::returnNthDay(int nday) {
	if (nday > 7) {
		nday = nday - 7*(nday/7);
	}
	
	int sum = currentDay + nday;
	
	if (sum > 6) {
		nday = sum - 7;
	} else {
		nday = sum; 
	}
	
	return(daysOfWeek[nday]);
}

void DayType::printNthDay(int nthDay) {
	std::cout << "The " << nthDay << "th next day is: " << returnNthDay(nthDay) << "\n";
}