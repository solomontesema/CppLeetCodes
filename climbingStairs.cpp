#include <iostream>

using namespace std;

class Solution {
    /* 
    Climbing Stairs: You are climbing a staircase. It takes n steps to reach 
    the top. Each time you can either climb 1 or 2 steps. In how many distinct 
    ways can you climb to the top?
    
    The return is a equivalent to considering n as fibnoci series index starting
    counting the index from 0.
    
    e.g. fseries: 1, 1, 2, 3, 5, 8, 13, ...
               n: 0, 1, 2, 3, 4, 5, 6, ....
    
    */
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        
        int first = 1;
        int second = 2;
        
        for (int i = 3; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }
        
        return second;
    }
};

int main() {
    Solution s;
    
    cout << s.climbStairs(2) << endl; // Output: 2
    
    cout << s.climbStairs(3) << endl; // Output: 3
    
    cout << s.climbStairs(5) << endl; // Output: 8
    
    cout << s.climbStairs(6) << endl; // Output: 13
    
    return 0;
}

