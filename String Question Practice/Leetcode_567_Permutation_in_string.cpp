#include<iostream>
using namespace std;
// Leetcode 567: Permutation in String


    bool check(int arr1[26] , int arr2[26]){
        for(int i = 0 ; i < 26 ; i++ ){
            if(arr1[i] != arr2[i]){
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        // S1 na letters nu counting 
        for(int i = 0 ;  i < s1.length() ; i++ ){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // for first two element of array
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i < windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        // Check for count1 == count2 or not
        if(check(count1,count2))
            return true;

        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i-windowSize];
            int index2 = oldChar - 'a';
            count2[index2]--;

            i++;

            if(check(count1,count2))
                return 1;

            
        }

        return 0;
    }

    int main(){
        string s1,s2;
        cout << "Enter the s1 string: ";
        cin >> s1;
        cout << endl;

        cout << "Enter the s2 string: ";
        cin >> s2;
        cout << endl;

        if(checkInclusion(s1, s2)){
            cout << "Yes, s1 is a permutation of s2." << endl;
        } else {
            cout << "No, s1 is not a permutation of s2." << endl;
        }
    }