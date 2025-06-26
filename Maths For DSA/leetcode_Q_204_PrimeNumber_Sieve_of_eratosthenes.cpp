#include<iostream>
#include<vector>
using namespace std;
    int countPrimes(int n) {
       vector<bool> prime(n+1,true);
       prime[0]=prime[1]=false;
       int cnt = 0;
       
       for(int i = 2 ; i < n ; i++){
            if(prime[i]){
                cnt++;

                for(int j = i ; j < n ; j=j+i){
                    prime[j]=false;
                }
            }
       }
       return cnt;
    }

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of prime numbers less than or equal to " << n << " is: " << countPrimes(n) << endl;
    return 0;
}

