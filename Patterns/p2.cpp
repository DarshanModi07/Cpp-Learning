#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,x;

    cout<<"Enter a value of N : ";
    cin>>n;
    cout<<endl;

    while(i<=n){
        x=i;
        j=1;
        while(j<=i){
            cout<<x<<" ";
            j++;
            x--;
        }
        cout<<endl;
        i++;
    }
}