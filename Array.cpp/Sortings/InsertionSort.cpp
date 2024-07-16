// one by one element eill be given to you insert it in already sorted order


#include<iostream>
using namespace std;

void InsertionSort(int arr[] , int size){
    int i = 1;
    while(i<size){
        int j = i - 1;
        int temp = arr[i];
        while (j>= 0)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
            j++;
        }
        arr[j] = temp;
        i++;
    }
    cout<<"Completed0"<<endl;
}

void PrintArray(int arr[] , int size){

cout<<"called"<<endl;
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
    InsertionSort(arr,10);
    PrintArray(arr,10);
    return 0;
}