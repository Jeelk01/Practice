// find sum of all element of the array using recursion.
// Base case if i == 0 the return arr[i] ( one element sum is element itself)

#include<iostream>
using namespace std;

int ArraySum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    
    if(size == 1 ){
        return arr[size - 1]; 
    }

    return (arr[size - 1] + ArraySum(arr, size - 1));
}

int main()
{
    int arr[] = {10,11,12,13,14,15,16,17,18,19};
    cout<<"Sum of all array element is : "<<ArraySum(arr,10);
    return 0;
} 