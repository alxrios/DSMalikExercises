#include "BookType.h"

class BooksShelf {
	public:
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
		void showOneBook(int);
			// Shows the information of the book with position passed
			// as parameter
		int searchBook(std::string);
			// Search a book by it's title and returns its position
			// in the book's array
		int searchByISBN(std::string);
			// Search a book by its ISBN in string format
		int getBooksInShelf();
			// Returns the number of books in shelf a the moment
		void setBooksInShelf(int);
			// Sets the quantity of books in shelf to the number
			// given as parameter
		BookType books[100];
			
	private:
		int booksInShelf;
			// Current number of books in shelf (max 100)
		bool checkStrISBN(std::string);
			// Checks the string version of ISBN
			// To be used the searchByISBN function
};
