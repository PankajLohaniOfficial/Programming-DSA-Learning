#include <bits/stdc++.h> //includes all library
// or
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {
        if (arr.size() == 0) return {};
        int i = 0;  // pointer for unique elements

        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) {
                arr[i+1] = arr[j];
                i++;
            }
        }
        return vector<int>(arr.begin(), arr.begin() + i + 1);
    }
};
