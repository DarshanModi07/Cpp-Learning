#include <iostream>
using namespace std;

void spiralPrint(int matrix[][100], int row, int col) {
    int ans[row * col];
    int index = 0;
    
    int count = 0;
    int total = row * col;
    
    // Initializing Indexes:
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    
    while (count < total) {
        // Print top row (left to right)
        for (int i = startingCol; count < total && i <= endingCol; i++) {
            ans[index++] = matrix[startingRow][i];
            count++;
        }
        startingRow++;
        
        // Print right column (top to bottom)
        for (int i = startingRow; count < total && i <= endingRow; i++) {
            ans[index++] = matrix[i][endingCol];
            count++;
        }
        endingCol--;
        
        // Print bottom row (right to left)
        for (int i = endingCol; count < total && i >= startingCol; i--) {
            ans[index++] = matrix[endingRow][i];
            count++;
        }
        endingRow--;
        
        // Print left column (bottom to top)
        for (int i = endingRow; count < total && i >= startingRow; i--) {
            ans[index++] = matrix[i][startingCol];
            count++;
        }
        startingCol++;
    }
    
    // Print the spiral order
    int c = 0 ;
    cout << "Spiral Order: "<<endl;
    for (int i = 0; i < row * col; i++) {
        c++;
        cout << ans[i] << " ";
        if( c % col == 0) {
            cout << endl; // New line after every row
        }
    }
    cout << endl;
}

int main() {
    int arr[100][100], row, col;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << endl;

    cout << "Enter number of columns: ";
    cin >> col;
    cout << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element for row = " << i << " & col = " << j << " : ";
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // Printing in good style
    cout << "You entered array is: " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // Print spiral order
    spiralPrint(arr, row, col);
    
    return 0;
}