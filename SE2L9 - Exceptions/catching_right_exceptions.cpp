///*
// * catching_right_exceptions.cpp
// *
// *  Created on: 27 Nov 2016
// *      Author: mwanahusssein
// */
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//
//vector<int> v(3);
///*
//	try{
//		cout<<v.at(33)<<endl;
//		cout<<"the index was ok!"<<endl;
//	}
//	catch(const string& a)
//	{
//		cout<<"be careful with your bounds"<<endl;
//	}
//error seen: libc++abi.dylib: terminating with uncaught exception of type std::out_of_range: vector
//*/
//
//	try{
//		cout<<v.at(33)<<endl;
//		cout<<"the index was ok!"<<endl;
//	}
//	catch(const out_of_range& a)
//	{
//		cout<<"be careful with your bounds"<<endl;
//	}
//
//return 0;
//}
//
//
