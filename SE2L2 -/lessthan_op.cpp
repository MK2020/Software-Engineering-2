/*
 * lessthan_op.cpp
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

int closest (vector<Point>& vect);

int main(){
    vector<Point> vp;


    ifstream inputfile;
    inputfile.open("Vecttext.txt");
    if(!inputfile.is_open()){
        cout<<"could not open input file"<<endl;
        exit(EXIT_FAILURE);
    }

    Point p1;
    double xtemp;
    double ytemp;
    while(inputfile>>xtemp>>ytemp){
        p1.set_x(xtemp);
        p1.set_y(ytemp);
        vp.push_back(p1);
    }


    /*Point p1(3, 3);
    Point p4(2,2);
    Point p2(5,5);
    Point p3(1,1);

    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);*/


    cout<<"In the vector you have "<<endl;
    for(int k = 0; k<vp.size(); k++){
    	Point one = vp[k];
        cout<<one.get_x()<<" "<<one.get_y()<<endl;
    }

    //cout<<(point1<point2)<<endl;

    int z = closest(vp);
    cout<<"The index of the smallest number in the vector is "<<z<<endl;
}

int closest (vector<Point>& vect){
    int i = 0;
    int a = 1;
    cout<<"The size of the vector is "<<vect.size()<<endl;
    for(int j = 0; j<vect.size()-1; j++){
    	Point ivect = vect[i];
		Point iplus1 = vect[i+a];
        cout<<"j="<<j<<endl;

          if((i+a)<vect.size()){

            if (((vect[i])<(vect[i+a]))){//using the overloaded < operator to find less of two points


                cout<<"I am comparing "<<ivect.get_x()<<" and "<<iplus1.get_x()<<" in the if function";
                cout<<"i="<<i<<endl;
                cout<<"a="<<a<<endl;
                a++;
                cout<<"New a is"<<a<<endl;
            }
            else{
                cout<<"I am comparing "<<ivect.get_x()<<" and "<<iplus1.get_x()<<" in the else function";
                cout<<"i="<<i<<endl;
                cout<<"a="<<a<<endl;
                i=i+a;
                a=1;
                cout<<"New i is "<<i<<endl;
                cout<<"New a is "<<a<<endl;

            }
          }
    }
    return i;
}





