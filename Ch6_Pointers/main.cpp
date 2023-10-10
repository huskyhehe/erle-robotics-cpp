#include <iostream>
using namespace std;

/*
* Take input in variable and display same value by pointer.
*/
void exercise1() {
	cout << "Enter a value: ";
	int val;
	int* ptr_val = &val;
	cin >> val;
	cout << "The value you entered is: " << *ptr_val << " stored in the address " << ptr_val;
}

/*
* Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
* There are also two integer pointers named ptrA and ptrB. 
* Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
*/
void exercise2() {
	int a;
	int b;
	int* ptrA = &a;
	int* ptrB = &b;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	// int c = &a;	// error
	cout << "Value that ptrA point to is: " << *ptrA << " stored in the address " << ptrA << endl;
	cout << "Value that ptrB point to is: " << *ptrB << " stored in the address " << ptrB << endl;
}


/*
* Write a program to find the max of an integral data set. 
* The program will ask the user to input the number of data values in the set and each value. 
* The program prints on screen a pointer that points to the max value.
*/
void exercise3() {
	cout << "Enter the number of data values: ";
	int n;
	cin >> n;

	cout << "Enter each value: " << endl;
	// int dataset[n]; will get error
	// use dynamic memory allocation(e.g., new operator) to create an array of integers with a size determined by n
	int* ptr_dataset = new int[n];			
	int* ptr_max = ptr_dataset;			// point to the first element of the dynamically allocated array

	for (int i = 0; i < n; i++) {
		cin >> ptr_dataset[i];
		cout << &ptr_dataset[i] << endl;
		if (ptr_dataset[i] > *ptr_max) {
			ptr_max = &ptr_dataset[i];
		}
	}
	cout << "Max value is: " << *ptr_max << ", and its address is: " << ptr_max;

	// release the dynamically allocated memory using delete[] to avoid memory leaks
	delete[] ptr_dataset;
}


/*
* Given the string "A string." 
Print on one line the letter on the index 0, the pointer position and the letter t. 
undate the pointer to pointer +2. 
Then, in another line print the pointer and the letters r and g of the string (using the pointer).
*/
void exercise4() {
	string a = "A string.";
	char* ptr0 = &a[0];
	cout << "The letter on the index 0 is " << *ptr0 << " with the address of " << ptr0 << endl;
	cout << "The letter t";
	ptr0 += 2;

}


int main() {
	int number;
	cout << "Enter the exercise number you want to practice: ";
	cin >> number;
	switch (number) {
		case(1): {
			exercise1();
			break;
		}
		case(2): {
			exercise2();
			break;
		}
		case(3): {
			exercise3();
			break;
		}
		default:
			break;
	}
	return 0;
}

