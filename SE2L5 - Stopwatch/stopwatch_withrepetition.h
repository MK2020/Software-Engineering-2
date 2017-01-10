/*
 * stopwatch.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef STOPWATCH_WITHREPETITION_H_
#define STOPWATCH_WITHREPETITION_H_
#include "counter.h"

class Stopwatch

{
public:
	//constructor
	Stopwatch();
	//member functions
	void tick();
	void reset();

private:
	Counter hours;
	Counter minutes;
	Counter seconds;




};


#endif /* STOPWATCH_WITHREPETITION_H_ */
