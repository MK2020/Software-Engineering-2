/*
 * intvector.h
 *
 *  Created on: 13 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef INTVECTOR_H_
#define INTVECTOR_H_


class intvector{

public:
    //constructors
    intvector();
    intvector(int size);
    //copy constructors
    intvector(const intvector& iv);
    intvector& operator=(const intvector& iv);


    //destructor
    ~intvector();

    //member functions
    int& operator[](int i);//returning a reference
    const int& operator[] (int i) const;
    void push_back(int n);
    int* at_pointer(int i); //creating a function at which will return a pointer of type int and takes in the arg i of type int
    int& at_reference(int i);
    //creating a function at which will return an address of type int and takes in the arg i of type int

    int size() const; // here we cannot change the value of size
    int capacity() const;
    //lab5 part 1
    int find(const int&);


private:

    int* v; //pointer of type int
    int d_size;
    int d_capacity;
};

#endif /* INTVECTOR_H_ */
