#include <iostream>
#include "Rectangle.h"
#include "Student.h"
#include "Complex.h"

using namespace std;

int main()
{
	Rectangle myRec1(5, 3);
	myRec1.display();

	Rectangle myRec2;		// pay attention: it's wrong to write Rectangle myRec2();
	myRec2.setLength(6);
	myRec2.setWidth(8);
	myRec2.display();

	Student d('d', 30, 60);
	d.display();

	Complex com1(5.5, 6.6);
	Complex com2(91.2, 40.3);
	com1.add(com2);
	com1.display();

	return 0;
}
