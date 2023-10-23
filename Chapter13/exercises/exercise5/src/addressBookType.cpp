#include "addressBookType.h"
#include <fstream>
#include <string>
#include <iostream>

addressBookType::addressBookType() {
    //ctor
}

addressBookType::~addressBookType() {
    //dtor
}

void addressBookType::readData() {
	std::ifstream file;
	file.open("data.txt");
	std::string str;
	int counter = 0; //Variable to help knowing which variable we are reading
	while (std::getline(file, str)) {
		entries[counter].setStreet(str);
		std::getline(file, str);
		entries[counter].setCity(str);
		std::getline(file, str);
		entries[counter].setState(str);
		std::getline(file, str);
		entries[counter].setZipCode(str);
		std::getline(file, str);
		entries[counter].setMonth(std::stoi(str));
		std::getline(file, str);
		entries[counter].setYear(std::stoi(str));
		std::getline(file, str);
		entries[counter].setDay(std::stoi(str));
		std::getline(file, str);
		entries[counter].setFirstName(str);
		std::getline(file, str);
		entries[counter].setLastName(str);
		std::getline(file, str);
		entries[counter].setRelation(str);
		std::getline(file, str);
		entries[counter].setPhone(str);
		counter++;
	}
	file.close();
}

void addressBookType::printData(int len) const {
	for (int i = 0; i < len; i++) {
		std::cout << "\n\nEntry number " << i+1 << "...";
		entries[i].printAddress();
		entries[i].printDate();
		std::cout << "\n";
		entries[i].printName();
		entries[i].printRelation();
		entries[i].printPhone();
	}
}

void addressBookType::printxt(int len) const {
	std::ofstream file;
	file.open("output.txt");
	for (int i = 0; i < len; i++) {
		file << "\n\nEntry number " << i+1 << "...";
		file << "\nStreet address: " << entries[i].getStreet();
		file << "\nCity: " << entries[i].getCity();
		file << "\nState: " << entries[i].getState();
		file << "\nZip code: " << entries[i].getZipCode();
		file << "\n" << entries[i].getMonth() << "-" << entries[i].getDay() << "-" << entries[i].getYear();
		file << "\n" << entries[i].getFirstName() << " " << entries[i].getLastName();
		file << "\n" << entries[i].getRelation();
		file << "\n" << entries[i].getPhone();
	}
	file.close();
}

void addressBookType::sortByLastName(int len) {
	extPersonType aux; //Auxiliar variable to interchange elements in entries array when appropiate
	int pos; //Varriable to store the pos of the element to interchange (the algorithm should go to the final each time before do the exchange if necessary)
	int let1, let2, let3, let4; //Auxiliar variables to store the first or the second letter of the surnames
	bool exchange = true;
	for (int i = 0; i < len - 1; i++) {
		let1 = static_cast<int>(entries[i].getLastName()[0]); //First letter of the ith entry last name
		pos = i; //At this point the smallest letter knowed is at postion i
		for (int j = i+1; j < len; j++) {
			let2 = static_cast<int>(entries[j].getLastName()[0]); //First letter of the jth entry last name
			if (let1 != let2) { //If first letter are equal we are going to check for the second one
				if (let1 > let2) {
					let1 = let2; //Now the smallest letter is let2
					pos = j;//Stores the smallest letter than let1 possition to the moment
				}
			} else {
				//If the first letters are the same we are going to check the second one of both surnames
				let3 = static_cast<int>(entries[i].getLastName()[1]); //Second letter of the ith word
				let4 = static_cast<int>(entries[j].getLastName()[1]); //Second letter of the jth word
				if (let3 > let4) {
					aux = entries[i];
					entries[i] = entries[j];
					entries[j] = aux;
					exchange = false;
				}
			}
		}
		if (exchange) { //Only exchange if exchange has not produced yet
			//Interchange elements of possition i and pos;
			aux = entries[i];
			entries[i] = entries[pos];
			entries[pos] = aux;
		}
		exchange = true; //Returns exchange to true

	}
}

int addressBookType::searchPerson(std::string last, int len) {
	int pos = -1; //Default value if not finded in entries array
	for (int i = 0; i < len; i++) {
		if (entries[i].getLastName() == last) {
			pos = i;
			break;
		}
	}
	return pos;
}

void addressBookType::printPerson(int pos) const {
	if (pos != -1) {
		std::cout << "\n\nEntry number " << pos+1 << "...";
		entries[pos].printAddress();
		entries[pos].printDate();
		std::cout << "\n";
		entries[pos].printName();
		entries[pos].printRelation();
		entries[pos].printPhone();
	} else {
		std::cout << "\n\nEntry not finded...";
	}
}

void addressBookType::printBdayName(int mth, int len) const {
	std::cout << "\n\nEntry names with the month: " << monthToString(mth) << "...\n\n";
	int count = 1;
	for (int i = 0; i < len; i++) {
		if (entries[i].getMonth() == mth) {
			std::cout << count << "-";
			entries[i].printName();
			std::cout << "\n";
			count++;
		}
	}
}

std::string addressBookType::monthToString(int mth) const {
	std::string monat;
	switch(mth) {
		case 1:
			monat = "January";
			break;
		case 2:
			monat = "February";
			break;
		case 3:
			monat = "March";
			break;
		case 4:
			monat = "April";
			break;
		case 5:
			monat = "May";
			break;
		case 6:
			monat = "June";
			break;
		case 7:
			monat = "July";
			break;
		case 8:
			monat = "August";
			break;
		case 9:
			monat = "September";
			break;
		case 10:
			monat = "October";
			break;
		case 11:
			monat = "November";
			break;
		case 12:
			monat = "December";
			break;
		default:
			monat = "error";
	}
	return monat;
}

void addressBookType::printNamesBetween(int start, int end, int len) {
	if (start <= end) {
		for (int i = start; i <= end; i++) {
			entries[i].printName();
			std::cout << "\n";
		}
	}
}

void addressBookType::printSingleRelation(std::string rel, int len) {
	std::cout << "\n\nEntries with the relation:... " << rel << "\n\n";
	for (int i = 0; i < len; i++) {
		if (entries[i].getRelation() == rel) {
			entries[i].printName();
			std::cout << "\n";
		}
	}
}