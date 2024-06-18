#include <iostream>
#include <cmath>

class RegularPolygon {
	private:
	int nSides;
	double sideLength;
	
	public:
	RegularPolygon() {
		nSides = 3;
		sideLength = 1.0;
	}
	RegularPolygon(int sides, double length) {
		nSides = std::max(3, sides);
		sideLength = std::abs(length);
	}
	int getNSides () {
		return nSides;
	}
	void setNSides(int sides) {
		nSides = std::max(3, sides);
	}
	double getSideLength() {
		return sideLength;
	}
	void setSideLength(double length) {
		sideLength = std::abs(length);
	}
	void display() {
		std::cout << "Number of sides: " << nSides << ", Side length: " <<sideLength;
	}
	double getPerimeter() {
		return nSides * sideLength;
	}
	double getArea() {
		double pi = 3.14159265359;
		return (nSides * std::pow(sideLength, 2)) / (4 * std::tan(pi / nSides));
	}
};
int main () {
	RegularPolygon polygon1;
	RegularPolygon polygon2(6, 4.0);
	RegularPolygon polygon3(4, 7.5);
	
	polygon1.display();
	std::printf("\nPrimeter: %.3f\n", polygon1.getPerimeter());
	std::printf("Area: %.3f\n\n", polygon1.getArea());
	
	polygon2.display();
	std::printf("\nPrimeter: %.3f\n", polygon2.getPerimeter());
	std::printf("Area: %.3f\n\n", polygon2.getArea());
	
	polygon3.display();
	std::printf("\nPrimeter: %.3f\n", polygon3.getPerimeter());
	std::printf("Area: %.3f\n\n", polygon3.getArea());
	
	return 0;
}
