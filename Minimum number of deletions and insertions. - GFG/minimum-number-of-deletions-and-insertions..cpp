//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    
	int minOperations(string s1, string s2) 
	{ 
	    int x=s1.length();
	    int y=s2.length();
	    vector<vector<int>> dp(x, vector<int> (y, -1));
        int lcs = func(x-1, y-1, s1, s2, dp);
	    return x+y-2*lcs;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends