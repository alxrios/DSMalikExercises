#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H

#include <personType.h>
#include "dateType.h"
#include "doctorType.h"


class patientType : public personType
{
    public:
        patientType(std::string = "unknown", std::string = "unknown", int = 0);
			//Default constructor
        virtual ~patientType();
		void setBirth(int, int, int);
			//Sets the date of birth to the values passed to the parameters
		void setDateAdmitted(int, int, int);
			//Sets the date of addmision to the hospital
		void setDateDischarged(int, int, int);
			//Sets the dischargement date of the patient
		void setPhysicianData(std::string, std::string, std::string);
			//Sets the physician's name and speciality to the passed values
		std::string getPatientsID() const;
			//Returns the patients id
		int getAge() const;
			//Returns the patients age
		std::string getBirthDate() const;
			//Returns a string with the date of birth in the format mm-dd-yyyy
		std::string getAdmissionDate() const;
			//Returns a string with the date of admission in the format mm-dd-yyyy
		std::string getDischDate() const;
			//Returns a string with the date of dischargement in the format mm-dd-yyyy
		std::string getPhysiciansData() const;
			//Returns a string with the physicians information
		void printPatientsData() const;
			//Prints to the console all data relative to the patients
		void setPatientID(std::string);
			//Set's the patients ID to the value given as parameter
		

    protected:

    private:
		std::string patientID;
		int age;
		dateType dateOfBirth;
		dateType dateOfAdmission;
		dateType dateOfDisch;
		doctorType physiciansName;
		std::string formatDate(dateType) const;
			//Returns a string with the date contained in the parameter in the format mm-dd-yy
		std::string generateID() const;
			//Generates a random ID for the patient
		
};

#endif // PATIENTTYPE_H
