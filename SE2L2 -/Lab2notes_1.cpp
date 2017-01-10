/*
 * Lab2notes_1.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: mwanahusssein
 */

#include<iostream>
#include<vector>
#include "point2.h"
#include "points_def2.cpp"
using namespace std;

int main(){
    int duplicates = 0;
    double x, y;
    vector<Point> vp;
    do{
        cin>>x>>y;
        Point p1(x,y);
        cout<< "Your point is "<<p1.get_x()<<" "<<p1.get_y()<<endl;
        int i = 0;
        bool found = false;
        while(!found && i<vp.size()){
            if(p1==vp[i]){
                found = true;
                cout<< "duplicate found!" <<endl;
                duplicates++;
            }
            i++;
        }
        vp.push_back(p1);
    }while(!((x==0)&&(y==0)));
    cout<<"you have entered "<<duplicates << " duplicates"<<endl;
    return 0;
}


