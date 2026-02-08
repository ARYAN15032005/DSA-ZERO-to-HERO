#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


    int arr[10],n;
    cout<<"Enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element "<<i+1<<": ";
        cin>>arr[i];
        
    }
    cout<<"Array : ";
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}

int x,y,temp;
for(x=0;x<n;x++){
    for(y=x+1;y<n;y++){
        if(arr[y]<arr[x]){
            temp=arr[x];
            arr[x]=arr[y];
            arr[y]=temp;
            
        }
    }
}
cout<<"\nSorted array :";
    for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
    return 0;

}