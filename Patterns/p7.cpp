#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n;
    char x='A',y='A';

    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    int z = (n/2)+1;

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<y<<" ";
            j++;
            y++;
        }
        cout<<endl;
        i++;
        y = y - z;
    }
}