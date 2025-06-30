#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,m = 1000000007; ;
    cout<<"Enter base : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter exponent : ";
    cin>>b;
    cout<<endl;

    long long ans = 1;

    while( b  > 0){
        if( b&1 ){
            // ans = ans * a;
            ans = ((ans)%m * (a)%m) % m;
        }
        a = a * a;
        b = b >> 1;
    }

    cout<<"Result : " <<ans; 
}