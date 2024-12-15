// Recursion
// Base case    : if last and first pointer are not same then return false

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s,int start,int end){
    if(start > end ){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }
    start++;
    end--;
    return isPalindrome(s,start,end); 
}

int main()
{
    string x = "abcddfcba";
    int size = x.size() - 1;
    cout<<isPalindrome(x,0,size);
    return 0;
}
