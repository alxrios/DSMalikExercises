#include "BooksShelf.h"
#include <iostream>

BooksShelf::BooksShelf(int numberOfBooks) {
	booksInShelf = numberOfBooks;
}

void BooksShelf::printSize() {
	std::cout << "\nThere are " << booksInShelf << " books in shelf\n";
}

void BooksShelf::addBook() {
	BookType book;
	book.setTitle();
	book.setPublisher();
	book.setISBN();
	book.setPrice();
	book.setNumberOfCopies();
	int autnum;
	std::cout << "\nHow many authors does your book have? (max. 4): ";
	std::cin >> autnum;
	while ((autnum < 1) | (autnum > 4)) {
		std::cout << "\nThe number of authors must be between 1 and 4."
			" Please, introduce the number again: ";
		std::cin >> autnum;
	}
	book.setAuthors(autnum);
	books[booksInShelf] = book;
	booksInShelf++;
	printSize();
}

void BooksShelf::showBooks() {
	for (int i = 0; i < booksInShelf; i++) {
		books[i].showTitle();
		books[i].showISBN();
		books[i].showAuthors();
		books[i].showPublisher();
		books[i].showPrice();
		books[i].showNumOfCopies();
	}
}

int BooksShelf::searchBook(std::string bookTitle) {
	int pos = -1;
	for (int i = 0; i < booksInShelf; i++) {
		if (bookTitle == books[i].getTitle()) {
			pos = i;
			break;
		}
	}
	return(pos);
}

void BooksShelf::showOneBook(int pos) {
	books[pos].showTitle();
	books[pos].showISBN();
	books[pos].showAuthors();
	books[pos].showPublisher();
	books[pos].showPrice();
	books[pos].showNumOfCopies();
}

int BooksShelf::searchByISBN(std::string strISBN) {
	while (!checkStrISBN(strISBN)) {
		std::cout << "\nISBN introduced is incorrect, please introduce a valid one: ";
		getline(std::cin, strISBN);
	}
	int pos = -1;
	for (int i = 0; i < booksInShelf; i++) {
		if (strISBN == books[i].getStrISBN()) {
			pos = i;
			break;
		}
	}
	return(pos);
}

bool BooksShelf::checkStrISBN(std::string strISBN) {
	// First step, convert the string input to int array format
	int i;
	int numericISBN[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (i = 0; i < 9; i++) {
		numericISBN[i] = static_cast<int>(strISBN[i]) - 48;
	}
	if (strISBN[9] == 'X') {
		numericISBN[9] = 10;
	} else {
		numericISBN[9] = static_cast<int>(strISBN[9]) - 48;
	}
	
	// Apply same algorithm as in checkISBN function of class BookType
	bool result;
	int digit = -1;
	int sum = 0;
	
	for (i = 1; i <= 9; i++) {
		sum += (11 - i)*numericISBN[i - 1];
	}
	
	int correctLast = -1;
	for (i = 0; i < 11; i++) {
		if (((sum + i) % 11 ) == 0) {
			correctLast = i;
			break;
		}
	}
	
	if (correctLast == numericISBN[9]) {
		result = 1;
	} else {
		result = 0;
	}
	
	return(result);	
}

int BooksShelf::getBooksInShelf() {
	return(booksInShelf);
}

void BooksShelf::setBooksInShelf(int booksQuantity) {
	booksInShelf = booksQuantity;
}
