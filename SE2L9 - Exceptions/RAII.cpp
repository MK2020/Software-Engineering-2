/*
 * RAII.cpp
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#include "RAII.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


Lockdb::Lockdb()
{

ifstream infile(".lockdb");

	if(infile.is_open())
	{
		status = false;
		cout<<"resourse busy"<<endl;
	}
	else{
		ofstream ofile(".lockdb");
		if(!ofile.is_open())
		{
			status = false;
			throw runtime_error("couldn't lock resource");
		}
		status = true;
		cout<<"resource is locked"<<endl;
	}
}

Lockdb::~Lockdb()
{

	cout<<"destructor"<<endl;
	if(status)//status is true i.e the resource is locked
	{
		remove(".lockdb");
		cout<<"resource unlocked"<<endl;
	}



}


bool Lockdb::get_status()
{

	return status;

}

