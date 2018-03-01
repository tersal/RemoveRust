/**
/* This is a really basic calculator program, nothing fancy
*/
#include <iostream>

// Just some defines to avoid using magic numbers
enum Operation {
	ADD_OPERATION = 1,
	MINUS_OPERATION,
	MULT_OPERATION,
	DIV_OPERATION,
	EXIT_PROGRAM  // Last element just to try to keep some order in the code
};

int main(int argc, char** argv)
{
	int lecture;
	float x;
	float y;
	float result;
	Operation operation;

	do {
		std::cout << std::endl << std::endl;
		std::cout << "List of available operations:" << std::endl;
		std::cout << "1.- Addition" << std::endl;
		std::cout << "2.- Substraction" << std::endl;
		std::cout << "3.- Multiplication" << std::endl;
		std::cout << "4.- Division" << std::endl;
		std::cout << "5.- Leave program" << std::endl;
		std::cout << "Please select an operation from the list: ";
		std::cin >> lecture;
		
		operation = static_cast<Operation>(lecture);
		
		
		if(operation != EXIT_PROGRAM) {
			std::cout << "Add first element of the operation: " << std::endl;
			std::cin >> x;
			std::cout << "Add second element of the operation: " << std::endl;
			std::cin >> y;
		}

		switch(operation) {
			case ADD_OPERATION:
				result = x + y;
				break;
			case MINUS_OPERATION:
				result = x - y;
				break;
			case MULT_OPERATION:
				result = x * y;
				break;
			case DIV_OPERATION:
				result = x / y;
				break;
			case EXIT_PROGRAM:
				std::cout << "Thanks for testing this thing." << std::endl;
				break;
			default:
				std::cout << "I think that I can't do that, yet" << std::endl;
				break;
		}
		
		if(operation != EXIT_PROGRAM) {	
			std::cout << "Total is: " << result << std::endl;
		}
		
	}while(operation != EXIT_PROGRAM);	
	return 0;
}
