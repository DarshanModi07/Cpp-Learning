#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n ; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[100], n;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}