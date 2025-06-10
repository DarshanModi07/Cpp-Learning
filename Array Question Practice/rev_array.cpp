#include <iostream>
#include<array>
using namespace std;

int main() {
    int size,arr[100],n;

    cin >> size ; 

    for(int i = 0 ; i < size ; i++ ){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout << endl;

    int num;
    cout << "Enter a position to reverse from: ";
    cin >> num;

    int s = num - 1 , e = size - 1;
    while(s < e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    cout << "Reversed array: ";

    // for(int i = 0 , n = size - 1 ; i < n ; i++ , n-- ){
    //     swap(arr[i], arr[n]);
    // }


    for(int i = 0 ; i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
    
}