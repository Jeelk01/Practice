// Recursion
// String Reversal Program
// Base case start == end

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void ReverseString(string s,int start , int end){
    if( start > end ){
        return;
    }
    cout<<"Iteration"<<endl;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start++,end--;
    ReverseString(s,start,end);
}


int main()
{
    string str = "Jeel kalathiya";
    int size = str.size();
    cout<<"Size : "<<size<<"."<<endl;
    cout<<"Original : "<<str<<endl;
    ReverseString(str,0,size -1 );
    cout<<"Reversed : "<<str<<endl;
    return 0;
}