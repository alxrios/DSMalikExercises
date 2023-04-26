#include "BooksShelf.h"

class Ascii {
	public:
		static int ASCIIconvert(int);
			// Recieves an integer between 0 and and 10
			// and returns its decimal ASCII code (X code for 10)
};

class Write {
	public:
		static void writeToFile(BooksShelf &, int);
			// Reads input from the user corresponding to the number
			// given as parameter to the function (must be between 1 and 100)
			// and then writes it to a txt file
};

class Read {
	public:
		static void readFromFile(BooksShelf &);
			// Reads input stored in a txt file and charges it 
			// into an object of the type BooksShelf specified
			// as parameter
};