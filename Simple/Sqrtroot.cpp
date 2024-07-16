#include<iostream>
using namespace std;

double SqrtRoot(int num , int precision = 2){
    int ans;

    if(num == 1){
        return 1;
    }

    int start = 0 , end = num;
    int mid = start + (end - start)/2;
    while(start <= end){
        mid = start + (end - start)/2;
        if(mid*mid == num){
            return mid;
        }else if(mid * mid < num){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid -1;
        }
    cout<<"Executed once"<<endl;
        
    } 

    double AnsNum = ans;
    double Increment = 0.1;
    double factor = 1;

    for(int i = 0 ; i < precision ; ++i){
        factor/=10;
        while((AnsNum + factor)*(AnsNum + factor) < num){
            AnsNum+=factor;
        }
    }
    return AnsNum;
}
int main(){
    int num = 15;
    // cout<<"Enter a number to find sqrt : ";
    // cin>>num;

    double ans =  SqrtRoot(num,3);
    cout<<"Square root of "<<num<<" is "<<ans;

    cout<<endl<<(7)/-3;

    return 0;
}