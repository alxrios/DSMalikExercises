#include "memberType.h"
#include <iostream>

memberType::memberType() {
	personName = "";
	memberID = "";
	booksBought = 0;
	amountSpent = 0.0;
}

memberType::memberType(std::string name) {
	personName = name;
	memberID = "";
	booksBought = 0;
	amountSpent = 0.0;
}

memberType::memberType(std::string name, std::string ID) {
	personName = name;
	memberID = ID;
	booksBought = 0;
	amountSpent = 0.0;
}

memberType::memberType(std::string name, std::string ID, int booksAmount) {
	personName = name;
	memberID = ID;
	booksBought = booksAmount;
	amountSpent = 0.0;
}

memberType::memberType(std::string name, std::string ID, int booksAmount, float money) {
	personName = name;
	memberID = ID;
	booksBought = booksAmount;
	amountSpent = money;
}

bool memberType::checkID(std::string inputID) {
	bool check = 1;
	int cast = 0;
	// First check if all elements of the string are numbers
	for (int i = 0; i < inputID.length(); i++) {
		cast = static_cast<int>(inputID[i]);
		if ((cast < 48) | (cast > 57)) {
			check = 0;
			break;
		}
	}
	// Second check if the string has the correct length
	if (inputID.length() != 4) {
		check = 0;
	}
	return(check);
}

void memberType::modifyName() {
	// std::string newName = "";
	std::cout << "\nIntroduce the new name: ";
	getline(std::cin, personName);
}

void memberType::modifyName(std::string newName) {
	personName = newName;
}

std::string memberType::getName() {
	return(personName);
}

void memberType::showName() {
	std::cout << "\nName: " << getName();
}

int memberType::getBooksBought() {
	return(booksBought);
}

void memberType::showBooksBought() {
	std::cout << "\nBooks buyed by the client: " << getBooksBought();
}
		
void memberType::updateBooksBought(int numberOfBooks) {
	booksBought = numberOfBooks;
}

std::string memberType::getID() {
	return(memberID);
}

void memberType::showID() {
	std::cout << "\nID: " << getID();
}

void memberType::setID(std::string ID) {
	if (!checkID(ID)) {
		std::cout << "\nID introduced is invalid";
	} else {
		memberID = ID;
	}
}