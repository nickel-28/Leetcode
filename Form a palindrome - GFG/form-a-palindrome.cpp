//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

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
    
    int countMin(string str){
        string str2=str;
        reverse(str2.begin(), str2.end());
        int x=str.length();
        int y=str2.length();
        
        vector<vector<int>> dp(x, vector<int> (y, -1));
        int lcs = func(x-1, y-1, str, str2, dp);
        // return 'string length'-'LCS'
        return (x - lcs);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends