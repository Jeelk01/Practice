// STL - Standard template Library.

// List
// to use list we must add list library in header
// 

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    // methods
    // list.push_back(x)    : Push element at the end of the list.
    // list.push_front(x)   : Push Element at the start of the list.


    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout<<i<<" ";
    }


    cout<<endl;
    return 0;
}