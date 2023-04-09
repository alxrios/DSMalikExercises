#include <string>
#include "cashRegister.h"

class machine {
	public:
		machine(); // Default constructor
		void showItems() const; // Show products keys, names and prices
		void selectItem(cashRegister&); // Offers the user to select a product and pay for it
	private:
		static const int length = 5; // Number of products
		int key[length]; // Key to reference each product
		std::string productName[length]; // Stores products names
		float productPrice[length]; // Stores products prices
};
