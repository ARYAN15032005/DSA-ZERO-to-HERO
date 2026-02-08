#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    int x,y;
for(x=0;x>n;x++){
    for(y=x+1;y<n;y++){
        if(arr[y]<arr[x]){
            int temp=arr[y];
            arr[y]=arr[x];
            arr[x]=temp;
            
        }
    }
}
}

void bubblesort(int arr[], int n){

    int x,y;
for(x=n-1;x>=0;x--){
    for(y=0;y<x;y++){
        if(arr[y]>arr[y+1]){
            int temp=arr[y+1];
            arr[y+1]=arr[y];
            arr[y]=temp;
            
        }
    }
}}

void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){

        int temp=i;
        int j=i-1;
        while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--; //in a array lets say 5,8,3 if you wanna sort then for first iteration
            //it swaps to 5,3,8 then we do j-1 to now compare the previous 2 positions
    }
}
}


int main(){


    int arr[10],n;
    cout<<"Enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element "<<i+1<<": ";
        cin>>arr[i];        
    }
    cout<<"Array : ";
    bubblesort(arr,n);
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}

    return 0;

}