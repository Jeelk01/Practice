// STL - Standard Template Library

// Set
// to use this we must include set library in header.
// Stores only unique element.
// Duplicate element not stored.
// Modification nont possible only Insertion and Remove is possible.
// return in sorted order.


#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    // Method
    // s.insert()       : to insert element into set.
    // s.size()         : return the size of set.
    // s.erase()        : to erase the element.
    // s.count(x)       : Return boolean if x is present or not 
    // s.find(x)        : if x is present in set than give it's iterator

    s.insert(3);
    s.insert(1);
    s.insert(3);
    cout<<"Size is : "<<s.size()<<endl;
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Check if 4 is present or not : "<<s.count(4)<<endl;
    set<int> :: iterator it = s.find(3);

    cout<<"Iterator of 3 : "<<*it<<endl;

    return 0;
}
