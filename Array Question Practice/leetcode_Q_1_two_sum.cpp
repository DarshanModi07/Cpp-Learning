#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (target == nums[i] + nums[j]) {
                    if (i < j) {
                        ans[0] = i;
                        ans[1] = j;
                        return ans;
                    }
                    if (i > j) {
                        ans[0] = j;
                        ans[1] = i;
                        return ans;
                    }
                }
            }
        }
        return {};
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
