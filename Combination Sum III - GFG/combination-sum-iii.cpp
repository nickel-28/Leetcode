//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> ans;

    int sum(vector<int> &combination) {
        // to check if all element's sum equals to 'n' or not
        int tot=0;
        for(auto it: combination){
            tot+=it;
        }
        return tot;
    }

    void solve(int k, int n, vector<int> &combination, int num){
        // base cases
        if(k==0){
            // if sum if satisfied then store in the answer vector
            if(sum(combination)==n){
                ans.push_back(combination);
            }
            return;
        }
        if(num>9) return;
        

        combination.push_back(num); // including num in combination
        solve(k-1,n,combination,num+1);
        combination.pop_back(); // not including num in combination
        solve(k,n,combination,num+1);

    }
    
    vector<vector<int>> combinationSum(int k, int n) {
        vector<int> combination;
        solve(k,n,combination,1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends