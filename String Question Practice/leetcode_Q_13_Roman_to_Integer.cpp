#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int length = s.length(), ans = 0;
        string symbol = "IVXLCDM";
        int value[7] = {1, 5, 10, 50, 100, 500, 1000};

        for (int i = length - 1; i >= 0; i--) {
            for (int j = 0; j < 7; j++) {
                if (s[i] == symbol[j]) {
                    // Handle subtractive notation
                    if (i > 0 && ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I')) {
                        ans += value[j] - 1;
                        i--;
                    } else if (i > 0 && ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X')) {
                        ans += value[j] - 10;
                        i--;
                    } else if (i > 0 && ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C')) {
                        ans += value[j] - 100;
                        i--;
                    } else {
                        ans += value[j];
                    }
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    string roman = "MCMXCIV"; // Example input
    int result = sol.romanToInt(roman);

    cout << "The integer value of " << roman << " is: " << result << endl;

    return 0;
}
