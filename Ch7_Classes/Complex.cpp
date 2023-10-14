#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(): real(0.0), imaginary(0.0) {}

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex Complex::add(const Complex& other) {
	Complex res;
	res.real = real + other.real;
	res.imaginary = imaginary + other.imaginary;
	return res;
}

void Complex::display() {
	cout << "real: " << real << ", imaginary: " << imaginary << endl;
}
