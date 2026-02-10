#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Here  i will write the entire logic for merge sort, after your array is passed into the
merge sort function, our first step is to divide the array in two parts, low-mid,mid+1-high
it goes on and on until low!=high, if low= high means after the low and high are further divided
even after having one element per array then we need to get return out of recusion code.
so in our merge sort  function we need to recurse over the array three times in code, rest will 
do automatically, the we need to call a merge function

what happens inside the merge function
we declare a temp array , we make it dynamic by using 
"vector <int> temp" -> to increase the size on our will 
lets say we have array 4 2 5 6 1 
after division its 4 2 || 5 6 1 
for first part it will be 4 2
the array is spearated to 4 amd 2
now we need to mantain a condition always which is 
while(int left is always smaller than mid and int high always smaller than high)
now, if arr[left ] which is "low"=arr[0]=4 is less than arr[right] which means arr[mid+1] 
which in our example is arr[2]=1(because after internal recusions occuring the posistions change into 1,5,6)
so if low < right means 4<1 then 4 goes inside the temp array
else 1 goes inside the temp array
now a condition might appear like this
10 6 7 || 2 3 4
so after 2,3,4,10 going inside the temp array, 6,7 might remain
to solce this we will run a loop again which goes like this
while(left<=mid)means there are still elements less than mid whihc are not less than right, 
soo we should push em back in temp
same with right, 
now remember all of oour elemnts are stored in temp, to put em back in arr
we need to runa  loop like this
for (i=low;i<=high;i++){
arr[i]=temp[i-low]
why we used low?? 
becayse after division fo main array the array subparts lets say into two parts each ahving 4 elements
both arrays indices are 1-4 like 1 2 3 4   1 2 3 4
}then 1 2  1 2    1 2  1 2 
but if we set i-low then the indices order gets corrected inside the temp array, lets say we have
a array from position from 5-8 and low = 5 , so new indices for temp changes to 5-5=0.6-5=1..so on


*/


void merge(int arr[],int low,int mid,int high){
   vector <int> temp;
    // we need to write function fr two arrays, one frm low to mid and 
    // another from mid+1..high

    int left = low;
    int right =mid+1;
    while(left<=mid && right <= high)
    // two loops will move consecutively- one from extreme left to mid another from mid+1 to right
    {
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }

    while(left<=mid){
         temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
         temp.push_back(arr[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergesort(int arr[],int low, int high){

    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
int arr[10],n;
cout<<"Enter n:";
cin>>n;
for(int i=0 ;i<n;i++){
    cout<<"Enter the "<<i+1<<" Element :";
    cin>>arr[i];
}
// Function name
mergesort(arr,0,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;

}