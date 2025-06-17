#include<iostream>
using namespace std;

int main(){
    string line;
    cout << "Enter a line: ";
    getline(cin,line);
    cout<<endl;

    string sub;
    cout << "Enter a substring: ";
    cin >> sub;
    cout<<endl;

    while(line.length() > 0 && line.find(sub) < line.length()){
        line.erase(line.find(sub), sub.length());
    }

    cout << "After removing substring: " << line << endl;
    return 0;
}