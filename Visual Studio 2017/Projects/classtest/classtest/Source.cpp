#include <iostream>


int main() {
	double length;
	double width;
	double perimeter;
	double rolls;
	int costofwire;
	std::cout << "please enter length:" << std::endl;
	std::cin >> length;
	std::cout << "please enter width:" << std::endl;
	std::cin >> width;
	perimeter = (width * 2) + (length * 2);
	rolls = (perimeter / 100);
	costofwire = (ceil(rolls)) * 750;
	std::cout << "Length of Fence:" << length << "m" << std::endl;
	std::cout << "Width of Fence:" << width << "m" << std::endl;
	std::cout << "Number of Roles Needed:" << ceil(rolls) << std::endl;
	std::cout << "Cost of Wire:$" << costofwire << std::endl;
	std::cout << "Vat:$" << (0.0125*costofwire) << std::endl;
	std::cout << "Total Cost:$" << (0.0125*costofwire) + costofwire << std::endl;

	return 0;
}