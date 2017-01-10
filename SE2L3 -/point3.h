/*
 * point3.h
 *
 *  Created on: 2 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef POINT3_H_
#define POINT3_H_

#include<iostream>
#include <vector>
using namespace std;

class Point {

private:
        double x;
        double y;
        double dfo;


public:


        //default constructor
        Point();

        //overloaded constructor
        Point(double x_in, double y_in);

        //destructor
        //~Point();

        //getters
        double get_x();
        double get_y();
        double get_dfo();
        Point get_point();

        double* get_pointx();
        const double* get_pointx_const();

        //member functions

        friend bool operator==(const Point& p1, const Point& p2);
        friend ostream& operator<< (ostream& out, const Point& cpoint);
        double distance_origin();
        double distance_points(Point p1);
        void symmetry_origin(Point);
        void print_point();
        void print(Point);
        void print2();
        void translate_point(Point);

        //setters
        double set_x(double x_in);
        double set_y(double y_in);
        double set_point(Point);
        double distance_eqn(double eqn);// double x_in, double y_in);
        double furthestfo();


};



#endif /* POINT3_H_ */
