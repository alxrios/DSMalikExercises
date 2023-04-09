#include "menu.h"
#include <iostream>
#include "writeFile.h"

void menu::text() {
	std::cout << "\nVENDING MACHINE MENU\n--------------------"
	"\n--------------------\n\nOPTIONS:\n\n"
		"1. Write a new file with user input.\n"
		"2. Show Products in Machine.\n"
		"3. Select an item.\n"
		"4. Set cash amount on register machine.\n"
		"5. Print cash amount on register machine.\n"
		"6. Add cash to the existing amount in the register machine.\n"
		"9. Finish program."
		"\n--------------------------\n"
		"Which option do you want? ";
}


void menu::display(machine mach, cashRegister registerMachine) {
	// menu::text();
	int option = 0;
	while (option != 9) {
		menu::text();
		std::cin >> option;
		std::cin.ignore();
		switch(option) {
			case 1:
				writeFile::writeFileUser();
				break;
			case 2:
				mach.showItems();
				break;
			case 3:
				mach.selectItem(registerMachine);
				break;
			case 4:
				std::cout << "Which cash quantity do you want to set? ";
				float cashInput;
				std::cin >> cashInput;
				registerMachine.setCashOnHand(cashInput);
				break;
			case 5:
				registerMachine.showCashOnHand();
				break;
			case 6:
				float addAmount;
				std::cout << "Which quantity do you want to add? ";
				std::cin >> addAmount;
				registerMachine.addCash(addAmount);
				break;
			case 9:
				break;
		}
	}
}
