// Say Digit
// for given number say digits of number


#include<iostream>
using namespace std;

void Say(int num){
    switch (num)
    {
    case 1:
        cout<<"One ";
        break;
    
    case 2:
        cout<<"Two ";
        break;

    case 3:
        cout<<"Three ";
        break;

    case 4:
        cout<<"Four ";
        break;
    
    case 5:
        cout<<"Five ";
        break;

    case 6:
        cout<<"Six ";
        break;

    case 7:
        cout<<"Seven ";
        break;
    
    case 8:
        cout<<"Eight ";
        break;

    case 9:
        cout<<"Nine ";
        break;

    case 0:
        cout<<"Zero ";
        break;

    default:
        break;
    }
}

void SayDigits(int n){
    if(n<0){
        n = -n;
        cout<<"Minus ";
    }

    if( n == 0){
        return;    
    }

    int remainder = n % 10;

    SayDigits(n/10);

    Say(remainder);
}

int main()
{
    SayDigits(-12706546);
    return 0;
}