#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bs(int arr[20],int n, int target){
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(target==arr[mid]){
            cout << "Target found at index: " << mid << endl;
            return mid;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return -1;
    

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
    cout<<"The array is";
    for(int i=0;i<n;i++){
        cout<<arr[i];        
    }
    int target;
    cout<<"Enter target :";
    cin>>target;
    bs(arr,n,target);
    return 0;
    
}
