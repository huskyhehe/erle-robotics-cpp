#include <iostream>
using namespace std;

/*
* Write a program that ask for a name and say hello.
*/
void exercise1() {
	cout << "Enter your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl;
}

/*
* Write a program that adds two inputed numbers.
*/
void exercise2() {
	cout << "Enter two numbers: " << endl;
	int a, b;
	cin >> a >> b;
	cout << "Sum: " << a + b << endl;
}

/*
* Write a program that evaluates the following things for two int numbers:
Sum,Diff,Product,Quotient,Remainder,Increment first num., Decrement Second num.
*/
void exercise3(int a , int b) {
	int sum = a + b;
	int diff = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	a++;
	b--;
	cout << "Sum: " << sum << endl;
	cout << "Diff: " << diff << endl;
	cout << "Product: " << product << endl;
	cout << "Quotient: " << quotient << endl;
	cout << "remiander: " << remainder << endl;
}

int main() {
	exercise1();
	exercise2();
	exercise3(8, 3);
}
