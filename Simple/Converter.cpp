#include <iostream>
using namespace std;



int main() {
    int Decimal;
    cout<<"Enter a number : ";
    cin>>Decimal;

    int Binary[32] = {0} ;
    int i = 0;
    while(Decimal > 0){
        Binary[i++] = Decimal % 2;
        Decimal/=2;
    }    

    for(int j = i - 1 ; j >= 0 ; --j){
        cout<<Binary[j];
    }

    return 0;
}
