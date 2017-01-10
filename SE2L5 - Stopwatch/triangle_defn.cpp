/*
 * triangle_defn.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#include "triangle.h"

Triangle::Triangle(const Point& in_a, const Point& in_b, const Point& in_c)
{
	a = in_a;
	b = in_b;
	c = in_c;
}

 double Triangle::perimeter() const
 {
		return

			a.distance_points(b)
			+ b.distance_points(c)
			+ c.distance_points(a);

 }

void Triangle::translate(const Point& p){
	a.translate_point(p);
	b.translate_point(p);
	c.translate_point(p);
}


void Triangle::print_points(){
	a.print_point();
	b.print_point();
	c.print_point();
}
