#include<iostream>
using namespace std;

// Helper function to check if we can allocate books with maxPages per student
bool isPossible(int arr[], int n, int m, int maxPages) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages)
            return false; // A single book exceeds maxPages, not possible

        if (pageSum + arr[i] <= maxPages) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m)
                return false;

            pageSum = arr[i];
        }
    }

    return true;
}

int bookAllocation(int arr[], int n, int m) {
    if (m > n) return -1; // More students than books, not possible

    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) end += arr[i]; // total pages
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; // try to minimize
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[100], sum = 0;
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;           
    cout << "Enter the number of students: ";
    cin >> m;   
    cout << "Enter the number of pages in each book: ";     
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    int ans = bookAllocation(arr, n, m); 
    if (ans != -1)
        cout << "Minimum number of pages: " << ans << endl;
    else
        cout << "Allocation not possible." << endl;

    return 0;
}
