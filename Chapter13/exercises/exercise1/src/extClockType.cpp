#include "extClockType.h"
#include <iostream>

extClockType::extClockType()
{
    //ctor
	tz = "UTC+/-00";
}

extClockType::~extClockType()
{
    //dtor
}

void extClockType::printTime() {
	clockType::printTime();
	std::cout << " " << tz;
}

void extClockType::setTime(int hours, int minutes, int seconds, std::string timeZone) {
	clockType::setTime(hours, minutes, seconds);
	tz = timeZone;
}

void extClockType::getTime(int& hours, int& minutes, int& seconds, std::string& timeZone) const {
	clockType::getTime(hours, minutes, seconds);
	timeZone = tz;
}

bool extClockType::equalTime(const extClockType& otherClock) const {
	bool result = false;
	int hrs, mins, secs, checkHours, checkMinutes, checkSeconds = 0;
	std::string checkTimeZone, timez = "";
	otherClock.getTime(checkHours, checkMinutes, checkSeconds, checkTimeZone);
	clockType::getTime(hrs, mins, secs);
	if (hrs == checkHours & mins == checkMinutes & secs == checkSeconds & tz == checkTimeZone){
		result = true;
	}
	return result;
}
