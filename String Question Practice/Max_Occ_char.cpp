#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string line;
    cout << "Enter a line: ";
    getline(cin,line);

    int acc[100];
    char ch[100];
    for(int i = 0 ; i < line.length()-1 ; i++ ){
        int c = 0;
        ch[i] =  line[i];
        for(int j = 0 ; j < line.length()-1 ; j++ ){
            if(ch[i] == line[j]){
                c++;
            }
        }
        acc[i] = c; 
    }

    int max = acc[0],index;
    // cout<<max<<endl;
    for( int i = 0 ; i < line.length()-1 ; i++ ){
        if(acc[i] > max){
                max = acc[i];
                index = i;
        }
    }

    cout  << "Max Acc. char is \""<<line[index]<<"\"  : "<<max;

}