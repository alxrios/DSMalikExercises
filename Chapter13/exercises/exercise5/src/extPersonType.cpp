#include "extPersonType.h"
#include <iostream>


extPersonType::extPersonType(std::string st, std::string cty, std::string ste, std::string zpc, int month, int day, int year, std::string first, std::string last, std::string rel, std::string phn): addressType(st, cty, ste, zpc), dateType(month, day, year), personType(first, last) {
	//ctor
	relation = rel;
	phone = phn;
}

extPersonType::~extPersonType() {
    //dtor
}

void extPersonType::setAddress(std::string st, std::string cty, std::string ste, std::string zpc) {
	addressType::setAddress(st, cty, ste, zpc);
}

void extPersonType::setDate(int monat, int tag, int jahr) {
	dateType::setDate(monat, tag, jahr);
}

void extPersonType::setName(std::string first, std::string last) {
	personType::setName(first, last);
}

void extPersonType::setRelation(std::string rel) {
	relation = rel;
}

void extPersonType::setPhone(std::string phn) {
	phone = phn;
}

void extPersonType::printInfo() const {
	personType::printName();
	addressType::printAddress();
	std::cout << "\n" << relation << "\n";
	std::cout << phone;
	dateType::printDate();
}

void extPersonType::getInfo(std::string& st, std::string& cty, std::string& ste, std::string& zpc, int& month, int& day, int& year, std::string& first, std::string& second, std::string& rel, std::string& phn) const {
	st = getStreet();
	cty = getCity();
	ste = getState();
	zpc = getZipCode();
	month = getMonth();
	day = getDay();
	year = getYear();
	first = getFirstName();
	second = getLastName();
	rel = relation;
	phn = phone;
}

void extPersonType::printRelation() const {
	std::cout << "\n" << relation;
}

void extPersonType::printPhone() const {
	std::cout << "\n" << phone;
}

std::string extPersonType::getRelation() const {
	return relation;
}

std::string extPersonType::getPhone() const {
	return phone;
}