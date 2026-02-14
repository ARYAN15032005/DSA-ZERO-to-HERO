#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int lastoccurence(int arr[50],int n, int target){
    int res=-1;
    int low=0;int high=n-1;
    
    while (low <= high) {
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            res=mid;
            low=mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    cout<<res;
    return res;

}
    // int findFloor(int arr[], int n, int x) {
    //     int low = 0, high = n - 1;
    //     int ans = -1;

    //     while (low <= high) {
    //         int mid = (low + high) / 2;
    //         if (arr[mid] <= x) {
    //             ans = arr[mid];    
    //             low = mid + 1;   
    //         } else {
    //             high = mid - 1;    
    //         }
    //     }
    //     cout<<"floor : "<<ans;
    //     return ans;
    // }

   
  

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    
    

    // function name
    cout<<"\n"<<"The array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
    }
    int target;
    cout<<"Enter target :";
    cin>>target;
    lastoccurence(arr,n,target);
    
    return 0;
    
}
