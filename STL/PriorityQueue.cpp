// STL - Standard template Library

// Priority Queue.
// to use this we must include queue in header
// the top element is always the greatest by default.
// Priority queue foloows the max heap structure

// There are two main types of heaps:
// Max Heap: The root node contains the maximum value, and the values decrease as you move down the tree.
// Min Heap: The root node contains the minimum value, and the values increase as you move down the tree.


#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Max-heap
    priority_queue<int> Max;

    // Min - heap
    priority_queue<int , vector<int>  , greater<int> > Min;

    Max.push(1);
    Min.push(1);

    Max.push(2);
    Min.push(2);

    Max.push(3);
    Min.push(3);

    Max.push(4);
    Min.push(4);
    
    Max.push(5);
    Min.push(5);
    
    Max.push(6);
    Min.push(6);

    Max.push(7);
    Min.push(7);

    Max.push(8);
    Min.push(8);



    cout<<"Max top : "<<Max.top()<<endl;
    cout<<"Min top : "<<Min.top()<<endl;

    cout<<"Max : ";

    while(!Max.empty()){
        cout<<Max.top()<<" ";
        Max.pop();
    }
    cout<<endl<<"Min : ";

    while(!Min.empty()){
        cout<<Min.top()<<" ";
        Min.pop();
    }
    cout<<endl;
    

    return 0;
}