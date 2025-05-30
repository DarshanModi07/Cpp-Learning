#include<iostream>
using namespace std;

int main(){
    int n,i=1,fact=1;

    cout<<"Enter a Number to do Factorial : ";
    cin>>n;

    while(i<=n){
        fact*=i;
        i++;
    }

    cout<<"Fact of " << n << " is " << fact;


}