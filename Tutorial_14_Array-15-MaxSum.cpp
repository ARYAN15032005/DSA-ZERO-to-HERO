#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

long long maxSubArray(vector<int>& nums) {
    long long maxi = LLONG_MIN;
    long long sum = 0;
    
    int start = 0;
    int arrstart = -1; 
    int arrend = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (sum == 0) start = i; 

        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;
            arrstart = start;
            arrend = i;
        }

       
        if (sum < 0) {
            sum = 0;
        }
    }

    
    cout << "The subarray is: ";
    for (int i = arrstart; i <= arrend; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return maxi;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    long long result = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}