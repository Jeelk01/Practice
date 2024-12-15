#include<iostream>
using namespace std;


// in normal scenarios when we check for prime numbeer till n it will count it in complexity of O(n^2)
// but using this algorithm we can reduce it

// Approach
// Step 1 : Assume all number as prime till n.
// step 2 : traverse the array from starting if the number is prime then mark multiple of that number as non-prime
// step 3 : count prime;
void SieveOfSarosthenesis(int num){
    bool prime[num + 1];

    for(int i = 0 ; i < num + 1 ; ++i){
        prime[i] = true;
    } 
    int count = 0;

    for(int i = 2 ; i < num ; ++i){
        if(prime[i] == true){
            count++;
            cout<<i<<" ";
            for(int j = 2 ; j*i < num ; ++j ){
                prime[j*i] = false;
            }
        }
    }

    cout<<endl<<"Total prime number till "<<num<<" is : "<<count<<"."<<endl;
}

int main()
{
    SieveOfSarosthenesis(10);
    return 0;
}