#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

class personType
{
    public:
        personType(std::string first = "", std::string last = "");
			//Constructor
			//Sets firstName and lastName according to the parameters.
			//The default values of the parameters are null strings.
			//Postcondition: firstName = first; lastName = last;
        virtual ~personType();
		void printName() const;
			//Function to output the first name and last name
			//in the form firstName lastName.
		void setName(std::string first, std::string last);
			//Function to set firstName and lastName according
			//to the parameters.
			//Postcondition: firstName = first; lastName = last;
		std::string getFirstName() const;
			//Function to return the first name.
			//Postcondition: The value of firstName is returned.
		std::string getLastName() const;
			//Function to return the last name.
			//Postcondition: The value of lastName is returned.
		void setFirstName(std::string);
			//Sets the first name
		void setLastName(std::string);
			//Sets the last name

    protected:

    private:
		std::string firstName; //variable to store the first name
		std::string lastName; //variable to store the last name
};

#endif // PERSONTYPE_H