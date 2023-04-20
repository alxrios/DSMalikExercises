#include <string>

class BookType {
	public:
		void showTitle();
			// Shows the title of the book
		void setTitle();
			// Sets the title of the book
		bool checkTitle(std::string);
			// Checks if the title passed as parameter
			// is the same as the one stored for the book
		std::string getTitle();
			// Returns the book's title
		void showNumOfCopies();
			// Shows the number of copies in stock
		void setNumberOfCopies();
			// Sets the number of copies in stock
		void updateNumberOfCopies(int, std::string);
			// Updates the current number of copies by
			// adding or subtracting acording to the option
			// specified in the second parameter
		void setPublisher();
			// Sets the publisher's name
		void checkPublisher(std::string);
			// Checks if the name of the publisher coincides
			// with the one passed as a parameter to the function
		void showPublisher();
			// Shows the publisher info
		//void setPublisher(std::string);
			// Sets the publisher's name
		void showISBN();
			// Shows the ISBN of a book
		void setISBN();
			// Sets the ISBN number
		void checkISBN(int[10]);
			// Checks if the ISBN passed as parameter to the function
			// is the same as the ISBN stored for the book
		void showPrice();
			// Shows price of the book
		void setPrice();
			// Sets the price of the book
		void updatePrice();
			// Adds a requested quantity to the price
			// Use negative number to quit or reduce current price insetead
		void setAuthors(int = 4);
			// Sets the authors name (max four authors)
		void showAuthors();
			// Shows the authors name
		
		BookType();
			// Default constructor
		BookType(std::string);
			// Constructor with only title as parameter
		BookType(int [10]);
			// Constructor with only ISBN as parameter
		BookType(std::string, int [10]);
			// Constructor with two parameters, book title
			// and book ISBN
	private:
		std::string title = "";
		std::string authors[4] = {"", "", "", ""};
		int numOfAuthors = 4;
			// Number
			// 4 by default
		std::string publisher = "";
			// Publisher information
		int ISBN[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
			// ISBN code
		float price = 0.0;
			// Price of the book
		int copiesStock = 0;
			// Stores the number of copies in stock
		int returnNumberCopies(); // Delete?
			// returns the number of copies
		bool checkISBN();
			// Checks if the ISBN introduced is correct
		std::string strISBN = "";
			// Stores ISBN code in string format
		void ISBNtoStr();
			// Transforms the ISBN code in int format to string
			// and stores it in strISBN
};
