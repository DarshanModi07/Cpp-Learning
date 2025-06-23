#include <vector>
using namespace std;
#include <iostream>


    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<bool> rowZero(rows, false);
        vector<bool> colZero(cols, false);

        // First pass: Mark rows and cols
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }

        // Second pass: Set zeros
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(rowZero[i] || colZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 1, 1}
    };

    setZeroes(matrix);

    for(int  i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
