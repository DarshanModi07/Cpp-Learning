#include<iostream>
using namespace std;

int rotate(int arr[],int n,int m,int ar[]){
    int j = 0;
    for(int i = n - m ; i < n ; i++ , j++ ){
        ar[j] = arr[i];
    }
    for(int x = j , y = 0 ; x < n ; x++ , y++){
        ar[x] = arr[y];
    }
}
int main(){
    int arr[100],n,m,ar[100];

    cout<<"Enter a size of the array : ";
    cin>>n;
    cout<<endl;

    for(int i = 0 ; i < n ; i++ ){
        cout<<"Enter a element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Enter a how many elemant you want to rotate : ";
    cin>>m;
    cout<<endl;

    rotate(arr,n,m,ar);

    for(int i = 0 ; i < n ; i++ ){
        cout<<ar[i]<<" ";
    }
}