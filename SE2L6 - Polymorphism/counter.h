/*
 * counter.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef COUNTER_H_
#define COUNTER_H_
#include<iostream>
#include <string>
using namespace std;

class Counter
{
public:
	//constructors
	Counter();
	//~Counter();
	//member functions
	void increment();
	void reset();
	int get_count() const;
	//doesnt help - modulo is still not printed
	//string str() const;
	//instead we use
	//virtual string str() const;
	virtual string str() const;
	virtual ~Counter() {}


	//this says look at the redefinition of this function in Counter's subclasses
    friend ostream& operator<< (ostream& out, const Counter& c);


private:
 /*used for ModuloCounter_composition
   *or subclass but you have Counter::increment();
   */
	int count;


/*in the case of ModuloCounter_subclass	so when it does
 * Counter::increment(); in its definitions and Increment uses the *private* int count and
 * the subclass no access so we create it under the premise of *protected* so it has access to use it in the
 * above function call. So instead of Counter::increment() we use the info under increment directly and type into
 * ModuloCounter_subclass count++
 */

/*protected:
 * used of ModuloCounter_subclass
 * here you have count++ instead of Counter::increment();
 * int count;
 */
};



#endif /* COUNTER_H_ */
