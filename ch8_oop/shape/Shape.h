#pragma once

#include <iostream>

/*
* Write a program that defines a shape class with a constructor that gives value to width and height. 
* The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
* In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
*/

class Shape {
protected:
	double width;
	double height;
public:
	Shape(double w, double h);
	virtual double area();	
	virtual void display();
	
	/*
	* A virtual function ois a function or method whose behavior can be overridden within an inheriting class by a function with the same signature,
	* allowing for dynamic polymorphism and runtime binding. This concept is an important part of the polymorphism.
	*/
};
