#include "BookType.h"

class BooksShelf {
	public:
		// int booksInShelf = 0;
		// Current number of books in shelf (max 100)
		BooksShelf(int);
		void printSize();
			// Prints the current number of books in the shelf
		void writeBooksToFile();
			// Writes books stored info into a txt filebuf
		void readBooksFromFile();
			// Reads books info from a txt file
		void addBook();
			// Add a single book to the shelf
		void showBooks();
			// Prints all books information
		void showOneBook(std::string, int);
			// Shows the information of the book with the title
			// passed as parameter or the ISBN in string format
			// Option is choose in the second parameter which must be 1 or 2
		int searchBook(std::string);
			// Search a book by it's title and returns its position
			// in the book's array
		int searchByISBN(std::string);
			// Search a book by its ISBN in string format
			// It returns its position in the books array
	private:
		BookType books[100];
		int booksInShelf;
		// Current number of books in shelf (max 100)
};


