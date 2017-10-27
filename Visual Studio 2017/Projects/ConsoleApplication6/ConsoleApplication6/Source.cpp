#include<iostream>
#include<string>

class Random {
private:
	std::string mystring;
public:
	Random() {};
	
	void setname(std::string newstring) {
		mystring = newstring;
	}
	std::string getname() {
		return mystring;
	}
};

int main() {
	Random object;
	object.setname("Asif");
	std::cout << object.getname() << std::endl;

}