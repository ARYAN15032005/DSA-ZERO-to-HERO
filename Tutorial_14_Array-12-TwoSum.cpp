#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
for
*/

void TwoSum(int arr[20],int n,int target){
    
    for (int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j;
            return;}
        }
    }
}

// int maxi(int arr[20],int n){
//     int maxi=0;
//     int cnt=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==1){
//             cnt++;
//         }
//         else{
//             cnt=0;
//         }
    
//     maxi=max(maxi,cnt);
    
// }
// return maxi;
// }
int main() {
    int n;
    
    
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    int target;
    cout << "Enter Target: ";
    cin >> target;


    for (int i = 0; i < n; i++) cin >> arr[i];


    // UnionArrays(arr,A,n,k);
    // cout<<MissingNo(arr,n)<<endl;
    TwoSum(arr,n,target);

    return 0;
}