// Count occurence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// peak : a element whici is greater than arr[i-1] and greater than arr[i+1]

int peak(int arr[50],int n){
    
    int res=-1;
    int low=1;int high=n-2;
    if(n==1){return 0;}
    if(arr[0]>arr[1]){return 1;}
    if(arr[n-2]<arr[n-1]){return n-1;}
    while(low<=high){
        int mid =(low+high)/2;
    if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
        cout<<arr[mid];
        return mid;

    }
    else if(arr[mid]>arr[mid-1]){
        low=mid+1;
    }
    else{
        high=mid+1;
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
    cout<<"\n"<<"The array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
    }
    
    peak(arr,n);
    
    return 0;
    
}



