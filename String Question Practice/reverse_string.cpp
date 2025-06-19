#include <iostream>
using namespace std;

void reverse(char ch[], int len) {
    int s = 0;
    int e = len - 1;

    while (s < e) {
        swap(ch[s++], ch[e--]);
    }
}

int length(char ch[]) {
    int c = 0;
    while (ch[c] != '\0') {
        c++;
    }
    return c;
}

int main() {
    char ch[100]; // Increased size to avoid overflow

    cout << "Enter Your Name : ";
    cin >> ch;
    
    cout << "Your Name is : " << ch << endl;

    int len = length(ch);
    cout << "Length of Your Name is : " << len << endl;

    reverse(ch, len);
    cout << "Reversed Name is : " << ch << endl;

    return 0;
}
