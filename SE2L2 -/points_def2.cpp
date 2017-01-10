/*
 * points_def2.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: mwanahusssein
 */

#include "point2.h"
#include<iostream>
#include<cmath>
using namespace std;

Point:: Point(){
	x = 0;
	y = 0;
	distancefo = 0;
}

Point:: Point(double x_in, double y_in){
	x = x_in;
	y = y_in;
	distancefo = sqrt ( pow(x, 2) + pow(y, 2));
}

double Point::get_x(){
	return x;
}

double Point::get_y(){
	return y;
}

double Point::get_distancefo(){
	return distancefo;
}


double Point::distancefromo(){
	return sqrt ( pow(x, 2) + pow(y, 2));
}

double Point::distancefromotherpoint(Point p){
	return sqrt(    (p.x-x)*(p.x-x)    +    (p.y-y)*(p.y-y)      );
}

void Point::originsymmetric(){
	x=-x;
	y=-y;
}

void Point:: translatepoint(Point p){
		x=x+p.x;
		y=y+p.y;
        distancefo = sqrt ( pow(x, 2) + pow(y, 2));
}

void Point::set_x(double x_in){
	x = x_in;
	distancefo = sqrt ( pow(x, 2) + pow(y, 2));
}

void Point::set_y(double y_in){
	y = y_in;
	distancefo = sqrt ( pow(x, 2) + pow(y, 2));
}

void Point::set_point(Point p){
	x = p.x;
	y = p.y;
	distancefo = sqrt ( pow(x, 2) + pow(y, 2));
}

bool operator==(const Point& p1, const Point& p2){
    return ((p1.x==p2.x)&&(p1.y==p2.y));
}
/*WHY DIDNT THIS WORK? IS IT BECAUSE THIS FOUND THE DISTANCE FROM
 *ORIGIN BUT NOT PARICULARLY FROM A CERTAIN CHANGE LIKE SET AND GET? IS A FUNCTION DOES THE SAME?
bool operator<(const Point& p1, const Point& p2){
        return(p1.distancefromo()<p2.distancefromo());
*/
//a point is less than another is its closer to the origin
bool operator<(Point p1, Point p2){
    return((p1.get_distancefo())<(p2.get_distancefo()));
}





