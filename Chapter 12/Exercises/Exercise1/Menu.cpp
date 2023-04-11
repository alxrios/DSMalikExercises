#include "Menu.h"
#include <iostream>

void Menu::display(RomanType& roman) {
	int option = 0;
	std::string newRomanNum;
	while (option != 9) {
		text();
		std::cout << "\n Which option do you want? ";
		std::cin >> option;
		switch(option) {
			case 1:
				std::cout << "Which roman numeral do you want to introduce? ";
				std::cin >> newRomanNum;
				roman.setNewRoman(newRomanNum);
				break;
			case 2:
				roman.printRoman();
				break;
			case 3:
				roman.printDecimal();
				break;
			default:
				break;
		}
	}
}

void Menu::text() {
	std::cout << "\nOPTIONS:\n--------\n"
		"1. Introduce a new Roman numeral\n"
		"2. Print Roman numeral\n"
		"3. Convert to decimal\n"
		"9. Exit\n";
}
