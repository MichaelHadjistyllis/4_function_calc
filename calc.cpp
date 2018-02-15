
#include <iostream>

int a;
int b;
int c;
int d;

void getUserInput()
{
	std::cout << "Please input an integer to compute: " << std::endl;
	std::cin >> a;
}

int getMathematicalOperation() {

	std::cout << "To add, press 1. To subtract, press 2. To multiply, press 3. To divide, press 4" << std::endl;
	std::cin >> b;

	return b;
}

void getUserInput2() {
	std::cout << "Please input a second integer to compute: " << std::endl;
	std::cin >> c;
}

int calculateResult() {
	if (b == 1) {
		d = a + c;
	}
	if (b == 2) {
		d = a - c;
	}
	if (b == 3) {
		d = a * c;
	}
	if (b == 4) {
		d = a / c;
	}

	return d;
}

void printResult() {
	std::cout << "This is your answer: " << d << std::endl;
}
