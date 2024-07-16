#include<iostream>
using namespace std;

int Sum_Arr_Elem(int arr[],int size){
    int sum = 0;

    for(int i = 0 ; i < size ; ++i){
        sum+=arr[i];
    }

    return sum;
}

int main(){
    int arr[10] = {1,436,382,88,4,233,475,8765,2348,90};

    int Result = Sum_Arr_Elem(arr,10);
    cout<<"The sum of all Array element is "<<Result<<".";

    return 0;
}