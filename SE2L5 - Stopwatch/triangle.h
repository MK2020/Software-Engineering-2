/*
 * triangle.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "point5.h"

class Triangle
{
private:
	Point a;
	Point b;
	Point c;
public:

	//constructor
	Triangle(const Point& in_a, const Point& in_b, const Point& in_c);

	//memeber functions;
	double perimeter() const;
	void translate (const Point& p);
	void print_points();

};



#endif /* TRIANGLE_H_ */
