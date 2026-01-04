#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        int i = 0, j = 0;
        int n = arr1.size(), m = arr2.size();

        vector<int> answer;

        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr1[i] > arr2[j]) {
                j++;
            }
            else {
                if (i > 0 && arr1[i] == arr1[i - 1]) {
                    i++;
                    j++;
                    continue;
                }
                answer.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return answer;
    }
};
