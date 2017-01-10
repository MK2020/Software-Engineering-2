/*
 * Inductor.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef INDUCTOR_H_
#define INDUCTOR_H_

#include <complex>
using namespace std;

class Inductor : public Impedance_Device
{
public:
	Inductor(double i) :inductance (i){}

	complex<double>get_impedance(double omega)
		{
		complex<double>impedance(0, omega*inductance);

		return impedance;
		}
private:
	double inductance;

};




#endif /* INDUCTOR_H_ */
