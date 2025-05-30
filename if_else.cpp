#include<iostream>
using namespace std;

int main(){
    // int a,b;
    // cout<<"Enter A : ";
    // cin>>a;
    // cout<<"\n";
    // cout<<"Enter B : ";
    // cin>>b;
    // cout<<"\n";
    // if(a==b){
    //     cout<<"A is equal to B";
    // }
    // else if(a<b){
    //     cout<<"A is smaller than B";
    // }
    // else if(a>b){
    //     cout<<"B is smaller than A";
    // }

    char a;
    cout<<"Enter Input : ";
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<<"Input is Capital Letter";
    }
    else if(a>='a' && a<='z'){
        cout<<"Input is small Letter";
    }
    else if(a>='0' && a<='9'){
        cout<<"Input is Number";
    }
    else{
        cout<<"Input is Symbol";
    }


}