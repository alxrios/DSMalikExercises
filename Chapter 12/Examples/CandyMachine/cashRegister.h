

class cashRegister {
	public:
		float change(float, float); // Returns the change if possible
		cashRegister(); // Default constructor
		void setCashOnHand(float); // Sets the cash in the register machine
		void showCashOnHand() const; // Shows the cash available in the register machine
		void addCash(float); // Adds cash to the existing cash in the register machine
	private:
		float cash_on_hand; // Stores the cash available in the register machine
};
