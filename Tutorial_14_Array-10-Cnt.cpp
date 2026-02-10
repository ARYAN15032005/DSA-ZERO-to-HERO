#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
for
*/

// int MissingNo(int  arr[20],int n){

//     int sum=0;
//     for (int i=0;i<n-1;i++){
//         sum=sum+arr[i];
//     }

//     int total=n*(n+1)/2;

//     return  total-sum;

   

// }

int maxi(int arr[20],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
    
    maxi=max(maxi,cnt);
    
}
return maxi;
}
int main() {
    int n;
    
    
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];


    // UnionArrays(arr,A,n,k);
    // cout<<MissingNo(arr,n)<<endl;
    cout<<maxi(arr,n);

    return 0;
}