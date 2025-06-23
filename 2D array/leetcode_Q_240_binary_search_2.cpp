#include <iostream>
using namespace std;

bool searchMatrix(int matrix[100][100],int row,int col, int target) {

        int rowIndex = 0; 
        int colIndex = col - 1; // Start from top-right corner

        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];

            if(element == target){
                return true;
            }
            else if(element < target){
                rowIndex++; // Move down to next row
            }
            else {
                colIndex--; // Move left in current row
            }
        }
        return false; // Only return false after exhausting all possibilities
    }

int main(){
    int arr[100][100], row, col, target;
    cout << "Enter number of rows (max 100): ";
    cin >> row;
    cout<<endl;
    cout << "Enter number of columns (max 100): ";
    cin >> col;
    cout<<endl;
    cout<<"Enter Array Elements: "<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter target value to search: ";
    cin >> target;
    cout << endl;

    if(searchMatrix(arr, row, col, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }
}