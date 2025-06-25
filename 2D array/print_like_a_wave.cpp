#include<iostream>
using namespace std;
int main(){
    int arr[200][200],row,col;

    cout<<"Enter a Number of Rows : ";
    cin>>row;
    cout<<endl;

    cout<<"Enter a Number of Columns : ";
    cin>>col;
    cout<<endl;

    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cout<<"Enter a element for i : "<<i<<", j : "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < col ; i++){
        if(i&1){
            // Bottom to top 
            for(int j = row-1 ; j >= 0 ; j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // Top to bottom 
            for(int j = 0 ; j < row ; j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}