// Remove All Adjacent Duplicates In String
#include <iostream>
using namespace std;

int main(){

        string s;
        cout << "Enter the string: ";
        cin >> s;  // input the string

        // Using a string to store the result
    string result = "";
        int j = -1;  // index of last character in result

        for (int i = 0; i < s.length(); i++) {
            if (j >= 0 && result[j] == s[i]) {
                result.erase(j, 1);  // remove the last character
                j--;  // update pointer
            } else {
                result += s[i];  // add new character
                j++;
            }
        }

        cout<<result<<endl;  // print the final result
}