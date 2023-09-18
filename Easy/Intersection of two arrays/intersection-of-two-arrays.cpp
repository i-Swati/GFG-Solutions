//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int arr1[], int arr2[], int n, int m) {
        // Your code goes here
        unordered_set<int> set1;

        // Insert elements from arr1 into the set
        for (int i = 0; i < n; i++) {
            set1.insert(arr1[i]);
        }

        int count = 0;

        // Check for intersection in arr2
        for (int i = 0; i < m; i++) {
            if (set1.find(arr2[i]) != set1.end()) {
                count++;
                set1.erase(arr2[i]); // Remove the element from set1 to avoid duplicate counting
            }
        }

        return count;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends