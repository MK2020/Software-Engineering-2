/*
 * notes_main1.cpp
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

//#include <cstdlib>
//#include <vector>
//#include "point4.h"
//using namespace std;
//
///*
// *
// */
//int main(int argc, char** argv) {
//    cout<<"main1"<<endl;
//    ifstream infile (argv[1]);
//    vector<;Point>vp;
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
//        vpt.push_back(new Point(x,y));//here we are creating a point dynamically  and pushing back.
//        //Here we don't lose our point when it comes out of the push_back scope.
//        cout<<"vpt.capacity(): "<<vpt.capacity()<<endl;
//
//        //the capacity increase by 2^n each time starting with n = 0
//        //When the capacity is less than the # of items then they are all deallocated(including the new  element that is being added)and a new vector is created
//        //with twice the capacity. When the capacity is equal to or greater than the # of items then only the latest element is deallocated
//
//    }
//
//    infile.close();
//
//    return 0;
//}
//


