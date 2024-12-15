// STL - Standard Template Library

// Queue
// to use this we must include queue library in header
// first in first out - (FIFO

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    // method
    // q.push(x)        : Push element to the q at the last.
    // q.pop()          : pop up the first element.
    // q.front()        : first element of the queue.
    // q.back()         : last element of the queue.
    // q.empty()        : return boolean.
    // q.size()         : return size of the queue.


    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<endl;

    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Last element : "<<q.back()<<endl;
    q.pop();
    cout<<endl<<"After the Pop"<<endl;
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Last element : "<<q.back()<<endl;





    return 0;
}