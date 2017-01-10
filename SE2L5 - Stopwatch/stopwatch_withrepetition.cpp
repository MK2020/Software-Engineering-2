/*
 * stopwatch.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */


#include "stopwatch_withrepetition.h"

#include <iostream>
using namespace std;


Stopwatch::Stopwatch(){}

void Stopwatch::reset(){
	hours.reset();
	/*hours is of type counter so when the memebr function reset is called on it the
	 * type Counter the makes the count of hours = 0
	 */
	minutes.reset();
	seconds.reset();

}

void Stopwatch::tick(){
	seconds.increment();
	if(seconds.get_count() >= 60){
		seconds.reset();
		minutes.increment();
	}

	if(minutes.get_count() >= 60){
		minutes.reset();
		hours.increment();
	}
}
