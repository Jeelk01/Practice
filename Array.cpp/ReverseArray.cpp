// reverse the array.

#include<iostream>
using namespace std;

void Print_Array(int arr[],int size){
    for(int i = 0 ; i < size ; ++i){
        cout<<arr[i]<<" ";
    }
}

void Reverse_Array(int arr[],int size){
    int start = 0 , end = size - 1,temp = 0,i = 1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++,end--;


        cout<<"Itearation : "<<i++<<endl;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout<<"Initially Array."<<endl;
    Print_Array(arr,6);
    cout<<endl;
    Reverse_Array(arr,6);
    cout<<"After Reversed."<<endl;
    Print_Array(arr,6);

    return 0;
}