#include "cashRegister.h"
#include <iostream>

cashRegister::cashRegister() {
	cash_on_hand = 0.0;
}

float cashRegister::change(float itemCost, float customerAmount) {
	float amountReturn = 0.0;
	float diference = customerAmount - itemCost;
	if (cash_on_hand >= diference) {
		amountReturn = diference;
		
	} else {
		amountReturn = -1.0;
	}
	return(amountReturn);
}

void cashRegister::setCashOnHand(float input) {
	cash_on_hand = input;
}

void cashRegister::showCashOnHand() const {
	std::cout << "Cash in register: " << cash_on_hand << " $\n";
}

void cashRegister::addCash(float addAmount) {
	cash_on_hand += addAmount;
}