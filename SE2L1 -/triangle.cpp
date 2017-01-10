/*
 * triangle.cpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */

#include <iostream>
#include <cmath>
#include <vector>
#include "triangle.hpp"
#include "point.hpp"
#include "point_defn.cpp"


using namespace std;


int main(){

	Point a(1,3);
	Point b(-2,-2);
	Point c(3,-1);

	Triangle one(a, b, c);

//	double perimeter;
//	perimeter  = one.perimeter(a,b,c);
//
//	cout<<"Perimeter of your triangle is: "<< perimeter<<endl;
//
//	Point trans(2,2);
//
//	one.translate(trans);
//	cout<<"this should be 3 but is : here" << (one.a).get_x() <<endl;
//    one.print_points(a,b,c);

	return 0;
}
