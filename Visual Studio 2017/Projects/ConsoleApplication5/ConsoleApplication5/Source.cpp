#include<iostream>
#include<cstdlib>
#include<vector>

class Rectangle {
protected:
	int width, height;

public:
	Rectangle();
	Rectangle(int, int);
	int area() {
		return width*height;
	}
};

class Rectangle2 :public Rectangle {
public:
	Rectangle2(int a, int b) :Rectangle(a, b) {}
	int area() {
		return (2 * width*height);
	}
};

Rectangle::Rectangle() {
	width = 1;
	height = 2;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
	if (b == 0) {
		throw "Select another value";
	}
}

int main() {
	
	try {
		Rectangle object(2, 0);
		std::cout << object.area();
	}
	catch(const char* msg){
		std::cout << msg << std::endl;
	}


	return 0;
}