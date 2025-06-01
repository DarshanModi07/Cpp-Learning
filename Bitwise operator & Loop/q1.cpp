#include<iostream>
using namespace std;

// Reverse Number : 

int main(){
    int n;

    cout<<"Enter a Number : ";
    cin>>n;
    cout<<endl;

    int rem,sum=0,mul=1,l=0,num;

    for(int i=1;;i++){
        rem=n%10;
        n=n/10;

        sum+=rem;
        mul*=rem;
        
        if(n==0){
            break;
        }
    }

    cout<<mul<<endl;
    cout<<sum<<endl;
    cout<<"Here : "<<(mul-sum);
}