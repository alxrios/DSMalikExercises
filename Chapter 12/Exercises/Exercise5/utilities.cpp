#include "utilities.h"
#include <fstream>
#include <iostream>

int Ascii::ASCIIconvert(int integer) {
	int ASCIIdecimal;
	if (integer == 10) {
		ASCIIdecimal = 88;
	} else {
		ASCIIdecimal = 57 - 9 + integer;
	}
	return(ASCIIdecimal);
}

void Write::writeToFile(BooksShelf & shelf, int numberOfBooks) {
	// First step read the books
	int i;
	for (i = 0; i < numberOfBooks; i++) {
		std::cout << "\nBook number " << i + 1 << " of " << numberOfBooks << ":\n\n";
		shelf.addBook();
	}
	
	// Second step write data to file
	std::ofstream outfile;
	outfile.open("books.txt");
	outfile << numberOfBooks << "\n";
	for (i = 0; i < numberOfBooks; i++) {
		outfile << shelf.books[i].getTitle() << "\n";
		outfile << shelf.books[i].getStrISBN() << "\n";
		outfile << shelf.books[i].getNumOfAuthors() << "\n";
		for (int j = 0; j < shelf.books[i].getNumOfAuthors(); j++) {
			outfile << shelf.books[i].getAuthor(j) << "\n";
		}
		outfile << shelf.books[i].getPrice() << "\n";
		outfile << shelf.books[i].getNumCopies() << "\n";
		outfile << shelf.books[i].getPublisher() << "\n";
	}
	outfile.close();
}

void Read::readFromFile(BooksShelf & shelf) {
	int booksQuant;
	std::ifstream infile;
	infile.open("books.txt");
	infile >> booksQuant;
	shelf.setBooksInShelf(booksQuant);
	std::string auxString;
	int auxInt;
	float auxFloat;
	int i;
	infile.ignore(1, '\n');
	
	for (i = 0; i < booksQuant; i++) {
		getline(infile, auxString);
		shelf.books[i].setTitle(auxString);
		infile >> auxString;
		shelf.books[i].setISBN(auxString);
		infile >> auxInt;
		shelf.books[i].setNumOfAuthors(auxInt);
		infile.ignore();
		// Authors reading
		for (int j = 0; j < auxInt; j++) {
			getline(infile, auxString);
			shelf.books[i].setAuthor(auxString, j);
		}
		
		infile >> auxFloat;
		shelf.books[i].setPrice(auxFloat);
		infile >> auxInt;
		shelf.books[i].setNumberOfCopies(auxInt);
		infile.ignore();
		getline(infile, auxString);
		shelf.books[i].setPublisher(auxString);
	}
	
	infile.close();
}