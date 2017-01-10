///*
// * STLlist.cpp
// *
// *  Created on: 27 Nov 2016
// *      Author: mwanahusssein
// */
//
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//template <class T>
//void print_list(const list<T>& l){
//
//	typename list<T>::const_iterator it;
//	for(it = l.begin(); it != l.end();  ++it)
//	{
//		cout<<*it<<endl;
//	}
//}
//
//int main()
//{
//	list<int>li;
//
//	for( int i = 1; i < 11; i++)
//	{
//		li.push_back(i);
//	}
//
//	print_list(li);
//
//	list<int>::iterator it1 = li.begin();
//	for(int i = 0; i < 5; i++)
//	{it1++;}//increment it to 5 and insert the below number at index 5 not the list grows by 1
//	li.insert(it1, 100000);
//
//	cout<<"printing list with insertion  "<<endl;
//	print_list(li);
//
//
//return 0;
//}
//
