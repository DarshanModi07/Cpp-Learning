#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    string space = "@40";
    string result = "";

    for (char c : line) {
        if (c == ' ') {
            result += space;
        } else {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
