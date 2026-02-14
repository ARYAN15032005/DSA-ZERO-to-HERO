#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
/*
logic:
var=a[0]
a[0]=a[1] check if a[0]+1=a[1]
if yes then var[1]
*/
using namespace std;
vector<long long> pascal(int n){
    vector <long long> row;

    
   
    for (int i=1;i<=n;i++){
        for (int s=0;s<=n-i;s++){cout<<" ";}
        long long val=1;
    for (int k = 1; k <= i; k++) {
        cout<<val<<" ";
    val = val * (i - k) / k;
    
}
cout<<endl;
}}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    vector <long long>result = pascal(n);
    for(auto it:result){
        cout<<it;
    }
    
    

    return 0;
}