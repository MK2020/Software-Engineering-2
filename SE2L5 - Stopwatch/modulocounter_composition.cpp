///*
// * modulocounter.cpp
// *
// *  Created on: 13 Nov 2016
// *      Author: mwanahusssein
// */
//
//#include "modulocounter_composition.h"
//
//
//ModuloCounter::ModuloCounter(int m ): modulo(m){}
//
//bool ModuloCounter::increment()
//{
//	c.increment();
//	if( (modulo > 0 ) && (c.get_count() >= modulo) )
//	{
//		c.reset();
//		return true;
//	}
//
//	return false;
//	//we dont need to increment the next time stage i.e seconds has not reached 60 hence increment false hence dont increment minutes
//
//}
//
//void ModuloCounter::reset(){
//	c.reset();
//}
//
//int ModuloCounter::get_count() const{
//	return c.get_count();
//}
////ostream& operator<<(ostream& out, const ModuloCounter& mc)
////{
////	out<<mc.modulo;//huh??
////	return out;
////}
