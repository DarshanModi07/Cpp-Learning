#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    // Use long double to prevent factorial overflow
    long double fact(int num) {
        if (num == 0 || num == 1)
            return 1;
        return (long double)num * fact(num - 1);
    }

    // Compute nCr using factorials
    long long nCr(int n, int r) {
        long double result = fact(n) / (fact(r) * fact(n - r));
        return (long long)(result + 0.5);  // rounding to nearest integer
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                row.push_back((int)(nCr(i, j) + 0.5));  // using nCr
            }
            triangle.push_back(row);
        }

        return triangle;
    }
};

int main() {
    Solution sol;
    int numRows = 5;  // Example value

    vector<vector<int>> result = sol.generate(numRows);

    // Print the triangle
    for (auto row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
