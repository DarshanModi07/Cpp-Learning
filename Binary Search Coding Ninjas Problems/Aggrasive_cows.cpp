#include<iostream>
#include<algorithm>
using namespace std;

bool PositionOfCows(int arr[], int n, int c, int mid){
    int cowCount = 1;
    int lastPosition = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] - lastPosition >= mid){
            cowCount++;
            if(cowCount == c) {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin >> arr[i];
    }

    int c;
    cout<<"Enter the number of cows: ";
    cin>>c;

    sort(arr, arr + n); // 🧠 Important: stalls must be sorted

    int s = 0;
    int e = arr[n - 1] - arr[0]; // max possible distance
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(PositionOfCows(arr, n, c , mid)){
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    if (ans == -1) {
        cout << "Not possible to place cows with given distance." << endl;
    } else {
        cout << "The largest minimum distance is: " << ans << endl;
    }
}
