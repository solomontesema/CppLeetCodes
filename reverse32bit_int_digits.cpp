#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0; // use long long to avoid overflow
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        if (reversed < INT_MIN || reversed > INT_MAX) {
            return 0;
        }
        return reversed;
    }
};

int main() {
    Solution solution;

    int x = 123;
    int reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    x = -123;
    reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    x = 120;
    reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    x = 0;
    reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    x = INT_MAX;
    reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    x = INT_MIN;
    reversed = solution.reverse(x);
    cout << "The reverse of " << x << " is " << reversed << endl;

    return 0;
}
