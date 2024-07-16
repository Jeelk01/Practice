#include<iostream>
using namespace std;

int Dupliacate(int arr[],int size){
    for(int i = 0 ; i < size ; ++i){
        for(int j = i + 1 ; j < size ; ++j)
        {
            int result = arr[i] ^ arr[j];
            if(result == 0){
                return arr[i];
            }
        }
    }


    return -1;
}

int main(){

    int arr[5] = {1,2,3,4,3};
    int Result = Dupliacate(arr,5);
    cout<<"Duplicate is "<<Result<<"."<<endl;

    int result = 1^2;
    cout<<result;    

    return 0;
}