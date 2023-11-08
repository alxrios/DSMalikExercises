#ifndef BILLTYPE_H
#define BILLTYPE_H

#include <string>

class billType
{
    public:
        billType(std::string = "unkown", float = 0.0, float = 0.0, float = 0.0);
			//Defaul constructor
        virtual ~billType();
		std::string getPatientId() const;
			//Returns patient's id
		float getPharmFee() const;
			//Returns pharmacy's fee amount
		float getDocsFee() const;
			//Returns the doctor's fee amount
		float getRoomFee() const;
			//Returns the room's fee amount
		void setPatientID(std::string);
			//Sets the patient's ID to the value given as parameter
		void setPharmaCharges(float);
			//Sets the pharmacy's charges to the value given as parameter
		void setDoctorFee(float);
			//Sets the doctor's fee amount
		void setRoomCharges(float);
			//Sets the room charges amount
			
		

    protected:

    private:
		std::string patientsID;
		float pharmacyCharges;
		float doctorsFee;
		float roomCharges;
		
};

#endif // BILLTYPE_H
