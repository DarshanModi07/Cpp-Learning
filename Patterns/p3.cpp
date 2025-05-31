#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,n;
    char x = 'A';

    cout<<"Enter a vlaue of N :";
    cin>>n;
    cout<<endl;

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<x<<" ";
            j++;
            
        }
        cout<<endl;
        i++;
        x++;
    }
}