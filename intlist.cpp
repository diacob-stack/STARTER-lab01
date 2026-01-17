// intlist.cpp
// Implements class IntList
// Dan Iacob, 1/16/2026

#include "intlist.h"

#include <iostream>
using std::cout;

// copy constructor
IntList::IntList(const IntList& source) {
}

// destructor deletes all nodes
IntList::~IntList() {
    //IMPLEMENT THIS
}


// return sum of values in list
int IntList::sum() const {
    return 0; // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the list; false if not
bool IntList::contains(int value) const {
	Node *temp = head; 
	while(temp){
		if(temp->info == value){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

// returns maximum value in list, or 0 if empty list
int IntList::max() const {
    return 0; // REPLACE THIS NON-SOLUTION
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
    return 0.0; // REPLACE THIS NON-SOLUTION
}

// inserts value as new node at beginning of list
void IntList::push_front(int value) {
	Node * n = new Node;
	n->info = value;
	n->next = head;
	head = n;

	if (tail == nullptr){
		tail = n;
	}
}

// append value at end of list
void IntList::push_back(int value) {
	Node* n = new Node;
	n->info = value;       
	n->next = nullptr;

	if(head == nullptr){
		head = n;
		tail = n;
	} else {
		tail->next = n;
		tail = n;
	}
}

// return count of values
int IntList::count() const {
   //IMPLEMENT THIS
   return 0;
}


//Assignment operator should copy the list from the source
//to this list, deleting/replacing any existing nodes
IntList& IntList::operator=(const IntList& source){
    //IMPLEMENT
    return *this;
}

// constructor sets up empty list
IntList::IntList(){ 
	head = nullptr;
	tail = nullptr;
}


// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// print values enclose in [], separated by spaces
void IntList::print() const {
    Node *n = head;
    cout << '[';
    while (n) {
        cout << n->info;
        if (n->next)
            cout << " ";
        n = n->next;
    }
    cout << ']';
}

