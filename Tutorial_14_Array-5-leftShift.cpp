#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
logic
we have a array given lets say 1,2,3,4,5
we need 2,3,4,5,1

pointer at a[0]=temp;
a[0]=a[1]
i++,
a[n-1]=a[0]
*/

void leftshift(int arr[20],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main() {
    int n;
    int arr[20];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Get the new size after removing duplicates
    // n = removedups(arr, n);
    leftshift(arr,n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}