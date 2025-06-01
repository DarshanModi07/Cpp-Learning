#include<iostream>
using namespace std;

// Output Predict Questions : 

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int show = a + b;
        a = b;
        b = show;
    }

    return 0;
}
