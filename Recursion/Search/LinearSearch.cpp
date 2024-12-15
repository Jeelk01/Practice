// Recursion
// Perform le=inear search using Recursion
// Base Case if ( element = target ) return true ( or index )
// recursive function   : f(arr,target,size)

#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int target){
    
    if(size == 0){
        return false;
    }
    if( arr[size] - 1 == target){
        return true;
    }

    return LinearSearch(arr,size-1,target);  

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    cout<<"LEt's check wheaher element 6 present in array or not : "<<LinearSearch(arr,10,12);
    return 0;
}
