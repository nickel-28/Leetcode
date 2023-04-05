//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool func(int ind, int sum, int arr[], vector<vector<int>> &dp) {
        if(sum==0) return true;
        if(ind==0) return (arr[0]==sum);
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        bool notPick= func(ind-1, sum, arr, dp);
        bool pick=false;
        if(sum >= arr[ind]){
            pick = func(ind-1, sum-arr[ind], arr, dp);
        }
        
        return dp[ind][sum] = pick || notPick;
            
    }
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int sumTotal=0;
        for(int i=0; i<N; i++) sumTotal+=arr[i];
        
        if(sumTotal%2!=0) return 0;
        else{
            int tarSum=sumTotal/2;
            vector<vector<int>> dp(N+1, vector<int> (tarSum+1, -1));
            bool ans = func(N-1, tarSum, arr, dp);
            return ans;
        }
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends