#include <iostream>

int main() {

	int userInt;
	std::cout << "Please type in an integer: ";
	std::cin >> userInt;
	std::cout << "\n";
	getchar();

	for (int i = 0; i <= userInt; i++) {
		if (i % 2) {
			std::cout << i << " is even!" << std::endl;
		}
		else {
			std::cout << i << " is odd!" << std::endl;
		}
	}
}