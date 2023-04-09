#include "writeFile.h"
#include <string>
#include <iostream>
#include <fstream>

void writeFile::readInputUser(int key[], std::string productName[], float productPrice[]) {
	//Reading user input:
	for (int i = 0; i < length; i++) {
		key[i] = i + 1;
		std::cout << "Introduce the " << i + 1 << " product name: ";
		getline(std::cin, productName[i]);
		std::cout << "Introduce the " << i + 1 << " product price: ";
		std::cin >> productPrice[i];
		std::cin.ignore();
	}
	
	//Checking input;
	for (int i = 0; i < length; i++) {
		std::cout << key[i] << ". " << productName[i] << " " << productPrice[i] << " $\n";
	}
	
}


void writeFile::writeFileUser() {
	// Variables declaration:
	int key[length]; // stores items key
	std::string productName[length]; 
	float productPrice[length];
	// Read input from the user (console):
	readInputUser(key, productName, productPrice);
	// Write the info to a txt file:
	std::ofstream outfile;
	outfile.open("productsFile.txt");
	for (int i = 0; i < length; i++) {
		outfile << key[i] << "\n" << productName[i] << "\n" << productPrice[i] << "\n";
	}
	outfile.close();
}