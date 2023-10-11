#include <iostream>
#include <string>

using namespace std;

/*
* Create an array that can hold ten integers, and get input from user. 
Display those values on the screen, and then prompt the user for an integer. 
Search through the array, and count the number of times the item is found.
*/
void exercise1() {
	cout << "Enter ten numbers:" << endl;
	int arr[10];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cin >> arr[i];
	}
	
	cout << "The list is: ";
	for (int ele : arr) {
		cout << ele << " ";
	}
	cout << endl;

	cout << "Enter the number you want to search:";
	int target;
	int count = 0;
	bool found = false;
	cin >> target;
	for (int ele : arr) {
		count++;
		if (ele == target) {
			found = true;
			cout << "Find it using " << count << " times" << endl;
		}
	}
	if (!found) {
		cout << "Not found" << endl;
	}
}

/*
* Write a program that asks for an index and a number. 
Then it includes the number at the indicated index of the array ={1,2,3,4,5,6} 
and moves a position forward (from u to u+1) each element after the selected index.
*/
void exercise2() {
	int arr[6] = { 1,2,3,4,5,6 };
	int index, num;

	cout << "Enter the index: ";
	cin >> index;

	if (index < 0 || index >= 6) {
		cout << "Invalid index. Please enter a valid index." << endl;
	}

	cout << "Enter the number: ";
	cin >> num;

	for (int i = 5; i > index; i--) {
		arr[i] = arr[i - 1];
	}

	arr[index] = num;

	cout << "Modified Array: ";
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void reverse_str1() {
	cout << "Enter a string: " << endl;
	string input;
	getline(cin, input);

	string res;
	for (int i = input.length() - 1; i >= 0; i--) {
		res += input[i];
	}
	cout << "Reversed string: " << res << endl;
}

void reverse_str2() {
	cout << "Enter a string: " << endl;
	string input;
	getline(cin, input);

	reverse(input.begin(), input.end());
	cout << "Reversed string: " << input << endl;
}

int main() {
	exercise1();
	exercise2();
	reverse_str1();
	reverse_str2();
	return 0;
}
