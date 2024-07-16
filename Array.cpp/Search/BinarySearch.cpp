// Binary search 
// One of the most eficient method for searching in the array.

// mandatory condition to perform binary search
// all elements should be in monotonic function.

#include<iostream>
using namespace std;

int BinarySearch (int arr[] , int size , int target){

    int start = 0,end = size - 1; 
    int count = 1; 
    while(start <=end){
        int mid = start + (end- start)/2;
        cout<<"Iteration : "<<count++<<endl;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            start = ++mid;
        }else{
            end = --mid;
        }
    }

    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int result = BinarySearch(arr,10,7);

    cout<<"Position of "<<7<<" In array is "<<result<<"."<<endl;

    cout<<"Heelo";

    return 0;
}