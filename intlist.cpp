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
	Node* curr = head;
	int sum = 0;
	while(curr){
		sum += curr->info;
		curr = curr->next;
	}
	return sum;
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
	Node* curr = head;
	int maxVal = 0;
	if(head){
		maxVal = head->info;
		curr = head->next;
	} else{
		return maxVal;
	}
	while(curr){
		if(curr->info > maxVal){
			maxVal = curr->info;
		}
		curr = curr->next;
	}
	return maxVal;
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
	if (count() == 0){
		return 0;
	}
	return sum() / count();
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
	int count = 0;
	Node* curr = head;
	while(curr){
		count++;
		curr = curr->next;
	}
	return count;
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

