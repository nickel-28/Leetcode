//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    int func(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]){
            return dp[i][j] = (1 + func(i-1, j-1, s1, s2, dp));
        }
        
        return dp[i][j] = max(func(i-1, j, s1, s2, dp), func(i, j-1, s1, s2, dp));
    }
    
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s1, string s2, int x, int y)
    {
    //     int x=s1.length();
	   // int y=s2.length();
	    vector<vector<int>> dp(x, vector<int> (y, -1));
        int lcs = func(x-1, y-1, s1, s2, dp);
	    return x+y-lcs;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends