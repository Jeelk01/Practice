// Binary Search using Recursion
// Recursion
// Base case : if mid == target return ture
// else base on position of mid reduce the sserch space

#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int target,int start , int end){
    if(start > end){
            return false;
    }

    int mid = start + (end - start)/2;
    if(arr[mid] == target){
        return true;
    }else if(arr[mid] > target){
        end = mid - 1;
    }else{
        start = mid + 1;
    }

    return BinarySearch(arr,target,start,end);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Let's check if element : 2 is present or not in array using binary search : "<<BinarySearch(arr,2,0,9);
    return 0;
}