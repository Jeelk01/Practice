// Fibonacci using loop

#include<iostream>
using namespace std;

// fibonacci function using loops
void FibonacciLoop(int Terms){
    int a = 0,b =1,c;
    cout<<a<<" "<<b<<" ";

    for(int i = 1 ; i <= Terms ; ++i ){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}


int main(){
    int Terms = 5;
    FibonacciLoop(Terms);

    return 0;
}