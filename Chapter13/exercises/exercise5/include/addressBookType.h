#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include <extPersonType.h>


class addressBookType //: public extPersonType
{
    public:
        addressBookType();
			//Constructor
        virtual ~addressBookType();
			//Destructor
		void readData();
			//Charges info in the entries from an external txt file
		void printData(int) const;
			//Prints the entries data to the console
		void printxt(int) const;
			//Prints the entries data to a external txt file
		void sortByLastName(int);
			//Sorts the book entries by their last names
		int searchPerson(std::string last, int len);
			//Returns the position of the entry with the lastName equal to last
			//Returns -1 if not finded
		void printPerson(int pos) const;
			//Prints the information of a single entry in the possition pos
		void printBdayName(int mth, int len) const;
			//Prints the names of the people whose birth is in month mth
		// void printNamesBetween(std::string start, std::string end, int len);
		void printNamesBetween(int start, int end, int len);
			//Prints all the names of the people between two given last names
		void printSingleRelation(std::string rel, int len);
			//Prints names of all the entries with a relation equal to rel parameter
			

    protected:

    private:
		extPersonType entries[500];
		std::string monthToString(int mth) const;
			//Returns the corresponding name of a month given in numeric format
};

#endif // ADDRESSBOOKTYPE_H
