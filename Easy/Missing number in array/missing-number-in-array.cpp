//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution {
public:
    int missingNumber(vector<int>& arr, int n) {
        int XOR1 = 0;
        for (int i = 0; i <= n; i++) {
            XOR1 = XOR1 ^ i;
        }
        //instead of a traditional for loop, it is a range-based loop used to iterate through 
        //the elemnts of the arr vector directly 
        int XOR2 = 0;
        for (int num : arr) {
            XOR2 = XOR2 ^ num;
        }

        return XOR1 ^ XOR2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends