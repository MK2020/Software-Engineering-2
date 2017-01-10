/*
 * smalelst_templates.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef SMALLEST_TEMPLATES_H_
#define SMALLEST_TEMPLATES_H_

#include <iostream>
#include <vector>
using namespace std;

template <class ForwardIterator>
  ForwardIterator smallest_algo(ForwardIterator first, ForwardIterator last )
{
  if (first==last) return last;
  ForwardIterator smallest = first;

  while (++first!=last)
    if (*first<*smallest)    // or: if (comp(*first,*smallest)) for version (2)
      smallest=first;
  return smallest;
}
//returns a pointer

template <class T1>
int smallest(const vector<T1>& a)
{
	T1 smallest = a[0];
	int index ;

for(int i = 0; i < a.size(); i++){

	if(a[i] < smallest){
		smallest = a[i];
		index = i;
	}

}
return index;
}

template <class T3>
T3 smallest_T3(const vector<T3>& a)
{
	T3 smallest = a[0];

for(int i = 0; i < a.size(); i++){

	if(a[i] < smallest){
		smallest = a[i];
	}

}
return smallest;
}

template <class T2>
void print_vector(const vector<T2>& v){

	typename vector<T2>::const_iterator it;
	for(it = v.begin(); it != v.end();  ++it)
	{
		cout<<*it<<endl;
	}
}



#endif /* SMALLEST_TEMPLATES_H_ */
