#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,y=1;

    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    int z = n-1;
    while(i<=n){
        y=1;
        while(y<=z){
            cout<<" ";
            y++;
        }
        z--;
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
            
        }
        cout<<endl;
        i++;
    }
}