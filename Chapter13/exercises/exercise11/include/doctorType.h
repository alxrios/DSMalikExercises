#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H

#include <personType.h>


class doctorType : public personType
{
    public:
        doctorType(std::string = "unkown", std::string = "unkown", std::string = "unkown");
		//Default contructor
		//By default sets speciality to "unkown"
        virtual ~doctorType();
		
		std::string getSpeciality() const;
			//Returns a string containing pseron's speciality
		void setSpeciality(std::string);
			//Sets the speciality to the string passed as parameter

    protected:

    private:
		std::string speciality; //Stores doctor's speciality
};

#endif // DOCTORTYPE_H
