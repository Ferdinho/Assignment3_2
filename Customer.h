/*
 * Customer.h
 *
 *  Created on: Nov 13, 2017
 *      Author: ferdinand tembo
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_


#include <iostream>
#include <sstream>
using namespace std;


class Customer {
private :
	string firstname;
	string lastname;


public:
	Customer();

	Customer(const Customer & other){
			firstname = other.firstname;
			lastname = other.lastname;
	}

	Customer(string firstname, string lastname):firstname(firstname),lastname(lastname){};
	string getName();
	 friend ostream& operator<<(ostream &out, const Customer &Customer);

	 ~Customer();
};

#endif /* CUSTOMER_H_ */
