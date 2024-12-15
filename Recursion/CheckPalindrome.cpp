#include<iostream>
#include<string>
using namespace std;

bool CheckPalindrome(string s, int start , int end){

    if(start > end){
        return true;
    }

    if(s[start] != s[end]) return false;

    return CheckPalindrome(s,start + 1 , end - 1);
}

int main()
{
    string str;
    cout<<"Enter a string to check weather it is palindrome or not : ";
    cin>>str;

    cout<<"The string is palindrome : "<<CheckPalindrome(str,0,str.size()-1);
    return 0;
}