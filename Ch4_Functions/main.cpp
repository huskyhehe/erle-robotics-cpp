#pragma once
#include <iostream>

using namespace std;

/*
* Write a program that ask for two numbers, compare them and show the maximun.
Declare a function called max_two that compares the numbers and returns the maximun.
*/
int max_two() {
	int a, b;
	cin >> a >> b;
	return a >= b ? a : b;
}

/*
* Write a program that asks the user for an integer number 
and find the sum of all natural numbers upto that number.
*/
int upto_sum() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	cout << max_two() << endl;
	cout << upto_sum() << endl;
	return 0;
}
