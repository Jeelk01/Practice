// STL - Standard Template Library

// Stack
// to use stack we must include stack library in headers.
// last in first out. (LIFO)

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    // method
    // s.empty()        : Return boolean.
    // s.size()         : Return size of stack
    // s.top()          : Return top most element of the stack.
    // s.push(x)        : Push element at th etop of the stack.
    // s.Pop()          : Delete top most elment of the stack.
    s.push("Jeel");
    s.push("Jeet");
    s.push("Daksh");
    s.push("Kirtan");

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;


    return 0;
}