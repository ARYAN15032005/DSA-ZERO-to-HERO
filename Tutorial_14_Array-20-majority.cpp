#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <bits/stdc++.h>
/*
Find majority
find elements whihc are greater than n/3
*/
using namespace std;
// brute force
// void majority(int arr[],int n){

    
//     for(int i=0;i<n;i++){
//         bool alreadychecked=false;
//         for(int k=0;k<i;k++){
//             if(arr[k]==arr[i]){
//                 alreadychecked=true;
//                 break;
//             }
//         }
//         if(alreadychecked==false){
//         int cnt=0;
//         int x=arr[i];
//         for(int j=0;j<n;j++){
//             if(arr[j]==x){
//                 cnt++;
                
//             }
//         }
//         if(cnt>n/3){
//             cout<<"The majority element is :" <<arr[i];
//         }
//     }}
    
    
// }

// Better approach
//store in set

vector <int> majority(vector <int>&n){
    vector<int> result;
    map <int, int> mpp;
    int i;
    int size=n.size();
    for(i=0;i<size;i++){
        mpp[n[i]]++;
    
    if(mpp[n[i]]==size/3+1){
        result.push_back(n[i]);
    }
    
}
return result;
}

int main() {
    int n;
    
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    vector<int> sol=majority(arr);
    for(auto it:sol){
        cout<<it;
    }
    
    
    

    return 0;
}