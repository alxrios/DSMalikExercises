#include <string>

class BookType {
	public:
		void showTitle();
			// Shows the title of the book
		void setTitle();
			// Sets the title of the book
		void setTitle(std::string);
			// Sets the title of the book with the string
			// passed as parameter to the function
		bool checkTitle(std::string);
			// Checks if the title passed as parameter
			// is the same as the one stored for the book
		std::string getTitle();
			// Returns the book's title
		void showNumOfCopies();
			// Shows the number of copies in stock
		void setNumberOfCopies();
			// Sets the number of copies in stock
		void setNumberOfCopies(int);
			// Sets the number of copies in stock to
			// the quantity given as paramter to the function
		void updateNumberOfCopies(int, std::string);
			// Updates the current number of copies by
			// adding or subtracting acording to the option
			// specified in the second parameter
		int getNumCopies();
			// returns the number of copies
		void setPublisher();
			// Sets the publisher's name
		void checkPublisher(std::string);
			// Checks if the name of the publisher coincides
			// with the one passed as a parameter to the function
		void showPublisher();
			// Shows the publisher info
		//void setPublisher(std::string);
			// Sets the publisher's name
		std::string getPublisher();
			// Returns publisher's name
		void setPublisher(std::string);
			// Sets the publisher's name to the value passed as paramter
			// to the funciton
		void showISBN();
			// Shows the ISBN of a book
		// void showStrISBN(); // DELETE THIS **************************************
			// Shows the string version of the book's ISBN
		void setISBN();
			// Sets the ISBN number
		void setISBN(std::string);
			// Sets the strISBN variable
		void checkISBN(int[10]);
			// Checks if the ISBN passed as parameter to the function
			// is the same as the ISBN stored for the book
		void showPrice();
			// Shows price of the book
		void setPrice();
			// Sets the price of the book
		void setPrice(float);
			// Sets price to the value given as parameter to the funciton
		void updatePrice();
			// Adds a requested quantity to the price
			// Use negative number to quit or reduce current price insetead
		float getPrice();
			// Returns the book's price
		void setAuthors(int = 4);
			// Sets the authors name (max four authors)
		void setAuthor(std::string, int);
			// Sets the ith author's name
		void showAuthors();
			// Shows the authors name
		void setNumOfAuthors(int);
			// Sets the number of authors of the book
		std::string getStrISBN();
			// Returns the strISBN variable
		int getNumOfAuthors();
			// Returns the number of authors
		std::string getAuthor(int);
			// Returns the ist author's name
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
		bool checkISBN();
			// Checks if the ISBN introduced is correct
		std::string strISBN = ""; //
			// Stores ISBN code in string format
		void ISBNtoStr();
			// Transforms the ISBN code in int format to string
			// and stores it in strISBN
		void ISBNtoInt();
			// Transforms the ISBN code in string format to
			// int array format and stores it in ISBN variable
};
