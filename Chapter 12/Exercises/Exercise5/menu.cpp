#include "menu.h"
#include <iostream>

void Menu::text() {
	std::cout << "\nOPTIONS:\n--------\n\n"
		"1. Set new books"
		"";
}

void Menu::display() {
	text();
}