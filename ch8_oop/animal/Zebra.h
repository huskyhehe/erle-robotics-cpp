# include "Animal.h"

class Zebra : public Animal {
protected: 
	string birthplace;
public:
	void set_value(const string& n, int a, const string& b);
	void display();
};