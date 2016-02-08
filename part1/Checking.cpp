// Courtney Kelly and Katie Schermerhorn
// Checking.cpp

#include <iostream>
#include "BankAccount.h"
#include "Checking.h"
using namespace std;

// Default Constructor
Checking::Checking() : BankAccount() {
		deposits = 0;
		withdrawls = 0;
	}

// Member Functions
	void Checking::print() {

		cout << "You deposited: $" << deposits << endl;
		cout << "You withdrew: $" << withdrawls << endl;

	}
