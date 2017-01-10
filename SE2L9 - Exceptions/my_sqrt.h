/*
 * my_sqrt.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef MY_SQRT_H_
#define MY_SQRT_H_

#include <iostream>
#include <cmath>
#include "define_own_exceptions.h"
using namespace std;

double my_sqrt_throw(double n)
	{
		double result;

	if(n<0)
	{
		throw "cannot compute square root of negative number";
	}
	result = sqrt(n);

	if(isnan(result))
	{
		throw "cannot compute square root of negative number";
	}
	return result;

}

double my_sqrt(double n)
	{
	double result;

	if(n<0)
	{
		cout<<"cannot compute square root of negative number" <<endl;
		exit(EXIT_FAILURE);
	}
	result = sqrt(n);
	if(isnan(result))
	{
		cout<<"cannot compute square root"<<endl;
		exit(EXIT_FAILURE);
	}
	return result;

}

double my_sqrt_owndefn(double n)
{

	double result;
	if(n<0)
	{
		throw invalid_sqrt_argument("cannot compute square roots of negative number");
	}
result = sqrt(n);
if(isnan(result))
{
throw logic_error("cannot compute square root");
}

return result;

}

#endif /* MY_SQRT_H_ */

