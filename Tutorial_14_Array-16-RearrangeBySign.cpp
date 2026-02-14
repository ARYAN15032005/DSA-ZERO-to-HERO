#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

/*
logic
in an array with with multiple signs we need to arrange in positve the negative
1 2 3 -4 -9 3 -9 -18 -50

*/

void Rearrange(vector <int> &nums,int n){
    // vector <int> neg;
    // vector<int> pos;
    // for(int i=0;i<n;i++){
    //     if(nums[i]>=0){
    //         pos.push_back(nums[i]);
    //     }
    //     else{
    //         neg.push_back(nums[i]);
    //     }
    // }
    // for(int i=0;i<n/2;i++){
    //     if(nums[0]>=0){
    //     nums[2*i]=pos[i];
    //     nums[2*i+1]=neg[i];
    // }
    // else{
    //     nums[2*i]=neg[i];
    //     nums[2*1+1]=pos[i];
    // }}
    //OPTIMAL APPROACH

    int A[n];
    int pos=0;int neg=1;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            A[pos]=nums[i];
            pos=pos+2;
        }
        else{
            A[neg]=nums[i];
            neg=neg+2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";

}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    Rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}