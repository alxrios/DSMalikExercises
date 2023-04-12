#include "Menu.h"
#include <iostream>

void Menu::text() {
	std::cout << "\nOPTIONS:\n--------\n"
		"1. Set day\n"
		"2. Print day\n"
		"3. Print next day\n"
		"4. Print previous day\n"
		"5. Print nth day\n"
		"9. End program\n";
}

void Menu::display(DayType inputDay) {
	int option = 0;
	std::string nwDay;
	int nthDay = 1;
	
	while (option != 9) {
		text();
		std::cout << "\n\nWhich option do you want? ";
		std::cin >> option;
		switch(option) {
			case 1:
				std::cout << "Enter day: ";
				std::cin >> nwDay;
				inputDay.setDay(nwDay);
				break;
			case 2:
				inputDay.printDay();
				break;
			case 3:
				inputDay.printNextDay();
				break;
			case 4:
				inputDay.printPreviousDay();
				break;
			case 5:
				std::cout << "How many days do you want to advance? ";
				std::cin >> nthDay;
				inputDay.printNthDay(nthDay);
				break;
			default:
				break;
		}
	}
}