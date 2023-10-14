/*
* Perform addition operation on complex data using class and object. 
The program should ask for real and imaginary part of two complex numbers, 
and display the real and imaginary parts of their sum.
*/
class Complex {
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double r, double i);
	Complex add(const Complex& other);
	void display();
};