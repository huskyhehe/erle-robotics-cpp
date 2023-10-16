#include <iostream>
#include "Zebra.h"

using namespace std;

void Zebra::set_value(const string& n, int a, const string& b) {
	name = n;
	age = a;
	birthplace = b;
}

void Zebra::display() {
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "birthplace: " << birthplace << endl;
}