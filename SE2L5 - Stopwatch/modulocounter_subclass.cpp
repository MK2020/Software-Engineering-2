///*
// * modulocounter_subclass.cpp
// *
// *  Created on: 13 Nov 2016
// *      Author: mwanahusssein
// */
//#include <iostream>
//#include "modulocounter_subclass.h"
//using namespace std;
//
///*here since modulocounter is a subclass in out default constructor we need to initialize Counter()
// * the default constructor of its base class
// */
//ModuloCounter::ModuloCounter(int m) : Counter(), modulo(m){}
//
//
////polymorphism example???
////void ModuloCounter::increment(){
////	count++;
////
////	if( (modulo > 0)  && (count>= modulo))
////	{
////		reset ();
////
////	}
////
////
////}
//bool ModuloCounter::increment(){
//	 /*when int count was private
//	 * Counter::increment();
//	 when int count is protected instead
//	 */
//	count++;
//
//	/* when int count was private
//	 * if( (modulo > 0 ) && (get_count() >= modulo) )
//	 when int count is protected instead
//	 if the count is > 60 then reset
//	 */
//
//	if(  (modulo > 0 ) && (count >= modulo) )
//	{
//		reset();
//		return true;
//	}
//
//	return false;
//}
//
//
////ostream& operator<< (ostream& out, const int& m)
////{
////	out << m.seconds() << ", " << m.minutes();
////	return out;
////
////
////}
//
//
//
//
