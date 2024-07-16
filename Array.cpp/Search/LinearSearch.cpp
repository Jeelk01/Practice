// Linear Search
// in this type of search we are search in manner of one by one

// here i'm writing the program to search an target element in array.
// for that i'm comparing one by one all array element to the target element if matched then return 1 else return 0;

#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int target){
    for(int i = 0 ; i < size ; ++i){
        if(arr[i] == target){
            return 1;
        }
    }

    return 0;
}

int main(){
    int arr[10] = {1,473,627,8765,42267,3345,1236,42,8652,2235};

    int Result = LinearSearch(arr,10,627);

    if(Result){
        cout<<"First Element is present in array."<<endl;
    }else{
        cout<<"First Element is not present in array."<<endl;
    }

    Result = LinearSearch(arr,10,6427);

    if(Result){
        cout<<"Seconod Element is present in array."<<endl;
    }else{
        cout<<"Second Element is not present in array."<<endl;
    }

    return 0;
}