#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
       int n = arr1.size();
       int m = arr2.size();
       
       unordered_set <int> s;
       vector <int> result;
       
       for (int i = 0; i<n ; i++){
           s.insert(arr1[i]);
       }
       
       for (int i=0; i<m ; i++){
           if (s.count (arr2[i]) > 0){
               result.push_back(arr2[i]);
               s.erase(arr2[i]);
           }
       }
       
       return result;
    }
};
