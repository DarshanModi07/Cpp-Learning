#include <iostream>
#include<math.h>
using namespace std;

int sum(int arr[],int n){
    int rem , sum = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        rem = arr[i];
        sum = sum*10 + rem ; 
    }
    return sum;
}

int main(){
    int arr[100],n,m,ar[100],add[100];

    cout << "Enter the size of the first array: ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter the size of the second array: ";
    cin >> m;
    cout << endl;

    for(int i = 0; i < m; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> ar[i];
    }
    cout << endl;
    
    int ans1 = sum(arr, n);
    cout << ans1 << endl;
    int ans2 = sum(ar, m);
    cout << ans2 << endl;
    int total = ans1 + ans2;
    cout << "The sum of the two arrays is: " << total << endl;
    int rem,ans[100];

    for(int i = 0 ; i < n ; i++ ){
        rem = total % 10 ;
        add[i] = rem;
        total = total / 10 ;
    }

    int i = 0,a[100];
    for(int j = n-1 ; i < n ; j-- , i++){
        a[i] = add[j];
    }

    for(int x = 0 ; x < n ; x++ ){
        cout<<a[x]<<" ";
    }
}   