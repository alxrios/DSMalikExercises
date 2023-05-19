#ifndef H_person
#define H_person
#include <string>

class PersonType {
	public:
		PersonType(std::string = "", std::string = "");
			// Constructor
		void setFirstName(std::string = "");
			// Sets first name
		std::string getFirstName();
			// Returns first name
		void printFirstName();
			// Prints first name
		void setLastName(std::string = "");
			// Sets last name
		std::string getLastName();
			// Returns last name
		void printLastName();
			// Prints last name
	private:
		std::string firstName;
			// Stores the first name of the person
		std::string lastName;
			// Stores the last name of the person
};

#endif