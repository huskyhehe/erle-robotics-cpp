#include "Animal.h"

Animal::Animal() : name(""), age(0) {}

void Animal::set_value(const string& n, int a) {
	name = n;
	age = a;
}
