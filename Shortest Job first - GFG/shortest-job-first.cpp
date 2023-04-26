//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
    int solve(vector<int>& bt) {
        int n=bt.size();
        sort(bt.begin(), bt.end());
        
        int tat=0;  // turn around time
        int wt=0;   // waiting time
        for(int i=0; i<n; i++) {
            tat+=bt[i];
            wt+=(tat-bt[i]);
        }
        
        // avg waititng time
        return wt/n;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        int ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends