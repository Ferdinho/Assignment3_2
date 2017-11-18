/*
 * Customer.cpp
 *
 *  Created on: Nov 11, 2017
 *      Author: ferdinand tembo
 */

#include "Customer.h"

Customer::Customer() {

	firstname ="";
	lastname = "";
}

string Customer::getName(){
	stringstream s;
	s<<firstname<<" "<<lastname;
	return s.str();
}

ostream& operator<<(ostream &out, const Customer &Customer){
	    			out<<Customer.firstname<<" "<<Customer.lastname<<endl;
	    				return out;
}

Customer::~Customer() {
	// TODO Auto-generated destructor stub
}


