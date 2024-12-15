// Recursion
// Base case            : 0! ans 1! = 1.
// Recursive Relation   : n! = n x (n-1)!
//                      : f(n) = find fectorial
//                      : f(n) = n x f(n-1);

#include<iostream>
using namespace std;

int Fectorial(int num){
    // if(num == 1 || num == 0){
    //     return 1;
    // }
    return num * Fectorial( num - 1 );
}

int main()
{
    int num;
    cout<<"Enter a number to find the Fectorial : ";
    cin>>num;

    cout<<"Fectorial : "<<Fectorial(num)<<endl;
    return 0;
}