#include <string>

class RomanType {
	public:
		RomanType(std::string); 
			// Constructor
		RomanType(); 
			// Constructor
		void printRoman();
			// Prints the Roman version of the number
		void printDecimal();
			// Prints the decimal version of the number
		void setNewRoman(std::string);
			// Set's a new roman number into the object
			// and it's decimal version
	
	private:
		std::string romanNumber; 
			// Stores roman version of the number
		int decimalForm; 
			// Stores decimal version of the number
		int converToDecimal(std::string); 
			// Calculates the decimal version of the roman numeral
};