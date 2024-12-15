// Leetcode
// 70. Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//                          __ n stairs
//                       __|
//                    __|
//                 __|
//              __|
//           __|
//        __|
//     __|
//  __|
// |
// approach / logic
// to reach the nth stair i mau have previous stair is (n-1) or (n-2) 
// max two stairs can be clime at once.
// f(n) = f(n -1) + f(n-2).

#include<iostream>
using namespace std;

long long ClimbingWays(int stairs){
    if(stairs < 0){
        return 0;
    }

    if(stairs == 0){
        return 1;
    }

    return ClimbingWays( stairs - 1) + ClimbingWays( stairs - 2);
}

int main()
{
    int stairs = 44;

    cout<<"Total ways to climb stairs of "<<stairs<<" : "<<ClimbingWays(stairs)<<"."<<endl;
    return 0;
}