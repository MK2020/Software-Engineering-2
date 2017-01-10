/*
 * points_member.cpp
 *
 *  Created on: 9 Nov 2016
 *      Author: mwanahusssein
 */

#include <iostream>
#include <vector>
#include "point3.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

int member_point (vector<Point>&vectp, Point& p1, bool& ordered);
int member_point_unordsearch(vector<Point>& vectpoints, Point& p1);
int member_point_binsearch(vector<Point>& vectpoints, Point& p1);
void pointdup(vector<Point> &a, vector<Point> &b, vector<Point>&c, bool& ordered);

using namespace std;

int main(){


	vector<Point>vp1, vp2, vp3;
	ifstream inputfile1 ,inputfile2;
	ofstream outputfile;

		inputfile1.open("points1.txt");
		if(!inputfile1.is_open()){
			cout<<"could not open input file"<<endl;
			exit(EXIT_FAILURE);
		}
	    Point p1;
		double xtemp1;
		double ytemp1;
		while(inputfile1>>xtemp1>>ytemp1){
		p1.set_x(xtemp1);
		p1.set_y(ytemp1);
		vp1.push_back(p1);
		}

		cout<<"I have in vector1: "<<endl;
		for(int i = 0; i<vp1.size(); i++){
			vp1[i].print_point();
		}

		inputfile2.open("points2.txt");
		if(!inputfile2.is_open()){
			cout<<"could not open input file"<<endl;
			exit(EXIT_FAILURE);
		}
		Point p2;
		double xtemp2;
		double ytemp2;
		while(inputfile2>>xtemp2>>ytemp2){
		p2.set_x(xtemp2);
		p2.set_y(ytemp2);
		vp2.push_back(p2);
		}

		cout<<"I have in vector2: "<<endl;
		for(int i = 0; i<vp2.size(); i++){
			vp2[i].print_point();
		}
		outputfile.open("output_vector.txt");

		if(!outputfile.is_open()){
			cout<<"could not open your outputfile"<<endl;
			exit(EXIT_FAILURE);
		}

		bool is_ordered;
		pointdup(vp1, vp2, vp3, is_ordered);

		cout<<"I have in vector3: "<<endl;
		for(int i = 0; i<vp3.size(); i++){
			//vp3[i].print_point();
			//using overloaded of the operator<<
			cout <<  vp3[i] <<endl;

		}
	//will this work i feel like there more i need to do here??
		//trying to cout the output vector to a text file
		for(int i = 0; i < vp3.size(); i++){
			outputfile << vp3[i] << endl;
		}

		inputfile1.close();
		inputfile2.close();
		outputfile.close();

return 0;
}

int member_point (vector<Point>&vectp, Point& p1, bool& ordered) {
	ordered = false;


	for(int i = 0; i < vectp.size(); i++){
		if(vectp[i] ==  p1){
			ordered = true;
			member_point_binsearch(vectp, p1);
			return i;
		}
	}

	member_point_unordsearch(vectp, p1);
	return vectp.size();
	//double vsize = vectp.size();
	//return vsize:
}


int member_point_unordsearch(vector<Point>& vectpoints, Point& p1){

	for(int i = 0; i < vectpoints.size(); i++){
		if(vectpoints[i] == p1){
			return i;
		}
	}

	return vectpoints.size();
}


int member_point_binsearch(vector<Point>& vectpoints, Point& p1){
	for(int i = 0; i < vectpoints.size(); i++){
		if(vectpoints[i] == p1){
			return i;
		}
	}

	return vectpoints.size();
}
/*	int lo = 1;
	int hi = vectpoints.size();

	while(lo <= hi ){
		int middle = lo + (hi - lo)/2;
		cout<<"the lo is "<<lo<<endl;
		cout<<"hi is 4 "<<hi<<endl;
		cout<<"the middle is "<<middle<<endl;
		cout<<vectpoints[middle].get_x()<<" "<<vectpoints[middle].get_y()<<endl;
		if( vectpoints[middle].x == p1.x &&
				vectpoints[middle].y == p1.y ){
			return middle;
		}else if( vectpoints[middle].x < p1.x &&
				vectpoints[middle].y < p1.y	){
			lo = middle +1;
		}else{
			lo = middle -1;
		}
	}
	//the point we are looking for is not found
	int vsize = vectpoints.size();
	return vsize;

	//why does this work for a vector of 9 elements?
}*/


void pointdup(vector<Point>&a, vector<Point>& b, vector<Point>&c, bool& ordered){

	ordered = false;

	for(int i = 0; i < a.size(); i++){

		int temp = member_point(b, a[i], ordered);
		//this returns the size of the vector b is a[i] is not in b
		//this returns the index of the point a[i] in vector b if a[i] is found in vector b

		//i will check if the size has been returned an diff. it hasn't it means a
		//match has been found and hence i can push back a[i]

		if(temp != b.size()){
			c.push_back(a[i]);
		  }

	}
}




