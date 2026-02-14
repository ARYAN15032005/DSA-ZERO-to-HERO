#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <bits/stdc++.h>
/*
    BRUTE FORCE
    LOGIC (RUN THREE LOOPS I ,J K AND CHECK IF ARR[I]+ARR[J]+ARR[K]=0)
    COUT
    
*/
using namespace std;
vector <vector<int>> threesum(vector <int>&arr,int n){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}  

int main() {
    int n;
    
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    vector<vector<int>> sol=threesum(arr,n);
    for(auto it:sol){
       for (auto &num : it) cout << num << " ";
        cout << endl;
    }
    
    
    

    return 0;
}