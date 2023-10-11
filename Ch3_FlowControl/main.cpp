#pragma once
#include <iostream>

using namespace std;

/*
* Write a program that checks if the angles given can make a triangle or not
*/
void exercise1() {
	int angle1, angle2, angle3, sum;
	cout << "Enter the three angles of triangle:";
	cin >> angle1 >> angle2 >> angle3;
	sum = angle1 + angle2 + angle3;
	if (sum == 180)
		cout << "It is a triangle";
	else
		cout << "This is not a triangle";
}

/*
* Write a program that prints on the screen all the even numbers up to 10.
*/
void exercise2() {
	for (int i = 0; i <= 10; i += 2) {
		cout << i << " ";
	}
	cout << endl;
}

/* 
* Initialize y=0 and x=6. 
Then write the appropiate staments to print x is greater than y on one line.
*/
void exercise3() {
	int y = 0, x = 6;
	cout << (x > y ? "True" : "False") << endl;
}

int main() {
	exercise1();
	exercise2();
	exercise3();
	return 0;
}
