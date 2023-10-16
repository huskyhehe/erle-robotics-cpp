#include <iostream>
#include "Shape.h"

using namespace std;

class Triangle : public Shape {
public:
	Triangle(double w, double h);
	double area() override;
	void display() override;
};