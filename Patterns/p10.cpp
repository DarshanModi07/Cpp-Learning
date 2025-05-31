#include <iostream>
using namespace std;

int main() {
    int i = 1, n;

    cout << "Enter N: ";
    cin >> n;
    cout << endl;

    int m = n;
    while (i <= n) {
        int y = 1;

        // Print spaces
        while (y < i) {
            cout << " ";
            y++;
        }

        // Print stars
        int j = 1; // Reset j every time
        while (j <= m) {
            cout << "*";
            j++;
        }

        cout << endl;
        m--;  // Decrease stars in each row
        i++;  // Next row
    }

    return 0;
}
