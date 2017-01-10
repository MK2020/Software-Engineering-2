/*
 * intvector_defn.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */
#include "intvector.h"
#include <iostream>
using namespace std;

intvector::intvector()
{
    v = new int[1];
    d_size = 0;
    d_capacity = 1;

}

//copy constructor
intvector::intvector(int size)
{
    d_size = size;
    d_capacity = d_size;
    v = new int[d_capacity];//declare the memory area dynamically

    for(int i = 0 ; i < size; i++){//initialize the vector to 0
        v[i]=0;
    }
}

void intvector::push_back(int n)
{
    if(d_capacity == d_size){
    //creating a new vector with twice the capacity
        d_capacity = 2*d_capacity;
        int* tmpv = new int[d_capacity];

        for(int i = 0 ; i < d_size; i++){
            tmpv[i] = v[i];
            //copying elements from the first vector (v) to the new vector (tmpv) with twice the capacity
        }
        delete[] v; //deallocate all the memory area
        v = tmpv;

    }
    v[d_size] = n;//what is this DOING?
    d_size++;//increment the d_size as you put elements in

}

//return (v+i) = address to type int* but in main we just say intv.at_pointer(i)) to get the address why? why would the type int* give me the address
 int* intvector::at_pointer(int i )
  {
   return (v+i);
  //i is the offset each of i makes the address value increase by 4
  // or return &v[i];
  //i is address of the pointer when capacity increases it changes completely then when there is capacity
  //it increases by 4 (i.e contiguous memory locations are occupied as long as there is capacity
  }

//return v[i] = value to type int& but in the main we just say intv.at_reference(i) to get the value why? why would the type int& return the value? why would we assign it to thus type? could it have been just int?
int& intvector::at_reference(int i )
{
	return *(v+i);
    // or return v[i];
    //is returning a name to a reference so intv.at_reference(i) i get the value in index i
    //are we saying that int& is a value?

}

int intvector::size() const
{
    return d_size;
}

int intvector::capacity() const
{
    return d_capacity;
}

//destructor
intvector::~intvector()
{
    delete[] v;
    cout<<"I am deleting here!"<<endl;
}

int& intvector::operator [](int i)
{

    return v[i];
    //returning the address to the where the pointer v[i] is pointing to

}

const int& intvector::operator [](int i) const
{
    return v[i];
}
//copy constructor
intvector::intvector(const intvector& iv)
{
	v = new int[iv.d_size];
	for(int i = 0; i<iv.d_size; i++){
		v[i] = iv[i];
	}

	d_size = iv.d_size;
	d_capacity = iv.d_capacity;


}

//assignment operator
intvector& intvector::operator=(const intvector& iv)//returning address of current pointer
{
    if(&iv != this){//if pointer iv is not equal to the current pointer ie itself
        delete [] v;
        v = new int[iv.d_size];

        for(int i = 0; i < iv.d_size; i++)
        {
            v[i] = iv[i];
        }

        d_size = iv.d_size;
        d_capacity = iv.d_capacity;
    }

    return *this;
    //returning the address of the pointer this (current pointer)

}

/*Add a member function find() which takes in input an integer
 * and return the index of its first occurrence in the intvector or −1 if not found
 */

int intvector::find(const int& inta){

int theindex = -1;

	for(int i = 0 ; i < d_size; i++)
	{
		if( inta == v[i]){
			theindex = i;
			return theindex;
		}
	}

	return theindex;

}


