#include<iostream>
using namespace std;
 
void sort(int arr3[],int n){
    int min = arr3[0];
    for(int i = 0 ; i < n ; i++ ){
        for(int j = i+1 ; j < n ; j++ ){
           if(arr3[i] > arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
}

void merge(int arr1[],int n,int arr2[],int m ,int arr3[]){
    int i,j,x;
    for( i = 0 ; i < n ; i++ ){
        arr3[i] = arr1[i];
    }
    for(int j = i ,x = 0; x < m ; j++,x++){
        arr3[j] = arr2[x];
    }
    sort(arr3, n + m);
}
int main(){
    int arr1[100],arr2[100],arr3[200];
    int n,m;

    cout<<"Enter First array's Size : ";
    cin>>n;
    cout<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter Element No " << i + 1 << ": ";
        cin>>arr1[i];
    }
    cout<<endl;

    cout<<"Enter Second array's Size : ";
    cin>>m;
    cout<<endl;

    for(int i = 0 ; i < m ; i++){
        cout<<"Enter Element No : " << i + 1 << ": ";
        cin>>arr2[i];
    }
    cout<<endl;
    merge(arr1,n,arr2,m,arr3);

    for(int i = 0 ; i < n+m ; i++){
        cout<<arr3[i]<<" ";
    }
    
}