//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int func(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]){
            return dp[i][j] = (1 + func(i-1, j-1, s1, s2, dp));
        }
        
        return dp[i][j] = max(func(i-1, j, s1, s2, dp), func(i, j-1, s1, s2, dp));
    }
    
    int longestPalinSubseq(string A) {
        string B = A;
        int x=A.length();
        int y=B.length();
        
        reverse(B.begin(), B.end());
        vector<vector<int>> dp(x, vector<int> (y, -1));
        return func(x-1, y-1, A, B, dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends