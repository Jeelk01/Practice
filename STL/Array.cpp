// STL - Standard Template Librrary

// Array
// to use this we must include array in header.

#include<iostream>
#include<array>
using namespace std;

void PrintArray(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}
int main()
{
    // normal way of declaring int array of size 4,
    int arr[4];

    // using array library

    // array<type,size> name;

    array<int,4> a = {1,2,3,4};
    array<int,4> b = {5,6,7,8};

    // methods
    // array.at(index)  : return the element at index 
    // array.empty()    : return boolean.
    // array.front()    : return first element of array.
    // array.back()     : return last eleent of the array.
    // array.size()     : return total number of indices.
    // array.max_size() : return total number of indices.
    // array.fill(x)    : initialize entire array with x.
    // array.data()     : return pointer to the first element of the array.
    // sizeof(array)    : return size of entire array.
    // arr1.swap(arr2)  : to swap the content of two array. (Both Must have same size)


    cout<<"Array element at index  2    : "<<a.at(2)<<endl;
    cout<<"Array is empty               : "<<a.empty()<<endl;
    cout<<"First element of the array   : "<<a.front()<<endl;
    cout<<"Last element of the array    : "<<a.back()<<endl;
    cout<<"Total indices in array       : "<<a.size()<<endl;
    cout<<"Total number of indices      : "<<a.max_size()<<endl;
    cout<<"Pointer to the first element : "<<a.data()<<endl;
    cout<<"Size of entire array         : "<<sizeof(a)<<endl;

    cout<<endl;
    cout<<"Before the swap"<<endl;
    cout<<"Array a"<<endl;
    PrintArray(a.data(),4);
    cout<<"Array b"<<endl;
    PrintArray(b.data(),4);
    cout<<endl;
    a.swap(b);
    cout<<"After the swap"<<endl;
    cout<<"Array a"<<endl;
    PrintArray(a.data(),4);
    cout<<"Array b"<<endl;
    PrintArray(b.data(),4);

    return 0;
}