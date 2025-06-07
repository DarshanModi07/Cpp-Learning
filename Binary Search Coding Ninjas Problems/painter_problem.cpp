#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int paint, int mid) {
    int total = 0;
    int count = 1; // start with one painter

    for (int i = 0; i < size; i++) {
        if (arr[i] > mid) {
            return false; // One board itself is bigger than mid
        }

        if (total + arr[i] <= mid) {
            total += arr[i]; // add board to current painter
        } else {
            count++; // need new painter
            total = arr[i]; // assign this board to new painter
            if (count > paint) {
                return false; // more painters than allowed
            }
        }
    }
    return true;
}

int Painter(int arr[],int size , int paint , int sum){
    int s = 0,e=sum;
    int mid = s + (e-s)/2;
    int ans = -1,total = 0, count = 1;

   while( s <= e){
       mid = s + (e-s)/2;

       if(isPossible(arr,size,paint,mid)){
           ans = mid;
           e = mid - 1; // try to minimize paint time
       }
       else{
        s = mid + 1; // increase the paint time
    }
   }
    return ans;
}
int main(){
    int arr[100],n,m,sum = 0;
    cout << "Enter Size of array: ";
    cin >> n;
    cout<<endl;
    for (size_t i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout<<endl;
    cout<<"Enter the number of painters: ";
    cin >> m;
    cout << endl;
    int start = 0, end = 0;     
    int count = 0;

    int ans = Painter( arr, n , m , sum);

    cout<<ans<<endl;
}