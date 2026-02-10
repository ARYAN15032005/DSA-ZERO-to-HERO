#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Logic, to remove duplicates we dont have the privilige to just check and remove them, we will do is
we will run a loop from pointer i from the left most element then keep increment it while
running another loop with pointer j to check at whihc part of array does a[i]=a[j]
as soon as we find a[i]=a[j] , to remove it we need to shift the other elements towards 
left to do that we initiaise a k variable which stays at j at the point where its duplicate,
k should be less than n-1, bc we are reducing the array size eah time by 1 and keep incremeneing
at this moment we place the value of k+1 position means j+1 position at j , k++ is incrementing so
k+1 elements keeps being placed inside arr[k],now each time sieze of array reduces so n--
j-- to chcek new eleemnt 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Updated to return the new size of the array
int removedups(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { // FIXED: Use == for comparison
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Decrease size
                j--; // Stay at current index to check the new shifted element
            }
        }
    }
    return n; // Return the new size so main() knows how many to print
}

int main() {
    int n;
    int arr[20];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    // Get the new size after removing duplicates
    n = removedups(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}