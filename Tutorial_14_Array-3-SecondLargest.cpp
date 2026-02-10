// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int FindLargest(int arr[20],int n){
    
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;


// }

// int Find2ndLargest(int ar[20],int n){
    
//     int max=ar[0];
//     for(int i=0;i<n;i++){
//         if(ar[i]>max){
//             max=ar[i];
//         }
//     }
//     int sec_max=ar[0];
//     for(int i=0;i<n;i++){
//         if(ar[i]>sec_max && sec_max<max){
//             sec_max=ar[i];
//         }

//     }

//     return sec_max;
// }
// int main(){
//     int n;
//     int arr[20];
//     cout<<"Enter n :";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];

//     }

//    for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<FindLargest(arr,n);
//     cout<<Find2ndLargest(arr,n);

// } sort and find the index at 1