#include "person.h"
#include <iostream>

PersonType::PersonType(std::string name, std::string surname) {
	firstName = name;
	lastName = surname;
}

void PersonType::setFirstName(std::string name) {
	firstName = name;
}

std::string PersonType::getFirstName() {
	return(firstName);
}

void PersonType::printFirstName() {
	std::cout << "\nFirst name: " << firstName;
}

void PersonType::setLastName(std::string name) {
	lastName = name;
}

std::string PersonType::getLastName() {
	return(lastName);
}

void PersonType::printLastName() {
	std::cout << "\nLast name: " << lastName;
}