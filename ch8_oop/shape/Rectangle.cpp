#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : Shape(w, h) {}

double Rectangle::area() {
	return width * height;
}

void Rectangle::display() {
	cout << "Rectangle area: " << area() << endl;
}