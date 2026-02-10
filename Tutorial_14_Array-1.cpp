#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[10];
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " Element :";
        cin >> arr[i];
    }

    // Logic for finding the max
    int max = arr[0]; 
    for (int i = 1; i < n; i++) { // Start at 1 since max is already arr[0]
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The largest element is: " << max;

    return 0;
}