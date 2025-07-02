#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    int findIt(vector<int>& nums) {
        int ans = 0, x = -1;
        for (int i = 0; i < nums.size() && i + 1 < nums.size(); i++) {
            ans = nums[i] ^ nums[i + 1];
            if (ans == 0) {
                x = i;
            }
        }
        return x;
    }

public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = findIt(nums);
        return nums[ans];
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << "Duplicate: " << sol.findDuplicate(nums) << endl;
    return 0;
}
