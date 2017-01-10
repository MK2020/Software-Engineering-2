/*
 * triangle.hpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include "point.hpp"

class Triangle{
private:
	Point a;
	Point b;
	Point c;

public:
	//overloaded constructor
	Triangle(const Point&, const Point&, const Point&);
	double perimeter();
	void translate(const Point& translating_point);
	//void print_points(); change the to a string out

};




#endif /* TRIANGLE_HPP_ */
