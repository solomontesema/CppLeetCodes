#include <iostream>
#include <vector>

using namespace std;

class Solution {
    /*
    Q: Maximum Subarray: Given an integer array nums, find the contiguous subarray 
    (containing at least one number) which has the largest sum and return its sum.
    */
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            curr_sum = max(nums[i], curr_sum + nums[i]);
            max_sum = max(max_sum, curr_sum);
        }
        
        return max_sum;
    }
};

int main() {
    Solution s;
    
    vector<int> nums1 = {-2,1,-3,4,-1,2,1,-5,4};
    cout << s.maxSubArray(nums1) << endl; // Output: 6
    
    vector<int> nums2 = {1};
    cout << s.maxSubArray(nums2) << endl; // Output: 1
    
    vector<int> nums3 = {5,4,-1,7,8};
    cout << s.maxSubArray(nums3) << endl; // Output: 23
    
    return 0;
}

