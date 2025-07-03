#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = 1, maxi = 1, num;

        if (nums.size() == 1) 
            return nums[0];

        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                x++;
            } else {
                if (x > maxi) {
                    num = nums[i - 1];
                    maxi = x;
                }
                x = 1;
            }
        }

        // Final check for last group
        if (x > maxi) {
            num = nums[nums.size() - 1];
        }

        return num;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Sample input

    cout << "Majority Element: " << sol.majorityElement(nums) << endl;

    return 0;
}
