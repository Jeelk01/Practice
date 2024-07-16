// in each round only one element get sorted at it's sorted position.
// nearest element is compared


#include<iostream>
using namespace std;

void BubbleSort(int arr[] , int size)
{
    int temp = 0;
    for(int i  = 0 ; i < size - 1 ; ++i)
    {
    for(int j = 0 ; j < size - i - 1 ; ++j){
        if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
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
    int arr[10] = {2,346,83,7337,773,7,13,537,404,56};
    PrintArray(arr,10);
    BubbleSort(arr,10);
    PrintArray(arr,10);
    return 0;
}