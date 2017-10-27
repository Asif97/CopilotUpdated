#include<iostream>

int main() {
	double investment;
	double shares;
	double profit;
	double pcntgain;
	std::cout << "How much would you like to invest?" << std::endl;
	std::cin >> investment;
	shares = floor(investment / 161.370);
	profit = (shares*(208)) - investment;
	pcntgain = (profit / investment) * 100;
	std::cout << "Money Invested:$" << investment << std::endl;
	std::cout << "Original Cost per Share:$161.37" << std::endl;
	std::cout << "Number of Shares:" << shares << std::endl;
	std::cout << "New Cost per Share:$208.0" << std::endl;
	std::cout << "Amount Gained:$" << profit << std::endl;
	std::cout << "Percentage Gain:" << pcntgain << "%" << std::endl;

	return 0;
}