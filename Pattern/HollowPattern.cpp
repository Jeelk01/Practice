//     * 
//   *   *
// *       *
//   *   * 
//     *
// Hollow Dimond Pattern
#include<iostream>
using namespace std;
int main()
{
    cout<<endl;
    cout<<"Hollow Dimond Pattern"<<endl;
    int num = 5;
    for(int i = 0 ; i < num ; ++i ){
        for(int j = 0 ; j < num - i - 1; ++j){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = 0 ; j < 2*i - 1 ; ++j){
            cout<<"  ";
        }
        if(i > 0){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = num - 2 ; i >= 0 ; --i){
        for(int j = 0 ; j < num - i - 1 ; ++j){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = 0 ; j < 2*i - 1 ; ++j){
            cout<<"  ";
        }

        if(i > 0 ){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    return 0;
}