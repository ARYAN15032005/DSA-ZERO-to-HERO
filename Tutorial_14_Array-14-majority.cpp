#include <iostream>
#include <vector>
#include <unordered_map> 
#include <map>// Better for performance

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map <int, int> aryan;
    for(int i = 0; i < n; i++) {
        aryan[arr[i]]++;
    }

    int majority = -1; 
    
    for(auto x : aryan) {
        if(x.second > n/2) {
            majority = x.first;
            break; 
        }
    }

    if (majority != -1) {
        cout << "Majority Element: " << majority << endl;
    } else {
        cout << "No Majority Element exists." << endl;
    }

    return 0;
}