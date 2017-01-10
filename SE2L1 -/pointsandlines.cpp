/*
 * pointsandlines.cpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */

#include<iostream>
#include<vector>
#include<cmath>
#include "point.hpp"
#include "point_defn.cpp"

using namespace std;

int main(){
	vector<double> numbers;
	double xi, yi, b;

	cout<<"Enter values for your equation and enter 0 to stop"<<endl;
	cin>>b;
	numbers.push_back(b);
	while( b != 0){
		cout<<"Enter another?"<<endl;
		cin>>b;
		numbers.push_back(b);
	}

	/* if(b != 0){
		cout<<"Enter another value:"<<endl;
		cin>>b;
		numbers.push_back(b);
	}
	*/

	cout<<"Enter your x value"<<endl;
	cin>>xi;
	cout<<"Enter your y value"<<endl;
	cin>>yi;

	Point p1(xi,yi);


	for(int i = 0; i < numbers.size(); i++){
		double equation = numbers[i];
		double result = p1.distance_eqn(equation);
		cout<<"The distance between the equation y="<<numbers[i]<<" and point"<< "the point"
				<<"is "<<result;
	}


	return 0;
}



