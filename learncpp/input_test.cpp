#include <iostream>

double getDouble() {
	while(true) {
		std::cout << "Enter a double value: ";
		double c;
		std::cin >> c;
		
		// Check for failed extraction
		if (std::cin.fail()) { // has a previous extraction failed
			// handle the failure
			std::cin.clear(); // Put us back in 'normal' operation mode
			std::cin.ignore(32767, '\n'); // and remove the bad input
			std::cout << "Invalid input. Please try again." << std::endl;
		} else {
			std::cin.ignore(32767, '\n');
			// the user can't enter a meaningless double value, so we don't need to worry about validating that
			return c;
		}
	}
}

char getOperator() {
	while(true) { //Loop until user enters a valid input
		std::cout << "Enter one of the following: +, -, * or /: ";
		char op;
		std::cin >> op;
		
		// Chars can accept any single input character, so no need to check for an invalid extraction here.
		
		std::cin.ignore(32767, '\n'); // remove any extraneous input
		
		// Check if the user entered meaningful input.
		if (op == '+' || op == '-' || op == '*' || op == '/') {
			return op; // return it to the caller
		} else {
			std::cout << "Invalid inpu. please try again" << std::endl;
		}
	}
}

void printResult(double x, char op, double y) {
	switch(op) {
		case '+':
			std::cout << x << " + " << y << " is " << x + y << std::endl;
			break;
		case '-':
			std::cout << x << " - " << y << " is " << x - y << std::endl;
			break;
		case '*':
			std::cout << x << " * " << y << " is " << x * y << std::endl;
			break;
		case '/':
			std::cout << x << " / " << y << " is " << x / y << std::endl;
			break;
		default:
			std::cout << "Unexpected operation int printResult" << std::endl;
	} 
}

int main(int argc, char** argv) {
	double x = getdouble();
	char op = getOperator();
	double y = getDouble();
	
	printResult(x, op, y);
	
	return 0;
}