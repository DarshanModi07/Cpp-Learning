#include <iostream>
#include<algorithm>
using namespace std;


/*    int maxProfit(int prices[],int size) {
        int min=prices[0];
        for(int i = 0 ; i < size ; i++){
            if(prices[i]<min){
                min=prices[i];
            }
        }
        int imin;
        for(int i = 0 ; i < size ; i++){
            if(min == prices[i]){
                imin = i;
            }
        }

        if(imin == size-1)
            return 0;
        int max=prices[imin+1];
        for(int i = imin+1 ; i < size ; i++){
            if(max < prices[i]){
                max = prices[i];
            }
        }
        int imax;
        for(int i = 0 ; i < size ; i++){
            if(max == prices[i]){
                imax = i;
            }
        }
        cout<<"Buy A stock on day "<<imin+1<<" and sell it on "<<imax+1<<endl;
        return max-min;
    } */

    //simple logical code : 
        int maxProfit(int prices[], int size) {
            int minSoFar = prices[0];
            int maxProfit = 0;

            for (int i = 1; i < size; i++) {
                if (prices[i] < minSoFar)
                    minSoFar = prices[i];
                else
                    maxProfit = max(maxProfit, prices[i] - minSoFar);
            }

            return maxProfit;
        }
        
    int main(){
        int prices[100],size;
        cout<<"Enter Number od DAYS : ";
        cin>>size;
        for(int i = 0 ; i < size ; i++){
            cout<<"Enter Stock Prize on Day "<<i+1<<" : ";
            cin>>prices[i];
        }
        int profit = maxProfit(prices,size);
        cout<<"MAX Profit is : "<<profit;
    }


    


