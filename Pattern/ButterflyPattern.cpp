// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *
// BUtterfly Pattern

#include<iostream>
using namespace std;

int main()
{
    int num = 4;
    cout<<endl<<endl<<"Butterfly Pattern"<<endl;
    for(int i = 0 ; i < num ; ++i){
        for(int j = 0 ; j <= i ; ++j){
            cout<<"* ";
        }
        for(int j = 0 ; j < 2*(num - i) -  2 ;  ++j ){
            cout<<"  ";
        }
        for(int j = 0 ; j <= i ; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = num - 1 ; i >= 0 ; --i){
        for(int j = 0 ; j <= i ; ++j){
            cout<<"* ";
        }
        for(int j = 0 ; j < 2*(num - i) - 2 ; ++j){
            cout<<"  ";
        }
        for(int j  = 0 ; j <= i ; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    return 0;
}

