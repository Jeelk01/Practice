#include<iostream>
#include<vector>
using namespace std;

void Spiral(vector<vector<int>> x){
    int row = x.size();
    int column =  x[0].size();

    int count = 0;
    int Total = row*column;

    int srow = 0;
    int scol = 0;
    int erow = row - 1;
    int ecol = column - 1;

    while( count < Total ){
        for(int j = scol ; j <= ecol && count < Total ; ++j ){
            cout<<x[srow][j]<<" ";
            count++;
        }
        srow++;

        for(int i = srow ; i <= erow && count < Total ; ++i){
            cout<<x[i][ecol]<<" ";
            count++;
        }
        ecol--;

        for(int j = ecol ; j >= scol && count < Total ; --j){
            cout<<x[erow][j]<<" ";
            count++;
        }
        erow--;

        for(int i = erow ; i >= srow && count < Total ; --i ){
            cout<<x[i][scol]<<" ";
            count++;
        }
        scol++;
    }
}

int main()
{
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0 ; i < v.size() ; ++i){
        for(int j = 0 ; j < v[0].size() ; ++j){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;
    Spiral(v);
    return 0;
}