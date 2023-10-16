#ifndef DATETYPE_H
#define DATETYPE_H


class dateType
{
    public:
        dateType(int month = 3, int day = 1, int year = 1900);
			//Constructor to set the date
			//The member variables dMonth, dDay, and dYear are set
			//according to the parameters.
			//Postcondition: dMonth = month; dDay = day; dYear = year;
			// If no values are specified, the default
			// values are used to initialize the member
			// variables.
			// Year is assumed to be only more or equal than 1900 and less than 10000
		
        virtual ~dateType();
		
		void setDate(int month, int day, int year);
			//Function to set the date.
			//The member variables dMonth, dDay, and dYear are set
			//according to the parameters.
			//Postcondition: dMonth = month; dDay = day;
			// dYear = year
			
		int getDay() const;
			//Function to return the day.
			//Postcondition: The value of dDay is returned.
			
		int getMonth() const;
			//Function to return the month.
			//Postcondition: The value of dMonth is returned.
			
		int getYear() const;
			//Function to return the year.
			//Postcondition: The value of dYear is returned.
		
		void printDate() const;
			//Function to output the date in the form mm-dd-yyyy.
			
		bool isLeapYear() const;
			//Function to check if the year stored in dYear is a leap year.
			
		// void checkLeapYear(); //DELETE FUNCTION ONLY FOR CHECK isLeapYear()
		// void setYear(int); //DELETE ONLY FOR CHECK isLeapYear()

    protected:

    private:
		int dMonth; //variable to store the month
		int dDay; //variable to store the day
		int dYear; //variable to store the year
};

#endif // DATETYPE_H