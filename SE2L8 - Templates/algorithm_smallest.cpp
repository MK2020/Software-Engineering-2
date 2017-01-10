/*
 * algorithm_smallest.cpp
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */
//
//#include <iostream>
//#include <vector>
//#include <fstream>
//#include "point3.h"
//#include "smallest_templates.h"
//
//using namespace std;
//
//int main()
//{
//
//	vector<int>v;
//	vector<Point>vp;
//	ifstream infile1("random_no.txt");
//	ifstream infile2("random_points.txt") ;
//
//
//	int rn;
//
//	while(infile1 >> rn){
//		v.push_back(rn);
//	}
//
//	double x, y;
//	while(infile2 >> x >> y){
//		Point tmp(x,y);
//		vp.push_back(tmp);
//	}
//
//	int small_no = smallest(v);
//	cout<<" the vector has these values: "<<endl;
//	print_vector(v);
//	cout<<" the smallest value in this vector is index "<<small_no
//			<<"  the value is " << v[small_no]<<"\n";
//
//	cout<<" the vector of POINTS has these values: "<<endl;
//
//for(int i = 0 ; i < vp.size(); i++)
//{
//	//operator<<(cout , vp[i] );
//	cout<<vp[i]<<endl;
//}
//
//cout<<"this is algo..."<< *smallest_algo(vp.begin(), vp.end());
//
////cout<<"the smallest value in this vector of POINTS is index  "<< small_point<<
////		" the point is " << small_point<<endl;
//
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
