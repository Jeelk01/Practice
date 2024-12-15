// Recursion
// Basecase             : n = 1 ==> 0    ||    n = 2 ==> 1
// Recursive Relation   : An = A(n-1) + A(n-2)
//                      : F(n) =  F(n-1) + F(n - 2)

#include<iostream>
using namespace std;

int Fibonacci(int num){
    if(num == 1){
        return 0;
    }

    if(num == 2){
        return 1;
    }

    return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main()
{
    int Term;
    cout<<"Enter number to find nth term of Fibonacci : ";
    cin>>Term;
    cout<<"Term "<<Term<<" : "<<Fibonacci(Term)<<endl;
    return 0;
}