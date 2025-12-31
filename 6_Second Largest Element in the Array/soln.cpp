#include <bits/stdc++.h>
using namespace std;

// Function to find the second largest element in an array (Best Approach)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = arr[0];
        for (int i = 0; i<n;i++){
            if (arr[i] > largest){
                largest = arr[i];
            }
        }
        
        //2nd pass
        int slargest = -1;
        for (int i = 0; i<n ; i++){
            if (arr[i] > slargest && arr[i] != largest){
                slargest = arr[i];
            }
        }
        
        
        return slargest;
    }
};