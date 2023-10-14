#pragma once

/*
* Write a class having two private variables 
and one member function which will return the area of the rectangle.
*/
class Rectangle {
private:
	int length_;
	int width_;
public:
	Rectangle();
	Rectangle(int l, int w);
	void setLength(int l);
	void setWidth(int w);
	int getLength();
	int getWidth();
	int area();
	void display();
};

