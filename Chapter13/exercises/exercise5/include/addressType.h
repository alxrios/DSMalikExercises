#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>


class addressType
{
    public:
        addressType(std::string st = "", std::string cty = "", std::string ste = "", std::string zpc = "");
        virtual ~addressType();
		void setAddress(std::string st, std::string cty, std::string ste, std::string zpc);
			//Sets the adress values
			//Postcondition: streetAddress = st; city = cty; state = ste; zipCode = zpc;
		void printAddress() const;
			//Prints all the address information
		std::string getStreet() const;
			//Returns streetAddress
		std::string getCity() const;
			//Returns city
		std::string getState() const;
			//Returns state
		std::string getZipCode() const;
			//Returns zip code
		void setStreet(std::string);
			//Sets the street to the given value
		void setCity(std::string);
			//Sets the city to the given value
		void setState(std::string);
			//Sets the state to the given value
		void setZipCode(std::string);
			//Sets the zip code to the given value
		

    protected:

    private:
		std::string streetAddress;
		std::string city;
		std::string state;
		std::string zipCode;
};

#endif // ADDRESSTYPE_H
