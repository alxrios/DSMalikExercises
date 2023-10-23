#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <addressType.h>
#include "dateType.h"
#include "personType.h"
#include <string>


class extPersonType : public addressType, public dateType, public personType
{
    public:
        extPersonType(std::string st = "", std::string cty = "", std::string ste = "", std::string zpc = "", int month = 3, int day = 1, int year = 1900, std::string first = "", std::string last = "", std::string rel = "", std::string phn = "");
			//Constructor with default parameter values
		virtual ~extPersonType();
		void setAddress(std::string st, std::string cty, std::string ste, std::string zpc);
			//Sets the address to the values passed to the parameters
		void setDate(int monat, int tag, int jahr);
			//Sets the date values to the values passed to the parameters
		void setName(std::string first, std::string last);
			//Sets the name values to the values given in the parameters
		void setRelation(std::string rel);
			//Sets the relation value to the string given by parameter
		void setPhone(std::string phn);
			//Sets the phone value to the one passed by parameter
		void printInfo() const;
			//Prints all the info of the object
		void getInfo(std::string&, std::string&, std::string&, std::string&, int&, int&, int&, std::string&, std::string&, std::string&, std::string&) const;
		void printRelation() const;
			//Prints relation
		void printPhone() const;
			//Prints phone
		std::string getRelation() const;
			//Returns the relatio variable value
		std::string getPhone() const;
			//Returns the phone variable value
			

    protected:

    private:
		std::string relation; //family, friend or business
		std::string phone; //stores the phone number
};

#endif // EXTPERSONTYPE_H
