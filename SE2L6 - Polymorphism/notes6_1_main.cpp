/*
 * stopwatch_main1.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#include<iostream>
#include "counter.h"
#include "modulocounter_sub.h"
using namespace std;

int main()
{

Counter c;

ModuloCounter mc(2);

cout<<"how long do you want to your counter to count? "<<endl;
int count_time;
cin>>count_time;

for (int i = 0; i < count_time; i++){
	c.increment();
}
for (int i = 0; i < count_time; i++){
	mc.increment();
}

cout<<c<<endl;
cout<<mc<<endl;
//even after using str() in modulocounter it still does print modulo...
return 0;
}


