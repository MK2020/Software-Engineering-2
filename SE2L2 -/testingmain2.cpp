/*
 * testingmain2.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: mwanahusssein
 */
#include<iostream>
#include"point2.h"
#include"points_def2.cpp"
#include<vector>
#include<fstream>
#include<cstdlib>

using namespace std;


int main(){
    Point p1(1,1);
    Point p2(1,1);
    Point p3(1,2);

    bool x = (p1==p2);
    cout<<"x=" <<x<<endl;
    bool y = (p2==p3);
    cout<<"y=" <<y<<endl;
    bool z = p3 < p1;
    cout<<"z= "<<z<<endl;
}




