#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_to_index.count(complement)) {
                return {num_to_index[complement], i};
            }
            num_to_index[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices of two numbers that add up to " << target << ": " << result[0] << ", " << result[1] << endl;
        cout << "The two numbers are: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No two numbers add up to " << target << endl;
    }

    return 0;
}
