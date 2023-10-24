#include "extDateType.h"
#include <iostream>

extDateType::extDateType(int month, int day, int year): dateType(month, day, year) {
    //ctor
}

extDateType::~extDateType() {
    //dtor
}

void extDateType::printMonth() const {
	std::cout << "\n" << strMonth << " " << getYear();
}

void extDateType::printDate2() const {
	std::cout << "\n" << strMonth << " " << getDay() << ", " << getYear();
}