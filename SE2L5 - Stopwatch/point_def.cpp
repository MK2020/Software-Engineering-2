/*
 * point_def.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */


#include "point5.h"
#include <iostream>
#include <sstream>
#include <string>
#include<cmath>
#include <vector>
using namespace std;

Point::Point ()
{
        x = 0;
        y = 0;
        dfo = sqrt( pow(x, 2) + pow(y,2));

}

//class function
//overloaded constructor
/*Point::Point(double x_in, double y_in){

        x = x_in;
        y = y_in;
        dfo = sqrt( pow(x, 2) + pow(y,2));
}*/
//using initialization list

Point::Point(double x_in, double y_in) : x(x_in) , y(y_in), dfo(sqrt( pow(x, 2) + pow(y,2))) {}

Point::~Point()
{
		cout<<"Point "<<x<<" "<<y<<" is leaving "<<endl;
}


double* Point::get_pointx()
{
	return &x;

}

const double* Point::get_pointx_const()
{
	return &x;

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

void Point::print_point(){
	cout<<"( "<<x<<" ,"<<y<<" )"<<endl;
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

double Point::distance_points(const Point& p1) const{
    return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
}

void Point::symmetry_origin(Point p2){
     x= -p2.x;
     y= -p2.y;
     dfo = sqrt( pow(p2.x, 2) + pow(p2.y,2) );
}
void Point::symmetry_origin2(){

     x= -x;

     y= -y;

     dfo = sqrt( pow(x, 2) + pow(y,2) );

}
bool operator==(const Point& p1, const Point& p2){
    return ((p1.x==p2.x)&&(p1.y==p2.y));
}

void Point::translate_point(const Point& p)
{
	x = x + p.x;
	y = y + p.y;
}




