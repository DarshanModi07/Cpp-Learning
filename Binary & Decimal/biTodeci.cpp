#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0,ans=0;

    cout<<"Entre Number of Binary : ";
    cin>>n;
    cout<<endl;

    while(n != 0){
        
        int bit = n%10;

        if(bit == 1){
            ans = pow(2,i) + ans;
        }

        n=n/10;
        
        i++;
    }

    cout<<ans;
}