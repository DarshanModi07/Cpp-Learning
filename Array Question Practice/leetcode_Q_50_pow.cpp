#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long z = 1;
        for (int i = 0; n != 0; i++) {
            if (n > 0) {
                if (n % 2 == 1)
                    ans *= x;
                x = x * x;
                n /= 2;
            } else {
                if (n % 2 == -1)
                    ans *= 1 / x;
                x = x * x;
                n /= 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = sol.myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}
