#include "dayType.h"
#include <iostream>

dayType::dayType(std::string tag) {
    //ctor
	pos = dayToPos(tag);
}

dayType::~dayType() {
    //dtor
}


void dayType::setDay(std::string tag) {
	pos = dayToPos(tag);
}

void dayType::printDay() const {
	std::cout << days[pos];
}

std::string dayType::getDay() {
	return days[pos];
}

std::string dayType::getNextDay() {
	int result = pos;
	if (pos == 6) {
		result = 0;
	} else {
		result++;
	}
	return days[result];
}

std::string dayType::getPreviousDay() {
	int result = pos;
	if (pos == 0) {
		result = 6;
	} else {
		result--;
	}
	return days[result];
}

std::string dayType::getNthDay(int add) {
	int result = pos;
	if (pos + add <= 6) {
		result += add;
	} else {
		while (pos + add > 6) {
			add -= 7;
		}
		result += add;
	}
	return days[result];
}

int dayType::dayToPos(std::string tag) {
	int result = -1;
	for (int i = 0; i < 7; i++) {
		if (days[i] == tag) {
			result = i;
			break;
		}
	}
	return result;
}