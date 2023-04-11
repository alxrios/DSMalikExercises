#include "RomanType.h"
#include <iostream>
#include "Dictionary.h"

RomanType::RomanType() {
	romanNumber = "I";
	decimalForm = 1;
}

RomanType::RomanType(std::string inputRoman) {
	romanNumber = inputRoman;
	decimalForm = converToDecimal(inputRoman);
}


void RomanType::printRoman() {
	std::cout << romanNumber << "\n";
}


void RomanType::printDecimal() {
	std::cout << decimalForm << "\n";
}


void RomanType::setNewRoman(std::string newRoman) {
	romanNumber = newRoman;
	decimalForm = converToDecimal(newRoman);
}


int RomanType::converToDecimal(std::string romanNumber) {
	int decimalReturn = 0;
	int romanLength = romanNumber.length() - 1; // Because array begins at zero
	if (romanLength == 0) {
		decimalReturn = Dictionary::transform(romanNumber[0]);
	} else {
		decimalReturn += Dictionary::transform(romanNumber[romanLength]);
		for (int i = romanLength - 1; i >= 0; i--) {
			if (Dictionary::transform(romanNumber[i]) < Dictionary::transform(romanNumber[i + 1])) {
				decimalReturn -= Dictionary::transform(romanNumber[i]);
			} else {
				decimalReturn += Dictionary::transform(romanNumber[i]);
			}
		}
	}
	
	return(decimalReturn);
}
