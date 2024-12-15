// to find the GCD / HCF : Greatest common devisor / Highest common fator
// GCD ( a , b ) = GCD( a - b ,b);
// do this untill bth become same of one of them to be zero that is the answer.

#include<iostream>
using namespace std;

int GCD(int a , int b){
    while(a!=b){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }

    return a;
}

int main()
{
    cout<<GCD(18,78);
    return 0;
}
