#include <iostream>
#include "menu.h"

/*
A common place to buy candy is from a candy machine. A new candy machine has
been bought for the gym, but it is not working properly. The machine sells candies.
chips, gum, and cookies. You have asked to write a program for this candy machine
so that it can be put into operation.
The program should do the following:
	1. Show the customer the different products sold by the candy machine.
	2. Let the customer make the selection.
	3. Show the customer the cost of the item selected.
	4. Accept money from the customer.
	5. Release the item.

Input: The item selection and the cost of the item.

Output: The selected item.

Problem Analysis and Algorithm Design
-------------------------------------
A candy machine has two main coponents: a built-in cash register, and several 
dispensers to hold and release the products.

*/

int main() {
	
	machine testMachine;
	cashRegister myRegister;
	menu::display(testMachine, myRegister);
	
	return 0;
}
