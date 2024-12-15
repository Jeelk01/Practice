// STL - standard Template Library

// Deque
// to use the we must include deque library
// also reffered as double ended queue.
// insertion and deletion operation cen be perform on both size front and back.
// dynamic and random access also possible.

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>  d;

    // Methods
    // deque.push_back      : Push element to the last
    // deque.pop_back       : Pop element from the last
    // deque.push_front     : Push element to the first
    // deque.pop_front      : Pop element from the firt
    // deque.at(index)      : return an element at index. 
    // deque.empty()        : return boolean.
    // deque.erase(start,end + 1) : to delete the element  (last range - 1 elemnt is deleted)
    
    d.push_back(10);
    d.push_front(20);

    for(int i : d){
        
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();

    for(int i : d){
        cout<<i<<" ";
    }
    d.push_back(100);
    d.push_back(200);

    cout<<endl;
    cout<<"Element at index 2 : "<<d.at(2)<<endl;

    cout<<endl;
    return 0;
}