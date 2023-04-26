#include "menu.h"
#include <iostream>

void Menu::text() {
	std::cout << "\n\nOPTIONS:\n--------\n\n"
		"1. Write books to file.\n"
		"2. Read books from file.\n"
		"3. Search one book by title.\n"
		"4. Search one book by ISBN.\n"
		"5. Show all books.\n"
		"9. End program\n";
}

void Menu::display(BooksShelf & shelf) {
	int option = 0;
	int booksQuantity = 1;
	std::string titleToSearch = "";
	std::string ISBNtoSearch = "";
	
	while(option != 9) {
		text();
		std::cout << "\n\nWhich option do you want to choose?: ";
		std::cin >> option;
		switch(option) {
			case 1:
				std::cout << "\nHow many books do you want to write?: (max. 100) ";
				std::cin >> booksQuantity;
				while((booksQuantity > 100) | (booksQuantity < 1)) {
					std::cout << "\nPlease, introduce a valid quantity: (max. 100) ";
					std::cin >> booksQuantity;
				}
				Write::writeToFile(shelf, booksQuantity);
				break;
			case 2:
				Read::readFromFile(shelf);
				std::cout << "\nThere were read " << shelf.getBooksInShelf() << " books.";
				break;
			case 3:
				std::cout << "\nPlease, introduce the title of the book you want to search\n";
				std::cin.ignore();
				getline(std::cin, titleToSearch);
				if (shelf.searchBook(titleToSearch) == -1) {
					std::cout << "\nSorry, the book \"" << titleToSearch << "\" was not in the shelf.";
				} else {
					shelf.showOneBook(shelf.searchBook(titleToSearch));
				}
				break;
			case 4:
				std::cout << "\nPlease, introduce the ISBN of the book you want to search\n";
				std::cin >> ISBNtoSearch;
				if (shelf.searchByISBN(ISBNtoSearch) == -1) {
					std::cout << "\nSorry, the book with the ISBN \"" << ISBNtoSearch << "\" was not in the shelf.";
				} else {
					shelf.showOneBook(shelf.searchByISBN(ISBNtoSearch));
				}
				break;
			case 5:
				shelf.showBooks();
				break;
			default:
				break;
		}
	}
}
