#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,x=1;

    cout<<"Enter a value of N : ";
    cin>>n;
    cout<<endl;

    while(i<=n){
        while(j<=n){
            cout<<" ";
            cout<<x<<" ";
            j++;
            x++;
        }
        cout<<endl;
        i++;
        j=1;
    }

}