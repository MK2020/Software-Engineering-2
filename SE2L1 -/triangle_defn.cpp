/*
 * triangle_defn.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: mwanahusssein
 */

#include "point.hpp"
#include "triangle.hpp"

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3){
	a = p1;
	b = p2;
	c = p3;

}


void Triangle::translate(const Point& p){
	a.translate_point(p);
	b.translate_point(p);
	c.translate_point(p);
}


double Triangle::perimeter(){
	return(a.distance_points(b) + b.distance_points(c) + c.distance_points(a));
}
