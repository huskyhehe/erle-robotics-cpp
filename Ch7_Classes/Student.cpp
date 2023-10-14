#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(char n, int m1, int m2): name(n), mark1(m1), mark2(m2) {}

double Student::calc_media() {
    return static_cast<double>(mark1 + mark2) / 2.0;
}

void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Average Mark: " << calc_media() << endl;
}