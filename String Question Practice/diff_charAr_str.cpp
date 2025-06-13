#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter a char Array : ";
    cin>>str;
    cout<<str<<endl;

    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<s<<endl;

    cout<<"Via for loop : "<<endl;
    cout<<"Char Array : ";
    for(int i = 0; str[i] != '\0'; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    
    cout<<"String : ";
    for(int i = 0; s[i] != '\0'; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

}