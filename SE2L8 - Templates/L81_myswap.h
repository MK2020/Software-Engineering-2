/*
 * L81_myswap.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef L81_MYSWAP_H_
#define L81_MYSWAP_H_

template <class Type>

void my_swap(Type& a, Type& b)
{
	Type c;

	c=a;
	a=b;
	b=c;
}



#endif /* L81_MYSWAP_H_ */
