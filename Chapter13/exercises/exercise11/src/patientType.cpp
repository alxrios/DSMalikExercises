#include "patientType.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

patientType::patientType(std::string fname, std::string lname, int age1): personType(fname, lname) {
    //ctor
	if (age > 0) {
		age = age1;
	}
	patientID = generateID();
}

patientType::~patientType() {
    //dtor
}

void patientType::setBirth(int mth, int dy, int yr) {
	dateOfBirth.setDate(mth, dy, yr);
}

void patientType::setDateAdmitted(int mth, int dy, int yr) {
	dateOfAdmission.setDate(mth, dy, yr);
}

void patientType::setDateDischarged(int mth, int dy, int yr) {
	dateOfDisch.setDate(mth, dy, yr);
}

void patientType::setPhysicianData(std::string fname, std::string lname, std::string spec) {
	physiciansName.setFirstName(fname);
	physiciansName.setLastName(lname);
	physiciansName.setSpeciality(spec);
}

int patientType::getAge() const {
	return age;
}

std::string patientType::formatDate(dateType date) const {
	std::string result;
	if (date.getMonth() < 10) {
		result.push_back('0');
		result.push_back(static_cast<char>(date.getMonth() + 48));
	} else {
		result.push_back(static_cast<char>(date.getMonth()/10 + 48));
		result.push_back(static_cast<char>(date.getMonth()%10 + 48));
	}
	result.push_back('-');
	if (date.getDay() < 10) {
		result.push_back('0');
		result.push_back(static_cast<char>(date.getDay() + 48));
	} else {
		result.push_back(static_cast<char>(date.getDay()/10 + 48));
		result.push_back(static_cast<char>(date.getDay()%10) + 48);
	}
	result.push_back('-');
	int one, two;
	one = date.getYear()/1000;
	two = date.getYear()/100;
	result.push_back(static_cast<char>(one + 48));
	result.push_back(static_cast<char>((date.getYear() - one*1000)/100 + 48));
	result.push_back(static_cast<char>((date.getYear() - two*100)/10 + 48));
	result.push_back(static_cast<char>(date.getYear()%10 + 48));
	return result;
}

std::string patientType::getBirthDate() const {
	return formatDate(dateOfBirth);
}

std::string patientType::getAdmissionDate() const {
	return formatDate(dateOfAdmission);
}

std::string patientType::getDischDate() const {
	return formatDate(dateOfDisch);
}

std::string patientType::getPhysiciansData() const {
	std::string resultStr = "Dr. ";
	resultStr.append(physiciansName.getFirstName());
	resultStr.append(" ");
	resultStr.append(physiciansName.getLastName());
	resultStr.append(", ");
	resultStr.append(physiciansName.getSpeciality());
	return resultStr;
}

std::string patientType::getPatientsID() const {
	return patientID;
}

void patientType::printPatientsData() const {
	std::cout << "\nPatient's name: " << personType::getFirstName() << " " << personType::getLastName();
	std::cout << "\nPatient's ID: " << getPatientsID();
	std::cout << "\nDate of birth: " << getBirthDate();
	std::cout << "\nDate of admission: " << getAdmissionDate();
	std::cout << "\nDate of dischargement: " << getDischDate();
	std::cout << "\nPhysician: " << getPhysiciansData();
}

std::string patientType::generateID() const {
	std::string result;
	srand(time(NULL));
	int digit;
	for (int i = 0; i < 4; i++) {
		digit = rand() % 10;
		result.push_back(static_cast<char>(digit + 48));
	}
	return result;
}