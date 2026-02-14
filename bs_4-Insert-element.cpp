#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int findFloor(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];    
                low = mid + 1;   
            } else {
                high = mid - 1;    
            }
        }
        cout<<"floor : "<<ans;
        return ans;
    }

   
    int findCeil(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];    
                high = mid - 1;     
            } else {
                low = mid + 1;      
            }
        }
        cout<<"Ceil : "<<ans;
        return ans;
    }

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
    cout<<"The array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
    }
    int target;
    cout<<"Enter target :";
    cin>>target;
    findCeil(arr,n,target);
    findFloor(arr,n,target);
    return 0;
    
}
