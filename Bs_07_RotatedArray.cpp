// Count occurence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int countoccurence(int arr[50],int n, int target){
int high=n-1;int low=0;
int res=-1;
while(low<high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
        cout<<mid;
        return mid;
    }
    if(arr[low]<arr[mid]){
        if(arr[low]<=target && arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    else{

        if(arr[mid]<target&&arr[high]>=target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }


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
    int target;
    cout<<"Enter target :";
    cin>>target;
    countoccurence(arr,n,target);
    
    return 0;
    
}
