// Swaping the atlernative element in array.
// [1,2,3,4,5,6] : input
// [2,1,4,3,6,5] : output

#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    int temp = 0;
    for(int i = 0 ; i < size - 2 ; i = i + 2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

void Print_Array(int arr[],int size){
    for(int i = 0 ; i < size ; ++i){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"Initially Array."<<endl;
    Print_Array(arr,5);
    cout<<endl;
    swapAlternate(arr,5);
    cout<<"After SwapAlternate."<<endl;
    Print_Array(arr,5);

    return 0;
}

