#include<iostream>
using namespace std;

// Output Predict Questions : 
int main(){
    int a,b=1;
    a=10;
    if(++a){
        cout<<b<<endl;
    }
    else{
        cout<<++b<<endl;
    }

    int x=1,y=2;

    if(x-- > 0 && ++y > 2){
        cout<<"If stage"<<endl;
    }
    else{
        cout<<"Else stage"<<endl;
    }
    cout<<x<<" "<<y<<endl;

    
}