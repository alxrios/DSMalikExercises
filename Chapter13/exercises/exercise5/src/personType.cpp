#include "personType.h"
#include <iostream>

personType::personType(std::string first, std::string last) {
    //ctor
	firstName = first;
	lastName = last;
}

personType::~personType() {
    //dtor
}

void personType::printName() const {
	std::cout << firstName << " " << lastName;
}

void personType::setName(std::string first, std::string last) {
	firstName = first;
	lastName = last;
}

std::string personType::getFirstName() const {
	return firstName;
}

std::string personType::getLastName() const {
	return lastName;
}

void personType::setFirstName(std::string first) {
	firstName = first;
}

void personType::setLastName(std::string last) {
	lastName = last;
}