#include<iostream>
using namespace std;

// Output Predict Questions : 

int main(){
    int n,c=0;

    cout<<"Entre a  Number : ";
    cin>>n;
    cout<<endl;

    while(n!=0){
        if(n&1){
            c++;
        }
        n=n>>1;
    }

    cout<<c;
}