#include <iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(): length_(0), width_(0) {}

Rectangle::Rectangle(int l, int w): length_(l), width_(w) {}

void Rectangle::setLength(int l) {
	length_ = l;
}

void Rectangle::setWidth(int w) {
	width_ = w;
}

int Rectangle::getLength() {
	return length_;
}

int Rectangle::getWidth() {
	return width_;
}

int Rectangle::area() {
	return length_ * width_;
}

void Rectangle::display() {
	cout << "length: " << length_ << "width: " << width_ << endl;
	cout << "area: " << area() << endl;
}
