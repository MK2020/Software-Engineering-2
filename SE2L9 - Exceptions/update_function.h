/*
 * update_function.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef UPDATE_FUNCTION_H_
#define UPDATE_FUNCTION_H_

#include "RAII.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


void write_db(int){
	throw exception();
}
bool raii_update_db(int data)
{
	bool exit_code;

	Lockdb ldb;

	if(ldb.get_status())//if status is true i.e the resource is locked
	{
		cout<<"doing some operations"<<endl;
		write_db(data);
		exit_code = true;
	}
	else
	{
		exit_code = false;

	}
	return exit_code;

}


bool update_db (int data)
	{

	bool exit_code;
	ifstream infile(".lockdb");

	if(   infile.is_open()  )
	{
		cout<<"resource is busy"<<endl;
		infile.close();
		exit_code = false;
	}

	else{
		ofstream ofile(".lockdb");
		if(!ofile.is_open()){
			throw runtime_error("couldnt lock resource");
		}

		cout<<"resource is locked "<<endl;
		ofile.close();
		cout<<"doing some operations"<<endl;
		write_db(data);//if an exception was thrown here the instruction below for releasing the lock won't be executed!
		//hence other processes can no longer access the resource
		remove(".lockdb");
		cout<<"resource unlocked"<<endl;
		exit_code = true;

	}

	return exit_code;
}




#endif /* UPDATE_FUNCTION_H_ */
