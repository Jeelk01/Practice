// Recursion            
// Basecase             : Destination
// Recursive Relation   : step ++

#include<iostream>
using namespace std;

void ReachHome(int Start , int Destination){
    cout<<"Start : "<<Start<<" Destination : "<<Destination<<endl;
    if(Start == Destination){
        cout<<"Mai Ghar pahuch gya"<<endl;  
        return;
    } 

    ReachHome(++Start,Destination);
}

int main()
{
    int start = 1;
    int Destination = 10000;

    ReachHome(start,Destination);
    return 0;
}