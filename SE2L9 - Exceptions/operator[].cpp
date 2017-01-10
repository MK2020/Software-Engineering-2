///*
// * operator[].cpp
// *
// *  Created on: 27 Nov 2016
// *      Author: mwanahusssein
// */
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//double my_sqrt(double n);
//double my_sqrt_throw(double n);
//
//int main()
//{
//	//vector<int> v(3);
//	//cout<<v.size()<<" "<<v.capacity()<<endl;
//	//cout<<v.at(33)<<endl; this performs a range check and throws and error
////*************************************************************************************************
//	double n;
//	//double result;
//	cin>>n;
//	//result = sqrt(n);
//	//cout<<result<<endl;
////*************************************************************************************************
//
//	//cout<<my_sqrt(n)<<endl;
//	//cout<<"using throwing"<<endl;
//	//cout<<my_sqrt_throw(n)<<endl;
//	//without try and catch after using my_sqrt_throw we see error libc++abi.dylib: terminating with uncaught exception of type char const*
////*************************************************************************************************
//
//	try{
//	cout<<my_sqrt_throw(n)<<endl;
//	cout<<"it computed the square root"<<endl;
//
//	//without try and catch after using my_sqrt_throw we see error libc++abi.dylib: terminating with uncaught exception of type char const*
//	}
//	catch(const string& msg)
//	{
//	cout<<msg<<endl;
//	}
//	cout<<"and here";
//	cout<<"done"<<endl;
//
//return 0;
//}
//
//
//double my_sqrt(double n)
//{
//double result;
//
//if(n<0)
//{
//	cout<<"cannot compute square root of negative number" <<endl;
//	exit(EXIT_FAILURE);
//}
//result = sqrt(n);
//if(isnan(result))
//{
//	cout<<"cannot compute square root"<<endl;
//	exit(EXIT_FAILURE);
//}
//return result;
//
//}
//
//double my_sqrt_throw(double n)
//{
//double result;
//
//if(n<0)
//{
//	throw "cannot compute square root of negative number";
//}
//result = sqrt(n);
//
//if(isnan(result))
//{
//	throw "cannot compute square root of negative number";
//}
//return result;
//
//}
