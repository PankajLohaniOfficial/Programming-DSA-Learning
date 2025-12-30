#include <bits/stdc++.h>
using namespace std;

class Pankaj {
public:
    void helper(vector<int> &arr, int i) {
        int n = arr.size();
        // Base condition
        if (i >= n / 2)
            return;

        swap(arr[i], arr[n - i - 1]);
        helper(arr, i + 1);
    }

    void reverseArray(vector<int> &arr) {
        helper(arr, 0);
    }
};



int main() {
    int n;
    cout<< "Enter the number of the elements to be added in the array:- \n";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout<<"Enter the "<< i+1 <<" element : \n";
        cin >> arr[i];
    }
    //Making the Object in this with the name Pankaj
    Pankaj obj;
    obj.reverseArray(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
