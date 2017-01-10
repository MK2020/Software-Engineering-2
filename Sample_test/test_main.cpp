/*
 * test_main.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: mwanahusssein
 */


#include <iostream>
#include "Shapes.h"

#include <vector>
#include <fstream>
#include <sstream>
#include <list>

using namespace std;


int main()
{

cout<<"here"<<endl;

string filename1 ="triangles.txt";
string filename2 = "circles.txt";

ifstream infile1, infile2;

list<Triangle> triangles;
list<Circle> circles;


infile1.open(filename1.c_str());

if(!infile1.is_open())
{
	cout<<"could not open "<<filename1<<endl;
	//exit code
}

double tmp1x, tmp1y, tmp2x, tmp2y, tmp3x, tmp3y;

while(infile1 >> tmp1x >> tmp1y >> tmp2x >> tmp2y >> tmp3x >> tmp3y){

	Point tmp1(tmp1x,tmp1y), tmp2(tmp2x, tmp2y), tmp3(tmp3x,tmp3y);

	//try{

	Triangle T1(tmp1, tmp2, tmp3);
	triangles.push_back(T1);

//	}
//	catch(const logic_error& e){
//		cout<<"you are trying to construct a WRONG triangle!"<<e.what()<<endl;
//
////closing the file stream
//		infile1.close();
//	}
}

double radius;

infile2.open(filename2.c_str());
if(!infile2.is_open())
{
	cout<<"could not open "<<filename2<<endl;
	//exit code
}

double tmp4x, tmp4y;
while(infile2 >> tmp4x >> tmp4y >> radius){

	Point tmp4(tmp4x, tmp4y);
	Circle C1(tmp4, radius);
	circles.push_back(C1);

}


//creating one vector of pointers pointing to elements in both lists
//and use only this vector for the perimeter printing phase
//
//vector<Shapes*> shape;
//
//Shapes *tmp_shape;
//
//vector<Shapes*>::const_iterator it;
//
//for (int i = 0 ; i < triangles.size(); i++){
//
//	tmp_shape = &triangles[i];
//	shape.push_back(tmp_shape);
//}
//
//	for(it = shape.begin(); it != shape.end(); ++it)
//	{
//
//		tmp_shape = *it;
//	}
//
//
//


return 0;
}




