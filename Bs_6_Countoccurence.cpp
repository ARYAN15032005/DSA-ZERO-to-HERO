// Count occurence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int countoccurence(int arr[50],int n, int target){
    
    int res=-1;
    int low=0;int high=n-1;
    
    while (low <= high) {
        int mid=(high+low)/2;
        if(arr[mid]==target){
            res=mid;
            high=mid-1;
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
// even though we have  another approach of solvinh this using binary seadch by findimg the upper bound 
//  and lower bound using two bs function and counting in array from first to last occurence but
// i ownt be using it 


  

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
