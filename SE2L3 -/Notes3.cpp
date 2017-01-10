///*
// * Notes1.cpp
// *
// *  Created on: 2 Nov 2016
// *      Author: mwanahusssein
// */
//
//#include "point3.h"
////do i really have to include this as well as point3?
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int* square (int n);
//
//
//int main(){
//	//testing the destructor
//	{
//		cout<<"a new scope begins "<<endl;
//		Point p1; //since i have not deleted this and its leaving the scope this default
//		//constructor of 0,0 will call the destructor for 0,0
//		Point* p2 = new Point(1,2);
//		//declaring a pointer p2 to point to a new point(1,2)
//		delete p2;
//		cout<<"the new scope ends"<<endl;
//	}
//
//	cout<<"goodbye!"<<endl;
//
//	//*******************************************
//
//	//pointer variables
//	int*a ;//creating a pointer a
//	int var_a;
//
//	//non-dynamic - static - stack because you can still reference via var_a
//	//let pointer a point to var_a
//	a = &var_a; // here we are making pointer a to pointer to address var_a
//
//	*a = 10;
//	cout<<*a<<endl;
//
//	//dynamically allocated - heap - can only access via the pointer
//	a = new int;
//	*a = 15;
//	cout<<*a<<endl;
//	//*******************************************
//
//	//dynamic memory allocation for objects
//
//	Point* p1 = new Point();
//	Point* p2 = new Point(1,2);
//
//	//Why are we using -> not .?
//	cout<<p1->get_x()<<" "<<p1->get_y()<<endl;
//	//What p1 is pointing to get the x of that
//	cout<<p2->get_x()<<" "<<p2->get_y()<<endl;
//	//*******************************************
//
//	//Returning a pointer to something
//	int n = 1;
//	int *sq;
//	while(n != 0){
//		cin>>n;
//		sq = square(n);
//		cout<<*sq<<endl;
//		cout<<*square(n)<<endl;
//		delete sq;//without this a memory leak would occur
//		//deallocated the memory pointed by the pointer
//	}
//	//*******************************************
//
//	//Returning a pointer to some field
//
//	Point p4(1,5);
//	//I am getting confused of what the * does in different positions
//	//i.e why arent we using -> here?
//
//	cout<<"this is point p4 x co-ord "<<*p4.get_pointx()<<endl;
//	double* change_x = p4.get_pointx();
//	*change_x = 20;
//	cout<<*p4.get_pointx() <<endl;
//
//	*( p4.get_pointx() ) = 25;
//	cout<<*p4.get_pointx() <<endl;
//	//why does is say that point 25 5 is leaving? i did not declare it dynamically?
//
//	//Returning a pointer to const to some field
//
//	Point p5(2,2);
//	cout<<"this is point p5 x co ord "<< *p5.get_pointx_const()<<endl;
//
//	//NOTE up to this point P5 is leaving first then P4 is leaving why??
//
//	//*********************************************
//
//	//Pointer to const vs const pointers
//	const Point* p6;
//	p6 = new Point();
//
//	//you have to decare and initialize together!
//	//here the value p2 is read only?
//	Point* const p7 = new Point();
//
//	return 0;
//}
//
//int* square (int n){
//	int* square_n = new int; // goes on heap
//	*square_n = n*n;
//	return square_n;
//}//local variables deallocated as soon as function terminates
