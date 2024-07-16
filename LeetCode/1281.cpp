// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

// solution
// here i try to execute entire calculation inside a loop so that all action complete in one iteration.

#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0,product = 1,remainder;
        while(n > 0){
            remainder = n % 10;
            sum+=remainder;
            product*=remainder;
            n/=10;
        }

        return product - sum;
    }
};

int main(){
    class Solution S1;

    int result = S1.subtractProductAndSum(234);
    
    cout<<"Result : "<<result;

    return 0;
}