/*
 * modulocounter.cpp
 *
 *  Created on: 23 Nov 2016
 *      Author: mwanahusssein
 */

/*
 * modulocounter.cpp
*
*/
#include "modulocounter_sub.h"
#include<string>
#include <sstream>
using namespace std;

ModuloCounter::ModuloCounter(int m /* = 0 */) : Counter(), modulo(m) {} //creates a counter starting at 0, modulus at input

bool ModuloCounter::increment(){ //as counter increment, but if the count is greater than the modulus need to reset. return true if reset
	Counter::increment();
	if( (modulo>0) && (get_count() >= modulo) ){
		reset();
		return true;
	}
	return false;
}

//we are refining the str() function from the version in counter
string ModuloCounter::str() const{ //as counter string, but write the modulus afterwards in brackets
	stringstream ss;
	ss<< Counter::str() <<" ("<<modulo<<")";
	return ss.str();
}





