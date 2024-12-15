// STL - Standard Template Library

// Vector
// to use vector we must include vector in header.
// vector is same as array.
// but a dynamic array , we can increase or decrease size.
// if the initial size is n and the entire vector is filled with elements and we need to add more element then it doubles the size.
// take a new vector ,double of the original vector first copy the initial element to that and then add new element .
// old one is deleted.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // declaring the vector
    // at time of declaring vector the size of it is zero.
    // vector <type> name;
    
    vector<int> v;
    vector<int> v1(4,1); // size 4 all initilize with 1.

    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    // Method
    // vector.size()        : Return total number of element present in vector.
    // vector.capacity()    : Return total memory llocated to vector.
    // vector.front()       : Return first element of the vector.
    // vector.back()        : Return last element of the vector.
    // vector.push_back()   : Push the element to the vector.
    // vector.pop_back()    : Pop thee last element of the vector.
    // vector.clear()       : size zero capacity remains same.


    cout<<"Number of element in vector      : "<<v.size()<<endl;
    cout<<"Memory allocated to vector       : "<<v.capacity()<<endl;
    cout<<"First ELement of the vector      : "<<v.front()<<endl;
    cout<<"Last ELement of the vector       : "<<v.back()<<endl;
    v.push_back(50);
    cout<<"After push Last ELement of the vector    : "<<v.back()<<endl;
    v.pop_back();
    cout<<"After pop Last ELement of the vector    : "<<v.back()<<endl;
    v.clear();
    cout<<"After clear"<<endl;
    cout<<"Number of element in vector      : "<<v.size()<<endl;
    cout<<"Memory allocated to vector       : "<<v.capacity()<<endl;
    
    return 0;
}