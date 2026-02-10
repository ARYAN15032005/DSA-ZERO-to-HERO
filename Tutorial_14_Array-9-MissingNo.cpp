#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
for
*/

int MissingNo(int  arr[20],int n){

    int sum=0;
    for (int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }

    int total=n*(n+1)/2;

    return  total-sum;

   

}
int main() {
    int n;
    
    
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n-1; i++) cin >> arr[i];


    // UnionArrays(arr,A,n,k);
    cout<<MissingNo(arr,n)<<endl;

    return 0;
}