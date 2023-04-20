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
	book.showAuthors();
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

void BooksShelf::showOneBook(std::string bookTitle, int option) { // Complete this function
	int pos = searchBook(bookTitle);
	if ((pos >= 0) & (pos < 100)) {
		books[pos].showTitle();
		books[pos].showISBN();
		books[pos].showAuthors();
		books[pos].showPublisher();
		books[pos].showPrice();
		books[pos].showNumOfCopies();
	}
}
