//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    #define ll long long int
  public:
    long long int func(int ind, int sum, int coins[], vector<vector<ll>> &dp){
        if(ind==0){
            return (sum % coins[0]==0);
        }
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        ll notTake = func(ind-1, sum, coins, dp);
        ll take=0;
        if(coins[ind]<=sum){
            take=func(ind, sum-coins[ind], coins, dp);
        }
        
        return dp[ind][sum] = take + notTake;
        
    }
    
    long long int count(int coins[], int N, int sum) {
        // code here.
        vector<vector<ll>> dp(N, vector<ll> (sum+1, -1));
        return func(N-1, sum, coins, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends