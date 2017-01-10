/*
 * define_own_exceptions.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef DEFINE_OWN_EXCEPTIONS_H_
#define DEFINE_OWN_EXCEPTIONS_H_

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <string>
using namespace std;


class invalid_sqrt_argument : public invalid_argument {

public:
	 invalid_sqrt_argument (const string& what) :
		invalid_argument(what) {};

};

//class invalid_argument : public logic_error
//{
//public:
//	invalid_argument(const string& what) :
//		logic_error(what) {};
//
//};

//class out_of_range : public logic_error
//{
//public:
//	out_of_range(const string& what) :
//		logic_error(what) {}
//};

#endif /* DEFINE_OWN_EXCEPTIONS_H_ */
