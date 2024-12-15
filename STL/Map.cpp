// STL - standard template library

// Map
// top use this we must include map library in header
// all key must me unnique and point ot only one elemment.
// return element in soted manner.


#include<iostream>
#include<map>
using namespace std;

int main()
{

    map<char,string> m;


    // m.insert({2,"Jeet"});

    m['b'] = "Jeel";
    m['x'] = "Mayur";
    m['o'] = "Jeet";

    for(auto element : m){
        cout<<element.first<<" "<<element.second<<endl;
    }
    // method

    // map.begin()      : Return an iterator to the first element in the map.
    // map.end()        : Return an iterator to the last element in the map.
    // map.size()       : Return the number of element in the map.
    // map.max_size()   : Return max number of element map can hold.
    // map.empty()      : return boolean
    // map.clear()      : remove all element form the map.

    return 0;
}