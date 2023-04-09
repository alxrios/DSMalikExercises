#include "machine.h"
#include <fstream>
#include <iostream>

machine::machine() {
	// Charge existing data
	std::ifstream infile;
	infile.open("productsFile.txt");
	for (int i = 0; i < length; i++) {
		infile >> key[i];
		infile.ignore();
		getline(infile, productName[i]);
		infile >> productPrice[i];
	}
	infile.close();
}

void machine::showItems() const {
	std::cout << "PRODUCTS:\n---------\n";
	for (int i = 0; i < length; i++) {
		std::cout << key[i] << ". " << productName[i] << " " << productPrice[i] << " $\n";
	}
}

void machine::selectItem(cashRegister& registerMach) {
	std::cout << "\nWhich item do you want? ";
	int selection;
	std::cin >> selection;
	std::cout << "Your selected: " << selection << ". " << productName[selection - 1] << "\n";
	std::cout << "Please, introduce item cost " << productPrice[selection - 1] << " $: ";
	float userMoney;
	std::cin >> userMoney;
	if (userMoney >= productPrice[selection - 1]) {
		float change = registerMach.change(productPrice[selection - 1], userMoney);
		if (change == -1.0) {
			std::cout << "Insuficient cash on register machine, sorry. Purchase canceled.\n";
		} else {
			std::cout << "Here's your change: " << change << " $\n";
			registerMach.addCash(-change);
		}
	} else {
		std::cout << "Sorry, insuficient money introduced.\n"
		"Purchase canceled.\n";
	}
	
}
