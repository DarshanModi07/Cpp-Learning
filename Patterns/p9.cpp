#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n;

    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    int z=n;

    while(i<=z){
        j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        n--;
        cout<<endl;
        i++;
    }
}