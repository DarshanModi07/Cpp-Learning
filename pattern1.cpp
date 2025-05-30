#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n;

    cout<<"Enter a value of N : ";
    cin>>n;
    cout<<"\n";

    while(i<=n){
        while(j<=i){
            
            cout<<" * ";
            j++;
            
        }
        cout<<"\n";
        j=1;
        i++;
    }

}