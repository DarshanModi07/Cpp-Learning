#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n,y;
    char x='A';

    cout<<"Enter a value of N : ";
    cin>>n;
    cout<<endl;

    while(i<=n){
        j=1;
        char z='A'+(n-i);
        while(j<=i){
            cout<<z;
            j++;
            z++;
        }
        cout<<endl;
        i++;
    }
}

