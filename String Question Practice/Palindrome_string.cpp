#include<iostream>
#include<string>
using namespace std;

char toLower(char ch){
    if(ch > 'a' || ch < 'z'){
        return ch;
    }
    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a'; // Convert uppercase to lowercase
    }
}
bool isPalindrome(char ch[]){ 

    int len=0,i=0;
    while(ch[i] != '\0'){
        len++;
        i++;
    }

    int s = 0 , e = len - 1,result = 0;
    while(s<e){
        if(toLower(ch[s]) != toLower(ch[e])){
            result = 0;
            break;
        }
        else{
            if(ch[s] > 'a' && ch[s] < 'z' || ch[s] > 'A' && ch[s] < 'Z' || ch[s] > '0' && ch[s] < '9'){
                s++;
                e--;
            }
            result = 1;
        }
        while (s < e && !((ch[s] >= 'a' && ch[s] <= 'z') || 
                          (ch[s] >= 'A' && ch[s] <= 'Z') || 
                          (ch[s] >= '0' && ch[s] <= '9'))) {
            s++;
            e--;
        }
    }
}
int main(){
    char name[100];

    cout<<"Enter any Character : ";
    cin>>name;
  
    if(isPalindrome(name)){
        cout<<"It is Palindrome"<<endl;
    }
    else{
        cout<<"It is not Palindrome"<<endl;
    }
}