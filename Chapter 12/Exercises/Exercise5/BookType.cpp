#include "BookType.h"
#include <iostream>

BookType::BookType() {
	title = "";
}

BookType::BookType(std::string bookTitle) {
	title = bookTitle;
}

BookType::BookType(int inputISBN[10]) {
	for (int i = 0; i < 10; i++) {
		ISBN[i] = inputISBN[i];
	}
	// std::cout << "\nChecking ISBN... " << checkISBN(); DELETE THIS LINE
	if (!checkISBN()) {
		std::cout << "\nISBN passed as parameter to the constructor\n"
			"is incorrect, please introduce it again:\n";
		setISBN();
	}
}

BookType::BookType(std::string bookTitle, int bookISBN[]) {
	title = bookTitle;
	for (int i = 0; i < 10; i++) {
		ISBN[i] = bookISBN[i];
	}
	if (!checkISBN()) {
		std::cout << "\nISBN passed as parameter to the constructor\n"
			"is incorrect, please introduce it again:\n";
		setISBN();
	}
}

void BookType::setISBN() {
	bool inputok = 0;
	int num = 0;
	int i;
	
	while (!inputok) {
		for (i = 0; i < 10; i++) {
			std::cout << "\nPlease, introduce digit number " << i + 1 << ": ";
			std::cin >> num;
			ISBN[i] = num;
		}
		
		inputok = checkISBN();
		
		if (!inputok) {
			std::cout << "\nISBN introduced is incorrect, please introduce it again: \n";
		} else {
			std::cout << "\nISBN input is correct.\n";
		}
	}
}

void BookType::showISBN() {
	std::cout << "\nISBN: ";
	for (int i = 0; i < 10; i++) {
		std::cout << ISBN[i];
	}
	std::cout << "\n";
}

bool BookType::checkISBN() {
	bool result;
	int digit = -1;
	int sum = 0;
	int i;
	
	for (i = 0; i <= 9; i++) {
		sum += (11 - i)*ISBN[i - 1];
	}
	
	int correctLast = -1;
	for (i = 1; i < 11; i++) {
		if (((sum + i) % 11 ) == 0) {
			correctLast = i;
			break;
		}
	}
	
	if (correctLast == ISBN[9]) {
		result = 1;
	} else {
		result = 0;
	}
	
	return(result);
}

void BookType::setTitle() {
	std::cout << "\nIntroduce book's title: ";
	getline(std::cin, title);
	// std::cout << "You have introduced: " << title << "\n";
}

void BookType::showTitle() {
	std::cout << "\nTitle: " << title << "\n";
}

bool BookType::checkTitle(std::string titleToCheck) {
	bool result = (title == titleToCheck);
	return(result);
}

std::string BookType::getTitle() {
	return(title);
}

void BookType::showNumOfCopies() {
	std::cout << "\nNumber of copies in stock: " << copiesStock << "\n";
}

void BookType::setNumberOfCopies() {
	std::cout << "\nHow many copies of the book are in stock?: ";
	std::cin >> copiesStock;
}

void BookType::updateNumberOfCopies(int quantity, std::string option) {
	// Note: Check option input to be only "add" or "substract" before calling
	// this function
	if (option == "add") {
		copiesStock += quantity;
	} else if (option == "substract") {
		copiesStock -= quantity;
	} else {
		std::cout << "\nWrong input.\n";
	}
}

void BookType::setPublisher() {
	std::cout << "\nIntroduce publisher's name: ";
	getline(std::cin, publisher);
}

void BookType::showPublisher() {
	std::cout << "\nPublisher: " << publisher << "\n";
}

void BookType::showPrice() {
	std::cout << "\nPrice: " << price << "\n";
}

void BookType::setPrice() {
	std::cout << "\nIntroduce the book's price: ";
	std::cin >> price;
}

void BookType::updatePrice() {
	float addPrice;
	std::cout << "\nWhich quantity do you want to add/reduce to current product price?: ";
	std::cin >> addPrice;
	price += addPrice;
	std::cout << "\nAcutalized book's price: " << price << "\n";
}

void BookType::setAuthors(int authorsNum) {
	// Before call this function make sure the parameter
	// numOfAuthors is between 1 and 4 (both included)
	std::string authorName;
	std::cin.ignore();
	for (int i = 0; i < authorsNum; i++) {
		std::cout << "\nIntroduce author " << i + 1 << " name: ";
		getline(std::cin, authorName);
		authors[i] = authorName;
	}
	if (authorsNum != 4) {
		numOfAuthors = authorsNum;
	}
}

void BookType::showAuthors() {
	for (int i = 0; i < numOfAuthors; i++) {
		std::cout << "\nAuthor " << i + 1 << " name: " << authors[i];
	}
}

void BookType::ISBNtoStr() {
	
}