#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a random positive number : ";
    cin>>number;

    cout<<"EVen"<<endl;
    for(int i = 0 ; i <= number ; i+=2)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Odd"<<endl;
    for(int i = 1 ; i <= number ; i+=2)
    {
        cout<<i<< " ";
    }

    return 0;
}