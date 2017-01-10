/*
 * Resistor.h
 *
 *  Created on: 27 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef RESISTOR_H_
#define RESISTOR_H_
#include <complex>
using namespace std;

class Resistor : public Impedance_Device
{

public:
	Resistor(double r) : resistance (r)	{}

	complex<double>get_impedance(double omega)
		{
		complex<double>impedance(resistance);
		return impedance;
		}
private:
	double resistance;

};


#endif /* RESISTOR_H_ */
