#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++) {
            sum += nums[i];
            if(sum > maxSum) {
                maxSum = sum;
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // example input
    int result = sol.maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;
    return 0;
}
