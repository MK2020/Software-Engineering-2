///*
// * device_collection.cpp
// *
// *  Created on: 27 Nov 2016
// *      Author: mwanahusssein
// */
//#include <iostream>
//#include <vector>
//#include <complex>
//using namespace std;
//
//#include "Impedance_Device.h"
//#include "Capacitor.h"
//#include "Resistor.h"
//#include "Inductor.h"
//
//int main()
//
//{
//	vector<Impedance_Device*> circuit;
//	//a vector of pointers to objects of type Impedance device
//
//	Impedance_Device *tmp_id;
//	//a single pointer to objects of type Impedance device for temporary use
//
//	char dc;
//	double tmp_rci;
//	int n_devices;
//
//	cout<<"number of devices = ";
//	cin>>n_devices;
//
//
//	for(int i = 0; i < n_devices; i++)
//	{
//		cout<<"device choice (r/c/i) = ";
//		cin>>dc;
//
//		if(dc == 'c')
//		{
//			cout<<"capacitance (F) = ";
//			cin>> tmp_rci;
//			//entering the capacitance in farads
//			tmp_id = new Capacitor(tmp_rci);
//		}
//
//		else if (dc =='i')
//		{
//			cout<<"inductance (H) = ";
//			cin>>tmp_rci;
//			tmp_id = new Inductor (tmp_rci);
//		}
//	else
//	   {
//			cout<<"resistance (Ohm) = ";
//			cin>>tmp_rci;
//			tmp_id = new Resistor(tmp_rci);
//
//		}
//
//		circuit.push_back(tmp_id);
//
//	}
//
//
//	double f;
//	cout<<"frequency = ";
//	cin>>f;
//
//	for(int i = 0 ; i <n_devices; i++)
//	{
//		cout<<"impedance " << i+1 << ": ";
//		cout<<circuit[i]->get_impedance(f*6.28)<<" Ohms";
//		//omega = f*6.28
//		//WHAT IS the difference between .member function and ->member function
//		// we use -> when circuit[i] is a pointer to an address not an actual value
//
//
//		cout<<endl;
//	}
//
//	for(int i = 0 ; i <n_devices; i++)
//	{
//		delete circuit[i];
//	}
//
//
//
//return 0;
//}
//
//
