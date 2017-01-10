//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include "intvector.h"
//
//using namespace std;
//void print_first(const intvector& v);
//
//int main() {
//    cout<<"intvector main"<<endl;
//    intvector intv;
//    vector<int> v;
//    int i = 0, n;
//
//    cout<< "&v: "<<&v<<endl;
//
//    do{
//
//        cin>>n;
//
//        intv.push_back(n);
//        v.push_back(n);
//
//        for(int j = 0; j<v.size(); j++){
//        	cout<<"normal vector addresses "<<endl;
//            cout<<"&v[j]: "<< &(v.at(j))<<endl; // at(j) is the actual (at) function for actual vectors
//            //here & is returning a name from at(j) - vector property so &v[j] gives us the address of the name returned
//        }
//
//
//            cout<<"intv size: "<<intv.size()<<endl;
//            cout<<"v size: "<<v.size()<<endl;
//
//            cout<<"intv capacity: "<<intv.capacity()<<endl;
//            cout<<"v capacity: "<<v.capacity()<<endl;
//
////**********************************************************************************
//
//            /*had we returned a pointer instead of a reference for at()
//             * cout<<"intv[i]: " << *(intv.at(i))<<endl; //dereferencing the
//             * pointer to get the value in that memory address??
//             */
//            cout<<"intv[i]: "<< intv.at_reference(i)<<endl;
//            cout<<"intv[i] WITH &: "<< &(intv.at_reference(i))<<endl;
//            int& hmm = intv.at_reference(i);
//            cout<<"This is hmm: "<<hmm<<endl;
//            //or with returning a pointer : (*intv.at(i));
//
//            //how would this return anything else but an address?
//            cout<<"v[i]: "<<v.at(i)<<endl;
//
//            //When we overload operator[]
//            //cout<<"intv[i]: "<<intv[i]<<endl;
//
//
//            intv.at_reference(i)++;//increment the value at index i in the intv vector
//            //or with returning a pointer: (*intv.at(i));
//            //When we overload operator[]
//           // iv[i]++;
//
//            v.at(i)++;//increment the value at index i in the v vector
// //**********************************************************************************
//
//            //cout<<"intv[i] v.2: " << *(intv.at(i)) <<endl;
//            cout<<"intv[i] v. 2: "<<intv.at_reference(i)<<endl; //what is this testing
//            cout<<"v[i] v. 2: "<<v.at(i)<<endl;
//
//            i++;//increment the index in the vector
//
//        }while(n!=0);
//
//        print_first(intv);
//        /* here the intv has changed and all the values have been incremented by 1
//         * we see 1 at the end of the intv because 0 was last entered to stop the loop but it still is the last
//         * process so it also gets incremented and 1 then lops stops (i.e loop works with 0 THEN stops)
//         */
//        return 0;
//  }
//
//void print_first(const intvector& v){
//
//for(int i  = 0; i < v.size(); i++)
//{
//    cout<<v[i]<<endl;
//}
//
//}
//
//
//
//
//
//
