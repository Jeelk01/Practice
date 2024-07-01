#include<iostream>
using namespace std;

int main(){
    int num,flag = 0;
    cout<<"ENter a number to check prime or not : ";
    cin>>num;

    for(int i = 2 ; i < num ; ++i){
        if(num%i == 0){
            flag = 1;
        }
    }

    if(flag == 1){
        cout<<"Your entered number is Not Prime.";
    }else{
        cout<<"Your entered number is Prime.";
    }

    return 0;
}