#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
we have a array lets sayy 1 2 0 3 0 0 5
23 need 1 2 3 5 0 0 0
*/

void movezeroes(int arr[20],int n){

    int xyz=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=0){
            arr[xyz]=arr[i];
            xyz++;
        
        }
    }
    while(xyz<n){
        arr[xyz]=0;
        xyz++;
    }
}
int main() {
    int n;
    int arr[20];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Get the new size after removing duplicates
    // n = removedups(arr, n);
    // leftshift(arr,n);
    movezeroes(arr,n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}