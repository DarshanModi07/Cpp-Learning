#include <iostream>
using namespace std;

int  length(char ch[]){
    int c = 0;
    while(ch[c]!= '\0'){
        c++;
    }
    return c;
}
int main(){
    char ch[10];

    cout << "Enter Your Name : ";
    cin >> ch;
    cout << "Your Name is : " << ch;

    int len = length(ch);
    cout << endl;
    cout << "Length of Your Name is : " << len << endl;

}