#include <iostream>
using namespace std;
    int main() {

        string chars;
        cout << "Enter the characters (without spaces): ";
        getline(cin, chars);
        cout<<endl;

        string str = "";
        int count = 1;

        for (int i = 0; i < chars.size(); i++) {
            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                count++;
            } else {
                str += chars[i];

                if (count > 1) {
                    // Convert count to string and add each digit
                    string cnt = to_string(count);
                    for (char c : cnt) {
                        str += c;
                    }
                }

                count = 1; // reset for next char
            }
        }

        // Copy result string back to original chars vector
        for (int i = 0; i < str.size(); i++) {
            chars[i] = str[i];
        }

        cout << "Compressed string: " << str << endl;
        return str.size(); // return compressed length
    }

