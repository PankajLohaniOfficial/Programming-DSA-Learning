#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i=n-1; i>=1; i--){
        int did_swap = 0;

        for (int j=0; j<=i-1; j++){
            if (arr[j] > arr[j+1]){
                    //Swaping.....
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                did_swap = 1;
            }
        }


        //This is the swap optimization part....
        if (did_swap == 0){
            break;
        }
    }
}


int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cout << "Enter the element " << i+1 <<" : ";
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);
    cout <<"The sorted array using the Bubble Sort is : " ;

    for (int i=0; i<n ; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}