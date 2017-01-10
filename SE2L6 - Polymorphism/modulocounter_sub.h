/*
 * modulocounter.hpp
 */

#ifndef MODULOCOUNTER_H
#define MODULOCOUNTER_H

#include <iostream>
#include "counter.h"
using namespace std;

class ModuloCounter : public Counter{ /* we have inherited everything else from counter*/
public:
	ModuloCounter(int m=0); //int m = 0 is the default argument, declare it in .hpp
	//only use default arguments if the implementation is similar when you put in an argument to when you use the default
	bool increment(); //increments modulocounter
	//to output modulo
	string str() const; //string return function, ONLY redefine it if you are changing the implementation
	//HOW TO MAKE VIRTUAL DESTRUCTOR?
	virtual ~ModuloCounter() {}

private:
	int modulo; //modulo, private
};
#endif


