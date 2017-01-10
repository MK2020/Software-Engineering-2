/*
 * Circle.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Ellipse
{

public:
	Circle(double radius) :  Ellipse( 2* radius, 2*radius){}
	/*we  are saying that we use the same constructor of the Ellipse to construct the circle
	 * only this time the i_x_axis and i_y_axis are 2*radius of the circle
	 */


	void set_radius(double radius)
	{
		Ellipse:set_axes(2*radius, 2*radius);

	}




};
/* PROBLEMS
 * In main you might have
 * Circle c;
 * c.set_axes(15, 20); ???
 * Circle inherits set_axes from Ellipse
 *
 * So we could make Circle and Ellipse unrelated classes or have Circle and Ellipse both in heriting from a third base class eg Shape
 */



#endif /* CIRCLE_H_ */
