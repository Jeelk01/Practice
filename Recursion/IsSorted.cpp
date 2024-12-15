// to check that given array is sorted or not.
// using recursion

#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size )
{
    if(size == 0 || size == 1){
        return true;
    }

    if( arr[size - 1] >= arr[size - 2]){
        return isSorted(arr,size -1);
    }else{
        return false;
    }

}

int main()
{
    int arr[10] = {1,2,3,4,4,6,7,8,9,10};

    cout<<isSorted(arr,10);
    return 0;
}