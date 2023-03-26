#include <iostream>
#include <vector>

using namespace std;

class Solution {
    /*
    Question: Merge Sorted Array: Given two sorted integer arrays nums1 and 
    nums2, merge nums2 into nums1 as one sorted array.
    
    We first check if m or n are less than or equal to 0, as before. 
    If either of these conditions is true, we simply return without doing anything.
    
    We then check if m is greater than the size of nums1. If it is, we resize 
    nums1 to have size m. This ensures that nums1 has enough space to hold both
    nums1 and nums2.

    Finally, we check if n is greater than the size of nums2, as before.
    If it is, we set n to the size of nums2.
    */
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m <= 0 || n <= 0) {
            return;
        }

        if (m > nums1.size()) {
            nums1.resize(m);
        }

        if (n > nums2.size()) {
            n = nums2.size();
        }

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    solution.merge(nums1, m, nums2, n);

    cout << "Merged array: [";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
        if (i < nums1.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}


