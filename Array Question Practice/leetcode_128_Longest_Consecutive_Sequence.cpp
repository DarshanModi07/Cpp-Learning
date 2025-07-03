#include<iostream>
#include<vector>
#include<algorithm>  // for sort
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int count = 1;
        int maxCount = 1;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] + 1 == nums[i + 1]) {
                count++;
                maxCount = max(maxCount, count);
            }
            else if(nums[i] == nums[i + 1]) {
                continue; // skip duplicates
            }
            else {
                count = 1;
            }
        }

        return maxCount;
    }
};

int main() {
    vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};

    Solution sol;
    int result = sol.longestConsecutive(nums);

    cout << "Longest consecutive sequence length is: " << result << endl;

    return 0;
}
