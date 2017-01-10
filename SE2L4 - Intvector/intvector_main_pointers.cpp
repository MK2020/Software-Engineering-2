#include <iostream>
#include <cstdlib>
#include <vector>
#include "intvector.h"

using namespace std;
void print_first(const intvector& v);

int main() {
    cout<<"intvector main"<<endl;
    intvector intv;
    vector<int> v;
    intvector intv1;
    int i = 0, n;

    cout<< "&v: "<<&v<<endl;

    do{

        cin>>n;

        intv.push_back(n);
        v.push_back(n);

        for(int j = 0; j<v.size(); j++){
        	cout<<"normal vector addresses "<<endl;
            cout<<"&v[j]: "<< &(v.at(j))<<endl; // at(j) is the actual at function for actual vectors
        }


            cout<<"intv size: "<<intv.size()<<endl;
            cout<<"v size: "<<v.size()<<endl;

            cout<<"intv capacity: "<<intv.capacity()<<endl;
            cout<<"v capacity: "<<v.capacity()<<endl;

//**********************************************************************************

            cout<<"the point at intv: "<< (intv.at_pointer(i))<<endl;
            cout<<"intv[i]: " << *(intv.at_pointer(i))<<endl; //dereferencing the
             // pointer to get the value in that memory address??
           //INCORRECT DOESNT MAKE SENSE! cout<<"intv[i]: " << &(intv.at_pointer(i))<<endl;
            cout<<"intv[i]: "<< (*intv.at_pointer(i));
            //or with returning a pointer :


            //how would this return anything else but an address?
            cout<<"v[i]: "<<v.at(i)<<endl;

            //When we overload operator[]
            //cout<<"intv[i]: "<<intv[i]<<endl;


            //intv.at_reference(i)++;//why increment?
            //or with returning a pointer:
            (*intv.at_pointer(i))++;

            //When we overload operator[]
           // iv[i]++;

            v.at(i)++;
 //**********************************************************************************

            cout<<"intv[i] v.2: " << *(intv.at_pointer(i)) <<endl;
            cout<<"v[i] v. 2: "<<v.at(i);

            i++;//why increment

        }while(n!=0);

        print_first(intv);


        cout<<"Please enter a value you would like check if its in the intvector?"<<endl;
        int n1;
        cin>>n1;
        double found = intv.find(n1);
        if(found != -1){
        cout<<"The value: "<< n1 << " is in the intvector! :)"<<endl;
        }else{
            cout<<"The value: "<< n1 << " is NOT the intvector! :( "<<endl;
        }

//************************CHECK WITH Z********************************
        //testing copy constructor
        int n2;
        cout<<"Enter the size of you copy constrc testing "<<endl;
        cin>>n2;
        intvector a(n2);
        for(int i = 0; i < n2; i++){
        	a[i] = i;
        }

        //testing assignment constructor

        intvector& b(a);
        cout<<"This is vector b: assignment operator used to assign values in vector a to values in vector b "<<endl;
        print_first(b);

        print_first(a);

        return 0;
  }

void print_first(const intvector& v){

for(int i  = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
    //why can't i delete v here?
}

}







