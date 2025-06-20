#include <iostream>
using namespace std;

int sum(int arr[100][100],int row,int col){
    int sum[3] = {0};
     for(int i = 0 ; i < col ; i++ ){
        for(int j  = 0 ; j < row ; j++ ){
            sum[i] += arr[j][i];
        }
    }

    for(int i = 0 ; i < col ; i++ ){
        cout<<"Sum of "<<i<<"th column : "<<sum[i];
        cout<<endl;
    }
}

int main(){
    int arr[100][100];
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout<<endl;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout<<endl;

    // Input elements into the 2D array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }

    sum(arr,rows,cols);
}