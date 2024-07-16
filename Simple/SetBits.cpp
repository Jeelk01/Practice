// here is a program to find the total set bits in 2 numbers

#include<iostream>
using namespace std;

int SetBits(int a, int b){
    int SetBits = 0;

    while(a > 0){
        if(a & 1 == 1)
            SetBits++;
        a = a >> 1;
    }

    while(b > 0){
        if(b & 1 == 1)
            SetBits++;
        b = b >> 1;
    }

    return SetBits;
}

int main(){
    int result = SetBits(2,3);
    cout<<"Total numbers of setbits in "<<2<<" & "<<3<<" is "<<result<<".";

    return 0;
}
