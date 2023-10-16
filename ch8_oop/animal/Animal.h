#pragma once
#include <string>

using namespace std;


/*
* Write a probram with a mother class animal. 
* Inside it define a name and an age variables, and set_value() function.
* Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).
*/
class Animal {
protected:
	string name;
	int age;
public:
	Animal();
	void set_value(const string& n, int a);

	/*
	* Why use const string& name?
	* (1) Avoiding Unnecessary Copies: 
	* When you pass a const std::string&, you're passing a reference to the actual string data without making a copy. 
	* If you use string name, a copy of the string would be made when the function is called, 
	* which can be less efficient, especially for large strings.

	* (2) Data Safety: 
	* Using const string& indicates that you won't modify the animal_name parameter inside the function, 
	* which can be useful for maintaining data integrity and security.

	* (3) Avoiding Unwanted Copies: 
	* If you pass string name as a parameter and you accidentally modify name inside the function, 
	* it won't affect the original string passed to the function. 
	* By using const string&, you make it explicit that you're working with the original data.
	*/

	/*
	* Why not use const int& animal_age as a parameter?
	* It is not typically necessary for simple built-in types like int. 
	* It's more commonly used for complex types like std::string or user-defined classes.

	* The purpose of using const with a reference parameter is to indicate that the function won't modify the original value passed to it 
	* and that the function is only reading that value. 
	* However, for built-in types like int, making a copy of the value is generally inexpensive, and there's usually no need to use a reference.
	* So, you can simply use int animal_age in the set_value() function when dealing with integers, and it will work effectively. 
	( If you were working with more complex types or objects that are expensive to copy, then using const Type& (where Type is the type of object) can be beneficial.
	*/

};
