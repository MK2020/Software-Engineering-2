/*
 * stopwatch_withoutrepetition.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef STOPWATCH_WITHOUTREPETITION_H_
#define STOPWATCH_WITHOUTREPETITION_H_
//#include <>
#include "counter.h"
//#include "modulocounter_composition.h"
#include "modulocounter_subclass.h"
using namespace std;
class Stopwatch{

	public:
		//constructor
		Stopwatch();
		//member functions
		void tick();
		void reset();
	    //friend ostream& operator<< (ostream& out, const Counter& hours, const ModuloCounter& mins, const ModuloCounter&  sec);


	private:
		Counter hours;
		ModuloCounter minutes;
		ModuloCounter seconds;



};


#endif /* STOPWATCH_WITHOUTREPETITION_H_ */
