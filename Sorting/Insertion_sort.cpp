#include <iostream>
using namespace std;

int main(){
    int arr[100],n;

    cout<<"Enter the size of array: ";
    cin>>n;     
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;

    for(int i = 1 ; i < n ; i++){
        int temp  = arr[i];
        for(int j = i -1 ; j >= 0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
            arr[j] = temp;
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}