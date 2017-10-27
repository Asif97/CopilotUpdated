#include<iostream>

int division(int a, int b) {
	if (b == 0) {
		throw "nigga u stupid?";
	}
	return a / b;
}

int main() {
	int x, y;
	std::cin >> x;
	std::cin >> y;
	try {
		division(x, y);
		std::cout << division(x, y) << std::endl;
	}
	catch (const char* msg) {
		std::cout << msg << std::endl;
	}

	return 0;
}