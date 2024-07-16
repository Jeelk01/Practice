// // to convert decimal numbers to the binary

// #include <iostream>
// #include <cmath>
// using namespace std;


// // first approach
// int ToBinary_Traditional(int n)
// {
//     int i = 0, remainder,point = 1;
//     long long int Binary = 0;

//     while (n > 0)
//     {
//         remainder = n % 2;
//         Binary = Binary + (point * remainder);
//         n /= 2;
//         point*=10;
//     }

//     return Binary;
// }


// // second approach
// int ToBinary_Bit(int n){
//     int Binary = 0,bit,point = 1;

//     while(n > 0){
//         bit = n&1;
//         Binary = Binary + (bit * point);
//         point*=10;
//         n>>=1;
//     }

//     return Binary;
// }

// int main()
// {

//     int num;
//     cout << "Enter a number to convert in Binary : ";
//     cin >> num;

//     int result1 = ToBinary_Traditional(num);
//     cout << "Conversion of " << num << " to binary is " << result1 << "."<<endl;
//     int result2 = ToBinary_Bit(num);
//     cout << "Conversion of " << num << " to binary is " << result2 << "."<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int bitwiseComplement(int n) {
        int mask = 0,num = n;
        if( n == 1){
            cout<<0;
            return 0;
        }

        if( n == 0){
            return 1;
        }

        while( num > 0 ){
            mask = mask | 1;
            mask <<= 1;
            n >>= 1;
        }

        int Complement = (~n) & mask;

    
    return Complement;
    }
    

int main(){

    cout<<bitwiseComplement(5);
    return 0;
}