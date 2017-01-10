/*
 * LPD.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef IMPEDANCE_DEVICE_H_
#define IMPEDANCE_DEVICE_H_
#include <iostream>
#include <complex>
using namespace std;


class Impedance_Device
{

public:
	virtual complex<double>get_impedance(double omega) = 0;
	/* complex type requires #include <complex>
	 * real and imaginary parts are decalred as double
	 * =0 declares virtual function as purely virtual (only use subclass implementations)
	 * i.e with no base implementation
	 */

	virtual ~Impedance_Device() {}

};


#endif /* IMPEDANCE_DEVICE_H_ */
