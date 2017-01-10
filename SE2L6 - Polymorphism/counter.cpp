/*
 * counter.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#include <sstream>
#include "counter.h"
using namespace std;


//using initialization list - default constructor
Counter::Counter() : count(0){}


void Counter::increment()
{
	count++;
}

//incorrect because only constructor take base initializers and since this member function doesnt take an argument you cant use a  initialization list
//void Counter::reset():count(0){}

void Counter::reset()
{
	count = 0;
}
int Counter::get_count() const
{
	return count;
}


ostream& operator<<(ostream& out, const Counter& c)
{
	//out<<c.count;
	//instead we have

	out<<c.str();
	return out;
	//cant have c.modulo as modulo is only in ModuloCounter hence we use str instead of overloading <<
}
//accesses member data directly, less useful, no abstraction
//better to use example below as can be used for all the subclasses and changed easily



string Counter::str() const
{
	stringstream ss;
	ss<<count;
	return ss.str();

}
