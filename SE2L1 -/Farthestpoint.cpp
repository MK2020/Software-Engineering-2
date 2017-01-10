/*
 * Farthestpoint.cpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */


#include<iostream>
#include<vector>
#include<cmath>
#include"point.hpp"

using namespace std;

double farpoint (vector<Point>& numbers);

int main(){

	double x, y;
	vector<Point>points;

	do{
		cin>>x>>y;
		Point p1(x,y);
		points.push_back(p1);

	}while( ! (x == 0 && y == 0));

	double indexfar = farpoint(points);

	cout<<"The point farthest from the origin is "<< "(" << points[indexfar].get_x()<< ", " <<
			points[indexfar].get_y()<<")"<<endl;


	return 0;
}


double farpoint(vector<Point>& numbers){

	double distancefarthest = 0;
	double index;

	for(int i = 0; i < numbers.size(); i++){
	double tempdist = numbers[i].get_dfo();

		if(tempdist > distancefarthest){
			index = i;
			distancefarthest = tempdist;

		}

	}

	return index;

}


