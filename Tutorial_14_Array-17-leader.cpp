#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
void leader(vector <int> arr, int n){

    int leader=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            cout<<arr[i]<<" : Leader\n";
        }

    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    leader(arr,n);
    
    

    return 0;
}