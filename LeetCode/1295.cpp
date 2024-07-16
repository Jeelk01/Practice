// Given an array nums of integers, return how many of them contain an even number of digits.

 

// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check_Even_Numbers(int n){
        int count = 0;

        while(n>0){
            n/=10;
            count++;
        }

        if(count % 2 == 0){
            return true;
        }

        return false;
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;

        for(int i = 0 ; i < nums.size() ; ++i){
            if(check_Even_Numbers(nums[i])){
                count++;
            }
        }

        return count;
    }
};

int main(){
    class Solution S1;
    vector<int> num = {12,346,2572,3543,4,56256};

    int result = S1.findNumbers(num);

    cout<<"result : "<<result;

    return 0;
}