// #include<iostream>
// using namespace std;
//     void removeSame(int arr[], int count, int i) {
//         int index  = i - count;
//         arr.erase(arr + index, arr + i + 1);
//     }

//     void removeDuplicates(int nums[], int size) {
//         int count = 0;
//         int feq = 0;

//         for (int i = 1; i < size; i++) {
//             if (nums[i] == nums[i - 1]) {
//                 count++;
//                 feq++;
//             } else {
//                 if (count >= 2) {
//                     removeSame(nums, count, i - 1);
//                 }
//                 count = 0;
//             }
//         }

//         for(int i = 0 ; i < size - feq; i++) {
//             cout << nums[i] << " ";
//         }
//     }

//     int main(){
//         int nums[] = {1, 1, 2, 3, 3, 4, 5, 5, 5};
//         removeDuplicates(nums,sizeof(nums)/sizeof(nums[0]));
//     }

#include<iostream>
#include<vector>
using namespace std;

void removeSame(vector<int>& arr, int count, int i) {
    int index = i - count;
    arr.erase(arr.begin() + index, arr.begin() + i - 1);
}

void removeDuplicates(vector<int>& nums) {
    int i = 1;
    int count = 0;

    while (i < nums.size()) {
        if (nums[i] == nums[i - 1]) {
            count++;
            i++;
        } else {
            if (count >= 2) {
                removeSame(nums, count, i - 1);
                i = 1; // restart scan after erase to avoid skipping
                count = 0;
            } else {
                count = 0;
                i++;
            }
        }
    }

    // Final case check for end of vector
    if (count >= 2) {
        removeSame(nums, count, nums.size() - 1);
    }

    for (int x : nums) {
        cout << x << " ";
    }
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5, 5};
    removeDuplicates(nums);
}
