#include<iostream>
using namespace std;

int zero(int arr[],int n,int c,int ar[]){
        for(int i = n-c ; i < n ; i++ ){
            ar[i] = 0 ;
        }
        int i = 0;
        for(int j = 0 ; j < n ; j++ ){
            if(arr[j] != 0 ){
                ar[i] = arr[j];
                i++;
            }
        }
}
int main() {
    int arr[100],n,c=0,ar[100];

    cout << "Enter the size of the array: ";
    cin >> n;   
    cout << endl;
    cout << "Enter array which contains zeroes: " << endl;
    // Input array elements
    for(int i = 0; i < n; i++) {
        cout << "Enter element No " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;

    for(int i = 0 ; i < n ; i ++ ){
        if(arr[i] == 0){
            c++;
        }
    }

    zero(arr,n,c,ar);

    for(int i = 0 ; i < n ; i++ ){
        cout << ar[i] << " " ;
    }
}