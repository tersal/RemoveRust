/**
/* This is a really basic calculator program, nothing fancy
*/
#include <iostream>

// Just some defines to avoid using magic numbers
#define EXIT_PROGRAM      0x05  // Used to end the operation of this program
#define ADD_OPERATION     0x01
#define MINUS_OPERATION   0x02
#define MULT_OPERATION    0x03
#define DIV_OPERATION     0x04


int main(int argc, char** argv)
{
	int operation;
	float x;
	float y;

	do {
		std::cout << std::endl << std::endl;
		std::cout << "List of available operations:" << std::endl;
		std::cout << "1.- Addition" << std::endl;
		std::cout << "2.- Substraction" << std::endl;
		std::cout << "3.- Multiplication" << std::endl;
		std::cout << "4.- Division" << std::endl;
		std::cout << "5.- Leave program" << std::endl;
		std::cout << "Please select an operation from the list: ";
		std::cin >> operation;
		std::cout << "Add first element of the operation: " << std::endl;
		std::cin >> x;
		std::cout << "Add second element of the operation: " << std::endl;
		std::cin >> y;

		switch(operation) {
			case ADD_OPERATION:
				std::cout << "Total is: " << x + y << std::endl;
				break;
			case MINUS_OPERATION:
				std::cout  << "Total is: " << x - y << std::endl;
				break;
			case MULT_OPERATION:
				// Fill with functionality
				break;
			case DIV_OPERATION:
				// Fill with functionality
				break;
			case EXIT_PROGRAM:
				std::cout << "Thanks for testing this thing." << std::endl;
				break;
			default:
				std::cout << "I think that I can't do that, yet" << std::endl;
				break;
		}
	}while(operation != EXIT_PROGRAM);	
	return 0;
}
