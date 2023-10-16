#include <iostream>
#include "shape/Triangle.h"
#include "shape/Rectangle.h"
#include "animal/Zebra.h"

using namespace std;

int main() {
	Triangle triangle(4.0, 6.6);
	Rectangle rectangle(5.3, 7.7);
	triangle.display();
	rectangle.display();

	Zebra zebra;
	zebra.set_value("little zzz", 5, "Africa");
	zebra.display();
	return 0;
}