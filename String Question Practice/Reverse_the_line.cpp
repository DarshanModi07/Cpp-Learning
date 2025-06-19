#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    int end = line.length() - 1;

    while (end >= 0) {
        while (end >= 0 && line[end] == ' ') {
            end--;
        }

        if (end < 0) break;

        int start = end;

        while (start >= 0 && line[start] != ' ') {
            start--;
        }

        for (int i = start + 1; i <= end; i++) {
            cout << line[i];
        }

        cout << " ";

        end = start - 1;
    }

    cout << endl;
    return 0;
}
