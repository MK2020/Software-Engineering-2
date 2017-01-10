/*
 * point_defn.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: mwanahusssein
 */

#include "point.hpp"
#include "triangle.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include<cmath>
using namespace std;

Point::Point (){
        x = 0;
        y = 0;
        dfo = sqrt( pow(x, 2) + pow(y,2));

}
//class function
Point::Point(double x_in, double y_in){

        x = x_in;
        y = y_in;
        dfo = sqrt( pow(x, 2) + pow(y,2));
}

//type class function
double Point::get_x(){
    return x;
}

double Point::get_y(){
    return y;
}

Point Point::get_point(){
	return Point(x,y);
}
double Point::get_dfo(){
	return dfo;
}


double Point::set_x(double x_in){
	x = x_in;
	return dfo = sqrt( pow(x, 2) + pow(y,2));
}

double Point::set_y(double x_in){
	y = x_in;
	return dfo = sqrt( pow(x, 2) + pow(y,2));
}


double Point::set_point(Point p){
	x = p.x;
	y = p.y;
	return sqrt( pow(x, 2) + pow(y,2));
}
double Point::distance_origin(){
    return sqrt( pow(x, 2) + pow(y,2));
}

double Point::distance_points(Point p1){
    return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
}

void Point::symmetry_origin(Point p2){
     x= -p2.x;
     y= -p2.y;
     dfo = sqrt( pow(p2.x, 2) + pow(p2.y,2) );
}

void Point::translate_point(const Point& tpoint){

	x = x + tpoint.x;
	y = y + tpoint.y;

}


//void Triangle::print_points(Point p1, Point p2, Point p3){
//	cout<<"( "<<p1.get_x()<<" ,"<<p1.get_y()<<" )"<<endl;
//	cout<<"( "<<p2.get_x()<<" ,"<<p2.get_y()<<" )"<<endl;
//	cout<<"( "<<p3.get_x()<<" ,"<<p3.get_y()<<" )"<<endl;
//
//}







