/*
 * modulocounter.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef MODULOCOUNTER_COMPOSITION_H_
#define MODULOCOUNTER_COMPOSITION_H_
#include <iostream>
#include "counter.h"
using namespace std;
class ModuloCounter
{
public:
	ModuloCounter(int m = 0);
	//These delegations must be manually specified for each member function
	void reset();
	int get_count() const;
	bool increment();
//    friend ostream& operator<< (ostream& out, Counter& );
//    friend ostream& operator<< (ostream& out, const ModuloCounter& mc);


private:
	int modulo;
	Counter c;
};





#endif /* MODULOCOUNTER_COMPOSITION_H_ */
