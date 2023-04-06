#include <iostream>
#include <string>

using namespace std;

class Solution {
    /*
    Question: Palindrome Number: Determine whether an integer is a palindrome. 
    An integer is a palindrome when it reads the same backward as forward.
    */
public:
    bool isPalindrome2(int x) {
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

    bool isPalindrome(int num){
        if(num < 0){
            return false;
        }
        if(num < 10){
            return true;
        }
        int original = num;
        int reversed = 0;

        while(num > 0){
            reversed = num%10 + reversed * 10;
            num/=10;
        }
        return reversed == original;
    }

    bool isBinaryPalindrome(string str){
        int len = str.length();
        for(int i=0; i<len; i++){
            if(str[i] == str[(len - 1) - i]) continue;
            else return false;
        }
        return true;
    }

};

int main() {
    Solution s;
    
    cout << s.isPalindrome(121) << endl; // Output: true
    cout << s.isPalindrome(-121) << endl; // Output: false
    cout << s.isPalindrome(10) << endl; // Output: false
    cout << s.isPalindrome(123321) << endl; // Output: true
    cout << s.isBinaryPalindrome("1011") << endl; // Output: false
    cout << s.isBinaryPalindrome("11011") << endl; // Output: true
    return 0;
}

