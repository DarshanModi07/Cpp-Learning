#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][100], int rows, int cols, int target) {
    int left = 0;
    int right = rows * cols - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / cols][mid % cols];
        
        if(midValue == target) {
            return true;
        }
        else if(midValue < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return false;
}

int main() {
    int rows, cols, target;
    int matrix[100][100]; // Assuming max size 100x100
    
    // Get matrix dimensions
    cout << "Enter number of rows (max 100): ";
    cin >> rows;
    cout << "Enter number of columns (max 100): ";
    cin >> cols;
    
    // Fill matrix
    cout << "Enter matrix elements row-wise (sorted):" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Get target value
    cout << "Enter target value to search: ";
    cin >> target;
    
    // Search for target
    bool found = searchMatrix(matrix, rows, cols, target);
    
    // Display matrix
    cout << "\nMatrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Display result
    if(found) {
        cout << "Target " << target << " is present in the matrix." << endl;
    } else {
        cout << "Target " << target << " is not present in the matrix." << endl;
    }
    
    return 0;
}