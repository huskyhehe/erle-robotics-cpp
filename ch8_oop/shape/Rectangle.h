#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle: public Shape {
public:
	Rectangle(double w, double h);
	double area() override;
	void display() override;
};