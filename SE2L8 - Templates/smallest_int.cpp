/*
 * smallest_int.cpp
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;




template <class T>
void print_vector(const vector<T>& v){

	typename vector<T>::const_iterator it;
	for(it = v.begin(); it != v.end();  ++it)
	{
		cout<<*it<<endl;
	}
}

int smallest_int(const vector<int>&a);

int main()
{

	vector<int>v;
	ifstream infile("random_no.txt");

	int rn;

	while(infile >> rn){
		v.push_back(rn);
	}

	int small = smallest_int(v);
	cout<<"the vector has these values: "<<endl;
	print_vector(v);
	cout<<"the smallest value in this vector is index "<<small
			<<"the value is " << v[small]<<endl;

	return 0;
}


int smallest_int(const vector<int>&a)
{
	int smallest = 100;
	int index = 0;

for(int i = 0; i < a.size(); i++)
{
	if(a[i] <  smallest)
	{
		smallest = a[i];
		index = i;
	}



}
	return index;

}


