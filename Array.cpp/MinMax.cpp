#include<iostream>
#include<climits>
using namespace std;

void Min_Max(int arr[] , int size , int *min , int *max){
    // *min = INT_MAX;
    // *max = INT_MIN;
    
    *min = 100000;
    *max = 0;


    for(int i = 0; i < size ; ++i){
        if(arr[i] < *min){
            *min = arr[i];
        }

        if(arr[i] > *max){
            *max = arr[i];
        }
    }

    cout<<"Max : "<<*max<<endl;
    cout<<"Min : "<<*min<<endl;
}

int main(){
    int arr[5] = {1,25,73,732,366};
    int min=29,max=90;
    Min_Max(arr,5,&min,&max);
    return 0;
}