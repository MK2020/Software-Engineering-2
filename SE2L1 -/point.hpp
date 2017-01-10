/*
 * point.hpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */

#ifndef POINT_HPP_
#define POINT_HPP_


class Point {

private:
        double x;
        double y;
        double dfo;


public:

        //double distance;

        //default constructor
        Point();

        //overloaded constructor
        Point(double x_in, double y_in);

        //getters
        double get_x();
        double get_y();
        double get_dfo();
        Point get_point();

        double distance_origin();
        double distance_points(Point p1);
        void symmetry_origin(Point);
        void print(Point);//change this to a string str
        void translate_point(const Point&);

        //setters
        double set_x(double x_in);
        double set_y(double y_in);
        double set_point(Point);
        double distance_eqn(double eqn);// double x_in, double y_in);
        double furthestfo();






};




#endif /* POINT_HPP_ */
