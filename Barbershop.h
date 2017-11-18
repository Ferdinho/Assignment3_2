/*
 * Barbershop.h
 *
 *  Created on: Nov 13, 2017
 *      Author: ferdinandtembo
 */

/* This program will print the name of customer in a barbershop in the order they arrived ,
 * I used tow stacks.
 */

#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"
using namespace std;

class Barbershop {
	LinkedStack<Customer> s1;
	LinkedStack<Customer> s2;

public:
	void addCustomer(Customer& customer);
	Customer nextCustomer();
};

void Barbershop::addCustomer(Customer& customer){
	s1.push(customer);
}
Customer Barbershop::nextCustomer(){
 /* here I'm just poping the customer from the first stack
	to the second one */

	while(!s1.isEmpty()){
		Customer c = (s1.pop());
		s2.push(c);

	}
// here I'm just poping the next customer
	Customer nextCustomer = (s2.pop());

/* Here I'm just putting back the rest of the
 customers in the first stack again in order
 to keep the order correctly */
	while (!s2.isEmpty()){
		Customer c = (s2.pop());
		s1.push(c);
	}
	return nextCustomer;
}



