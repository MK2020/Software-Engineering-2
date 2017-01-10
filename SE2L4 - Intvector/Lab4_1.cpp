///*
// * Lab1.cpp
// *
// *  Created on: 13 Nov 2016
// *      Author: mwanahusssein
// */
//
////that reads from a file a sequence of points and stores them into
//// a vector if point objects
//#include <iostream>
//#include <fstream>
//#include<vector>
//#include"point4.h"
//
//using namespace std;
//
//int main() {
//
//    ifstream infile("points.txt");
//    vector<Point>vp1, vp2;
//    vector<Point*>vp11;
//
//    double x, y;
////vector of point objects without temporaries
///*    int i =0;
//
//    while(infile >> x >> y ) //while in file is open extract x and y
//    {
//    	i++;
//        cout<<"i: "<<i<<endl;
//
//        vp1.push_back(Point(x,y));// once the point is pushed in the vector after that it is outside its scope.
//        cout<<"vp.capacity(): "<<vp1.capacity()<<endl;
//        cout<<"vp.size(): "<<vp1.size()<<endl;
//
//    }
//
//    for(int i=0; i<vp1.size(); i++){
//    		Point tmp = vp1[i];
//    		tmp.print_point();
//    	}
//*/
////vector of point objects with temporaries
///*    int j = 0;
//
//    while(infile >> x >> y)
//    {
//    	j++;
//    	cout<<"j: "<<j<<endl;
//    	// Creating a temp point and pushing it into the vector
//    	Point tmp(x,y);
//        vp2.push_back(tmp);
//        cout<<"vp.capacity(): "<<vp2.capacity()<<endl;
//        cout<<"vp.size(): "<<vp2.size()<<endl;
//
//    }*/
//
////creating a vector of pointers to point
//
//    int i1 = 0;
//
//    while(infile >> x >> y )
//    {
//    	i1++;
//    	cout<<"i1: "<<i1<<endl;
//    	vp11.push_back(new Point(x,y));
//    	(*vp11[i1-1]).symmetry_origin2();
//    	/*here is there is no -1 we are requesting vp11[1] which
//    	 * has not been created yet since its being done dynamically
//    	 */
//    	cout<<"vp11.capacity(): "<<vp11.capacity()<<endl;
//    	cout<<"vp11.size(): "<<vp11.size()<<endl;
//    }
//
////deallocate
///*    for(int i = 0; i<vp11.size(); i++){
//    	cout<<"deallocating..."<<endl;
//    	delete vp11[i];
//    }*/
//
////or read from the vector and default destructor does its work
//	cout<<"reading from the vector..."<<endl;
//	for(int i=0; i<vp11.size(); i++){
//		Point tmp = *vp11[i];
//		/*we are deferencing the pointer vp11[i] to
//		 * retrieve the object point in that address that vp11[i] is pointing to
//		 */
//		tmp.print_point();
//	}
//
//	infile.close();
//    return 0;
//
//}
//
//
