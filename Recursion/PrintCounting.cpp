// Recursion
// Base Case            : n = 1 
// Recursive Relation   : n = n , (n-1) , (n-2) , .... , 1


#include<iostream>
using namespace std;

void Counting(int num){
    if(num == 0){
        return;
    }

    Counting(num - 1);
    cout<<num<<" ";
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    Counting(num);
    return 0;
}