// timecopexity : O(n^2)
// space complexity : constant
// usecese  we can use if when the size of array is small.
// last element get sorted autometically as rest of the all elements are sorted.


#include<iostream>
using namespace std;

void SelectionSort(int arr[],int size){

    for(int i = 0 ; i < size -1  ; ++i){
        for(int j = i + 1 ; j < size  ; ++j){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void PrintArray(int arr[] , int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}

int main()
{
    int arr[10] = {1,233,73,887,43,67,3,688,23,90};
    PrintArray(arr,10);
    SelectionSort(arr,10);
    PrintArray(arr,10);
    return 0;
}