// Count occurence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int search(int arr[50],int n){
int high=n-1;int low=0;
int res=-1;
while(low<high){
    int mid=low+(high-low)/2;
    if(arr[mid]>arr[high]){
        low=mid+1;

    }
    else
    {
        high=mid;
    }
}
cout<<arr[low];
return arr[low];
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
    
    search(arr,n);
    
    return 0;
    
}
