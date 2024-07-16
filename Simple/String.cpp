#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printintVector(vector<int> vtr , int size){
    for(int i = 0 ; i < size ; ++i){
        cout<<vtr[i]<<" ";
    }

    cout<<endl;
}

void printstrVector(vector<string> vtr , int size){
    for(int i = 0 ; i < size ; ++i){
        cout<<vtr[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    vector<int> x = {10,2 ,12 ,10};
    printintVector(x,x.size());

    vector<string> s;

    for(int i = 0 ; i < x.size() ; ++i){
        string str = to_string(x[i]);
        s.push_back(str);
    }

    sort(s.begin(),s.end());

    printstrVector(s,s.size());
    string result;


    for(int i = s.size() - 1; i>=0 ; --i){
        result+=s[i];
    }
    cout<<result<<endl;
    return 0;
}