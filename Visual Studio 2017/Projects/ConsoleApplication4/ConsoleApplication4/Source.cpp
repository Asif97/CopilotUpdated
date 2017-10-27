#include<iostream>
#include<fstream>
#include<cstdlib>
class BMI {
protected:
	float weight, height;

public:
	BMI();
	BMI(float, float);
	float health() {
		return weight*height;
	}

};


BMI::BMI() {
	weight = 5;
	height = 5;
}

BMI::BMI(float a, float b) {
	weight = a;
	height = b;
}
class BMI2 : public BMI {
public:
	BMI2(int a, int b):BMI(a,b){}
	float health() {
		return weight*height;
	}


};

class ChildTest :public BMI {
	


};



int main(int argc, char* argv[]) {
	BMI mybmi(atof(argv[1]), atof(argv[2]));
	std::cout << mybmi.health() << std::endl;

	return 0;

}