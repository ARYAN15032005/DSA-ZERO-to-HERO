#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
for
*/

void UnionArrays(int arr[20],int a[20],int n, int k)
{
    set <int> result;
    for(int i=0;i<n-1;i++) {
        result.insert(arr[i]);
    }
    for(int j=0;j<k-1;j++){
        result.insert(a[j]);
    }

    cout<<"Union:";
    for (int x:result){
        cout<<x<<" ";    
    }
   
}
int main() {
    int n,k;
    int arr[20];
    int A[20];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];
cout << "Enter k: ";
    cin >> k;
    for (int i = 0; i < k; i++) cin >> A[i];

    // Get the new size after removing duplicates
    // n = removedups(arr, n);
    // leftshift(arr,n);
    // movezeroes(arr,n);

    UnionArrays(arr,A,n,k);

    return 0;
}