#include<iostream>
using namespace std;

int main()
{
    int Row, Col;
    cout<<"Enter how many rows do you want : ";
    cin>>Row;
    cout<<"Enter how many columns do you want : ";
    cin>>Col;

    int arr[Row*Col];

    for(int i = 0 ; i < Row ; ++i){
        for(int j = 0 ; j < Col ; ++j){
            cout<<"Enter value for element ["<<(i)<<"]["<<j<<"] : ";
            cin>>arr[i*Col + j];
        }
    }


    cout<<endl<<endl;
    cout<<"Displaying value"<<endl;
    for(int i = 0 ; i < Row ; ++i){
        for(int j = 0 ; j < Col ; ++j){
            cout<<arr[i*Col + j]<<" ";
        }
    }


    cout<<endl;
    return 0;
}