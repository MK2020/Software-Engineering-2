/*
 * modulocounter_subclass.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef MODULOCOUNTER_SUBCLASS_H_
#define MODULOCOUNTER_SUBCLASS_H_


#include "counter.h"
#include <iostream>
using namespace std;
     
//ModuloCouter inherits from Counter
class ModuloCounter : public Counter
{
public:
	ModuloCounter (int m = 0);
	bool increment();
	//for polymorphism????
	//virtual void increment();
    //friend ostream& operator<< (ostream& out, const int& m);


private:
	int modulo;

};


#endif /* MODULOCOUNTER_SUBCLASS_H_ */
