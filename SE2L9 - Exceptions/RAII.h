/*
 * RAII.h
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#ifndef RAII_H_
#define RAII_H_

class Lockdb{
public:
	Lockdb();
	~Lockdb();
	bool get_status();

private:
	bool status;

};




#endif /* RAII_H_ */
