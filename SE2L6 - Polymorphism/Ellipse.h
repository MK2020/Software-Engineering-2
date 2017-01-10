/*
 * Ellipse.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef ELLIPSE_H_
#define ELLIPSE_H_


class Ellipse
{
public:

	Ellipse(double i_x_axis, double i_y_axis) :
	x_axis(i_x_axis), y_axis(i_y_axis){}

	//this makes the ellipse mutable as you can change the axes at any time using this member function

	void set_axes(double i_x_axis, double i_y_axis)
	{
		x_axis = i_x_axis;
		y_axis = i_y_axis;
	}

private:
	double x_axis;
	double y_axis;



};


#endif /* ELLIPSE_H_ */
