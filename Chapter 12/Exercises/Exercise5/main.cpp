#include <iostream>
// #include "BookType.h"
#include "menu.h"
#include "BooksShelf.h"

int main() {
	
	/*
	int isbn[] = {0, 3, 0, 6, 4, 0, 6, 1, 5, 1};
	BookType test("TEST TITLE", isbn);
	test.showISBN();
	test.showTitle();
	*/
	/*
	test.showISBN();
	test.setISBN();
	test.showISBN();
	*/
	
	// Menu::display();
	
	/*
	double test[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	std::cout << "\nSize of test: " << sizeof(test)/sizeof(double);
	*/
	
	/*
	BooksShelf shelf(0);
	// shelf.printSize();
	shelf.addBook();
	shelf.addBook();
	shelf.showBooks();
	shelf.showOneBook("test title 2", 1);
	*/
	
	int testArr[2] = {5, 7};
	char testArrChar[2];
	testArrChar[0] = static_cast<char>(testArr[0]);
	std::string testStr = std::string(1, static_cast<char>(51));
	testStr.append("ahoj");
	std::cout << testStr << "\n";
	
	
	
	return 0;
}


// Note: ISBN must be an char array to hold X case of last digit























