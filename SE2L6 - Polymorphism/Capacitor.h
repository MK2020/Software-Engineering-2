/*
 * Capacitor.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef CAPACITOR_H_
#define CAPACITOR_H_

#include <complex>
using namespace std;

class Capacitor : public Impedance_Device
{

public:
	Capacitor(double c) : capacitance (c){}
	//capacitance = c

	complex<double>get_impedance(double omega)
		{
		complex<double>impedance (0, -1/(omega*capacitance));
		return impedance;

		}

private:
	double capacitance;




};




#endif /* CAPACITOR_H_ */
