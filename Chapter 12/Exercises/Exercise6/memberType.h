#include <string>

class memberType {
	public:
		memberType();
			// Constructor
		memberType(std::string);
			// Constructor with only personName given
			// as paramter
		memberType(std::string, std::string);
			// Constructor with personName, and memberID
			// given as parameter
		memberType(std::string, std::string, int);
			// Constructor with personName, memberID, and
			// number of books bought given as parameter
		memberType(std::string, std::string, int, float);
			// Constructor with personName, memberID, number of
			// books bought and amountSpent given as parameter
		void modifyName();
			// Modyfys the member's name
		void modifyName(std::string);
			// Modifys the member's name with the string passed
			// as parameter to the function
		std::string getName();
			// Returns the member's name
		void showName();
			// Shows member's name
		int getBooksBought();
			// Returns the quantity of books buyed by the client
		void showBooksBought();
			// Show in the console the quantity of books bought
			// by the client
		void updateBooksBought(int);
			// Updates the number of books bought by the client
			// to the number given as parameter
		void setID(std::string);
			// Sets the member ID
		std::string getID();
			// Returns the member's ID
		void showID();
			// Shows the member ID in the console
	private:
		std::string personName;
		std::string memberID;
			// Must be a positive integer of 4 digitss
			// From 0001 to 9999
		int booksBought;
			// Number of books bought by the client
		float amountSpent;
			// Total quantity spent by the client
		bool checkID(std::string);
			// Checks if the given ID given as a string is 
			// a number of four digits
};