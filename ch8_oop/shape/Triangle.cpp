#include "Triangle.h"

Triangle::Triangle(double w, double h) : Shape(w, h) {}

double Triangle::area() {
    return 0.5 * width * height;
}

void Triangle::display() {
    cout << "Triangle area: " << area() << endl;
}
