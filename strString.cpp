#include <iostream>

using namespace std;

class Solution {
    /*
    Implement strStr(): Return the index of the first occurrence of needle in 
    haystack, or -1 if needle is not part of haystack.
    */
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        
        if (n == 0) {
            return 0;
        }
        
        if (m < n) {
            return -1;
        }
        
        for (int i = 0; i <= m - n; i++) {
            int j;
            
            for (j = 0; j < n; j++) {
                if (haystack[i+j] != needle[j]) {
                    break;
                }
            }
            
            if (j == n) {
                return i;
            }
        }
        
        return -1;
    }
};

int main() {
    Solution s;
    
    cout << s.strStr("hello", "ll") << endl; // Output: 2
    cout << s.strStr("aaaaa", "bba") << endl; // Output: -1
    cout << s.strStr("", "") << endl; // Output: 0
    
    return 0;
}

