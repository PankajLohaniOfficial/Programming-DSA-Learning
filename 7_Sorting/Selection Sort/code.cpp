#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i= 0; i <= n-2; i++){
        int mini = i;
        for (int j = i+1; j <= n-1;j++){ // here used i+1 because we have to compare with the next element not with itself....
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }

        //Swaping now ....
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cout << "Enter the element" << i <<" : ";
        cin >> arr[i];
    }
    
    selection_sort(arr,n);
    for (int i=0; i<n ; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}