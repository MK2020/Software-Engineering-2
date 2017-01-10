/*
 * notes_main2.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

//#include <iostream>
//#include<vector>
//#include<cstdlib>
//#include <sstream>
//using namespace std;
//
///*
// *
// */
//int main(int argc, char** argv) {
//    cout<<"main2"<<endl;
//    ifstream infile (argv[1]); //WHAT DOES THIS DO
//    vector<Point>vp;
//    vector<Point*>vpt; //i am creating a vector of pointers of type Point
//
//    double x, y;
//
//    int i =0;
//
//    while(infile >> x >> y ) {//while in file is open extract x and y
//        i++;
//        cout<<"i: "<<i<<endl;
//        //Point tmp(x,y); Creatting a temp point and pushing it into the vector
//        //vp.push_back(tmp);
//
//        vp.push_back(Point(x,y));// once the point is pushed in the vector after that it is outside its scope.
//        cout<<"vp.capacity(); "<<vp.capacity()<<endl;
//        vpt.push_back(new Point(-x,-y));//here we are creating a point dynamically  and pushing back.
//        //Here we don't lose our point when it comes out of the push_back scope.
//        cout<<"vpt.capacity(): "<<vpt.capacity()<<endl;
//
//    }
//    //WHY ARE THE POINTS STATICLLY DECLARED DESTROYED AFTER THE THE POINTS DYNAMICALLY ALLOCATED?
//    //SURELY THE ABOVE BRACKET WAS THEIR SCOPE HENCE SHOUD BE DESTROYED FIRST??
//
//    for(int j = 0; j <vpt.size(); j++){
//        delete vpt[j];
//    }
//
//    infile.close(); resolve this error
//
//    return 0;
//}
//


