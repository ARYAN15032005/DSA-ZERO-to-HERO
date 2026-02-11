#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Logic
array given 100101000100202220112222012111 lets say
we need to arrange in order of 0,1,2 somewhat like this 0000000001111111122222222
First approach: Brute force by using 3 pointers a,b,c and increaisng the value of cnt1,cnt2,cn3
whenever we encounder arr[i]=0/1/2 accordingly
its the most basic approach so we just need to swap the the elements of add in a new array
but these approach will have high time complexity and space complexity so 
we are now doing the most optimal approach which is 
DUTCH NATIONAL FLAG ALGORITHM
THE APPROACH:
We again take three pointers low mid and high and 
*/

void search123(vector <int> &arr, int n){
    //we initilise three counters first
    int low=0;int mid =0;int high=n-1;
    //to run this loop untill mid < high
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            //to visualise 
            //0000111001
            //^ low and mid
            //swap work but not visible
            //then moves next to check the same
            mid++;low++;


        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main() {
    int n;
    
    
    cout << "Enter n: ";
    cin >> n;
    
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];


    // UnionArrays(arr,A,n,k);
    // cout<<MissingNo(arr,n)<<endl;
    search123(arr,n);
   for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}