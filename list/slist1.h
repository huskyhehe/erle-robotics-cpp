#pragma once

#include "../util/util.h" //NOTHING CAN BE ADDED
#define T int //Must use T. if we want  change to double : #define T double

/*----------------------------------------------------------------
All forward declaration
-----------------------------------------------------------------*/
class node;
class slist1;

/*----------------------------------------------------------------
class Node
-----------------------------------------------------------------*/
class node {
public:
		//Write all public functions below
		
private:
		T  data_;
		node* next_;
		//YOU CANNOT ADD ANY DATA MEMBERS
		//You can have any number of private functions here
};

/*----------------------------------------------------------------
class slist
-----------------------------------------------------------------*/
class slist1 {
public:
		//Write all public functions below
private:
		node* first_;
		node* last_;
		//YOU CANNOT ADD ANY OTHER DATA MEMBERS

		//You can have any number of private functions here
		
};


