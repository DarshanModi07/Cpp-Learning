#include <iostream>
using namespace std;

bool check(int arr[], int n){
    int c , c1 ; 
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i]>arr[i-1]){
            c = 1 ;
        }
        if(arr[0] > arr[n-1]){
            c1 = 1;
        }
    }
    if(c == 1 && c1 == 1){
        return true;
    }
    else return false;
}
int main(){
    int arr[100],n;

    cout<<"Enter the size of the array: ";
    cin>>n; 
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;

    if(check(arr, n)){
        cout<<"The array is sorted and rotated."<<endl;
    } else {
        cout<<"The array is not sorted and rotated."<<endl;
    }
}