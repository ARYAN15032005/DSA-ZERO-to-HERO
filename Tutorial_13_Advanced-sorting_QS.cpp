#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
I would like to explain the working of quick sort. Basically what happens is , we choose a pivot
(pindex in our code) and we run two pointers one from extreme left one from extreme right
now to check we see if low < high, means the base sub array should have more than one element
"low < high" means for array w 1 element if the low and high is 0, then we dont need to sort
high should be 1 minimum..while low being 0
so yeah after checking this condition we get the pindex(partition index) from the function we 
will discuss.
we then run quick sort again from low to pindex-1, and high to pindex+1 

now to GET PINDEX WE HAVE A FUNCTION while dynamically initilialing an array
we set a pivot and set a value
we initialise i as low and j as high
we gotta move pointers from both ends to opp direction
    We check position i should always be less than position j
    to run the loops we move the i from pivot towards right by arr[i]<=pivot,max limit = high-1
    same for pointer j from high to low-1, as soon as arr[i] becomes greater than pivot, it stops and
    stores the arr[i] value for the time being, same when arr[j] becomes less than pivot
    its store the value,we check if i is still < j,if yes
    then we swap arr[i] and arr[j]

    now the loop is still running, i towards right j towards left, after finding another element which 
    is smaller than 4 but i is not smaller than j then it will store the j value and swap,

    Example

    [4, 2, 3, 5, 3, 8, 1] with Pivot = 4. 
    
    Step 1: The Pointers Start
    Pivot = 4 (at index 0)
    i starts at index 0, j starts at index 6 (the last element).
    
    Step 2: Finding the first swap
    i moves right: It's looking for something strictly greater than 4.
     It skips 2 and 3, then stops at 5 (index 3).
     
    j moves left: It's looking for something less than or equal to 4.
    It immediately stops at 1 (index 6).
    The Swap: Since i < j (3 < 6), we swap arr[3] and arr[6].
    Array now: [4, 2, 3, 1, 3, 8, 5]
    
    Step 3: Pointers move again 
    The while(i < j) loop is still running!
    i moves right from index 3: It skips 1 and 3, then stops at 8 (index 5) 
    because 8 > 4.j moves left from index 6: It skips 5, then stops at 3 (index 4) 
    because 3 <= 4.
    The Cross: Now, i (5) is greater than j (4). 
    They have crossed! The while(i < j) loop ends.
    
    Step 4: The Final Pivot Swap
    Now the logic swap(arr[low], arr[j]) executes.
    We swap arr[0] (the pivot, 4) with arr[j] (the element 3 at index 4).
    
    Final Array for this round: [3, 2, 3, 1, 4, 8, 5]
*/

int partition(vector <int> &arr, int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot and i<=high-1)
        i++;
    
            while(arr[j]>pivot and j>=low+1)
        j--;

    if(i<j){
        swap(arr[i],arr[j]);
    }
}

    swap(arr[j],arr[low]);
    return j;
    
}

void quicksort(vector <int> &arr, int low, int high){

    if(low<high){
    int pindex=partition(arr,low,high);
    quicksort(arr,low,pindex-1);
    quicksort(arr,pindex+1,high);
    }
}


// void merge(int arr[],int low,int mid,int high){
//    vector <int> temp;
//     // we need to write function fr two arrays, one frm low to mid and 
//     // another from mid+1..high

//     int left = low;
//     int right =mid+1;
//     while(left<=mid && right <= high)
//     // two loops will move consecutively- one from extreme left to mid another from mid+1 to right
//     {
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }

//     }

//     while(left<=mid){
//          temp.push_back(arr[left]);
//             left++;
//     }
//     while(right<=high){
//          temp.push_back(arr[right]);
//             right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }
// void mergesort(int arr[],int low, int high){

//     if(low==high){
//         return;
//     }
//     int mid=(low+high)/2;
//     mergesort(arr,low,mid);
//     mergesort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }



int main(){
int n;
cout<<"Enter n:";
cin>>n;
vector<int>arr(n);


for(int i=0 ;i<n;i++){
    cout<<"Enter the "<<i+1<<" Element :";
    cin>>arr[i];
}
// Function name
quicksort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;

}