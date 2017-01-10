/*
 * point2.h
 *
 *  Created on: 2 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef POINT2_H_
#define POINT2_H_
class Point{
	public:
		Point(); //Labs 1c

		Point(double x_in, double y_in); //Labs 1c - functional overloading, different inputs so fine
			//constructors (overloaded) - this means there is more than one function with the same name but different parameters
			//private: but gives error of no member named x

		double get_x();
		double get_y();
		double get_distancefo();

		double distancefromo();

		double distancefromotherpoint(Point p);

		void originsymmetric();

		void translatepoint(Point p);

		void set_x(double x_in);

		void set_y(double y_in);


		void set_point(Point p);

        friend bool operator==(const Point& p1, const Point& p2);

        friend bool operator<(Point p1, Point  p2);



	private:
		double x;
		double y;
		double distancefo;

	};




#endif /* POINT2_H_ */
