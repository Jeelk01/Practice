// Recursion
// Base case            : 2^0 = 1
// Recursive function   : 2^n = 2 * s^(n-1)
//                      : f(n) = power of 2
//                      : f(n) = 2 * f(n-1);

#include<iostream>
using namespace std;

int Power(int num , int power){
    if(power == 0){
        return 1;
    }
    // cout<<"Iteration"<<endl;
    return num * Power(num , power - 1);
}

int main()
{
    int num,power;
    cout<<"Enter number to int find power of : ";
    cin>>num;
    cout<<"Enter value of power : ";
    cin>>power;

    cout<<Power(num,power)<<endl;
    return 0;
}