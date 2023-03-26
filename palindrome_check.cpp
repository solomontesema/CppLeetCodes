#include <iostream>

using namespace std;

class Solution {
    /*
    Question: Palindrome Number: Determine whether an integer is a palindrome. 
    An integer is a palindrome when it reads the same backward as forward.
    */
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int reversed = 0;
        int original = x;
        
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        return original == reversed;
    }
};

int main() {
    Solution s;
    
    cout << s.isPalindrome(121) << endl; // Output: true
    cout << s.isPalindrome(-121) << endl; // Output: false
    cout << s.isPalindrome(10) << endl; // Output: false
    
    return 0;
}

