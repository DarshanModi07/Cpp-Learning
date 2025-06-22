#include<iostream>
using namespace std;

int main(){
    int matrix[100][100];
    int ans[100][100];

    int row,col;
    cout<<"Enter Number Of Rows and Column of Squre Matrix : ";
    cin>>row;
    cout<<endl;
    col = row;

    
    //Input form user
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Enter Element where i="<<i<<" col="<<j<<" : ";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"Your Matrix :"<<endl;
    // User Entered Matrix : 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Proccess of Rotating
    for(int colIndex = col-1 , j = 0; colIndex >= 0 ; colIndex-- , j++){
        for(int  rowIndex = 0 , i = 0 ; rowIndex < row ; rowIndex++ , i++ ){
            ans[rowIndex][colIndex] = matrix[j][i];
        }
    }

    cout<<"Rotated Matrix : "<<endl;
    //Print Rotated array
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    

}
