#pragma once

/*
* Write a c++ class called 'student' with

Data members:
name(char type),

marks1,marks2 (integer type)

The program asks the user to enter name and marks. 
Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.
*/
class Student {
public:
	char name;
	int mark1;
	int mark2;
	Student(char n, int m1, int m2);
	double calc_media();
	void display();
};