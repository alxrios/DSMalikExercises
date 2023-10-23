#include <iostream>
#include "addressBookType.h"


int main()
{
    addressBookType book;
	book.readData();
	book.printData(5);
	book.printxt(5);
	book.sortByLastName(5);
	book.printData(5);
	book.printxt(5);
	book.printPerson(book.searchPerson("Spencer", 5));
	book.printPerson(book.searchPerson("Oak", 5));
	book.printPerson(book.searchPerson("Lewis", 5));
	book.printBdayName(4, 5);
	std::cout << book.searchPerson("Doe", 5);
	std::cout << "\n" << book.searchPerson("Stewart", 5);
	book.printNamesBetween(book.searchPerson("Doe", 5), book.searchPerson("Oak", 5), 5);
	book.printSingleRelation("family", 5);
	book.printSingleRelation("friend", 5);
	book.printSingleRelation("business", 5);
	
	

    return 0;
}
