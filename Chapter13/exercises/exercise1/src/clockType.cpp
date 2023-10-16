#include "clockType.h"
#include <iostream>


clockType::clockType() {
	hr = min = sec = 0;
    //ctor
}

clockType::~clockType() {
    //dtor
}

void clockType::setTime(int hours, int minutes, int seconds) {
	if ((hours < 0) | (hours > 23)) {
		hr = 0;
	} else {
		hr = hours;
	}

	if (minutes < 0 | minutes > 59) {
		min = 0;
	} else {
		min = minutes;
	}

	if (seconds < 0 | seconds > 59) {
		sec = 0;
	} else {
		sec = seconds;
	}
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const {
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clockType::printTime() const {
	std::string result = "\n";
	if (hr <= 9) {
		result.append("0");
		result.push_back(static_cast<char>(hr + 48));
	} else {
		result.append(std::to_string(hr));
	}
	result.append("::");

	if (min <= 9) {
		result.append("0");
		result.push_back(static_cast<char>(min + 48));
	} else {
		result.append(std::to_string(min));
	}
	result.append("::");

	if (sec <= 9) {
		result.append("0");
		result.push_back(static_cast<char>(sec + 48));
	} else {
		result.append(std::to_string(sec));
	}

	std::cout << result;
}

void clockType::incrementSeconds() {
	if (sec + 1 > 59) {
		sec = 0;
		incrementMinutes();
	} else {
		sec += 1;
	}
}

void clockType::incrementMinutes() {
	if (min + 1 > 59) {
		min = 0;
		incrementHours();
	} else {
		min += 1;
	}
}

void clockType::incrementHours() {
	if (hr + 1 > 23) {
		hr = 0;
	} else {
		hr += 1;
	}
}

bool clockType::equalTime(const clockType& otherClock) const{
	bool result = false;
	int checkHours, checkMinutes, checkSeconds = 0;
	otherClock.getTime(checkHours, checkMinutes, checkSeconds);
	if (hr == checkHours & min == checkMinutes & sec == checkSeconds) {
		result = true;
	}

	return result;
}
