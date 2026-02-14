#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
/*
logic:
var=a[0]
a[0]=a[1] check if a[0]+1=a[1]
if yes then var[1]
*/
using namespace std;
void sequence(vector<int> arr, int n) {
    int longest = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int cnt = 1;

        // Keep searching as long as we find the next consecutive number
        bool foundNext = true;
        while (foundNext) {
            foundNext = false;
            // Scan the ENTIRE array for x + 1
            for (int j = 0; j < n; j++) {
                if (arr[j] == x + 1) {
                    x = x + 1;     // Update target to the next number
                    cnt++;         // Increase the streak
                    foundNext = true;
                    break;         // Restart the j-loop search for the new x+1
                }
            }
        }
        longest = max(longest, cnt);
    }
    cout << longest;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // long long result = maxSubArray(arr);
    sequence(arr,n);
    
    

    return 0;
}