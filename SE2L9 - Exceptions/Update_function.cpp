/*
 * Update_function.cpp
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include "update_function.h"
using namespace std;






int main()
{

//this is the function whereby once we throw an exception from write_db we lock ourselves out
/*	try{
		update_db(10);
	}
	catch(exception e){
		cout<<"exception!"<<endl;
	}
*/
//RAII solution

	try{
		raii_update_db(10);
	}
	catch(exception e)
	{
		cout<<"exception!"<<endl;
	}

	return 0;
}


