/*
 * point5.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef POINT5_H_
#define POINT5_H_

#include<iostream>
#include <vector>
using namespace std;

class Point{


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
        ~Point();

        //getters
        double get_x();
        double get_y();
        double get_dfo();
        Point get_point();

        double* get_pointx();
        const double* get_pointx_const();

        //member functions

        friend bool operator==(const Point& p1, const Point& p2);
        double member_point( vector<Point>&, Point&, bool&);//what would happen if i had const vector<Point>
        double member_point_unordsearch(vector<Point>&, Point&);
        double member_point_binsearch(vector<Point>&, Point&);
        void pointdup(vector<Point>&, vector<Point>&, vector<Point>&, bool&);
        double distance_origin();
        double distance_points(const Point& p1) const;
        void symmetry_origin(Point);
        void symmetry_origin2();
        void print_point();
        void print(Point);
        void print2();
        void translate_point(const Point&);

        //setters
        double set_x(double x_in);
        double set_y(double y_in);
        double set_point(Point);
        double distance_eqn(double eqn);// double x_in, double y_in);
        double furthestfo();


};




#endif /* POINT5_H_ */
