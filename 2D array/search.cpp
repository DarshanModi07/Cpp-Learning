#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int element) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == element) {
                return true; // Element found
            }
        }
    }
    return false; // Element not found
}

int main() {
    int arr[3][3];

    cout<<"Enter elements : "<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"Enter element at position ("<<i<<","<<j<<"): ";  // 0-indexed row and column numbers
            cin >> arr[i][j];
        }
    }

    int element;
    cout<<"Enter the element to search: ";
    cin >> element;
    cout << endl;
    
    if(isPresent(arr,element)){
        cout<<"Element found in the array."<<endl;
    }
    else {
        cout<<"Element not found in the array."<<endl;
    }
}