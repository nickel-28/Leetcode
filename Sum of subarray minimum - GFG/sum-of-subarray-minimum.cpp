//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumSubarrayMins(int N, vector<int> &arr) {
        // code here
        stack<int> s1, s2;
        int n = arr.size();
        vector<int> next_smaller(n), prev_smaller(n);
        
        for(int i = 0;i<n;i++){
            next_smaller[i] = n-i-1;
            prev_smaller[i] = i;
        }
        
        for(int i = 0;i<n;i++){
            while(!s1.empty() && arr[s1.top()]>arr[i]){
                next_smaller[s1.top()] = i - s1.top() - 1;
                s1.pop();
            }
            s1.push(i);
        }
        
        for(int i = n-1;i>=0;i--){
            while(!s2.empty() && arr[s2.top()]>=arr[i]){
                prev_smaller[s2.top()] = s2.top() - i - 1;
                s2.pop();
            }
            s2.push(i);
        }
        
        long ans = 0;
        int mod = 1e9 + 7;
        
        for(int i = 0;i<n;i++){
            ans = (ans + (long)arr[i] * (prev_smaller[i]+1) * (next_smaller[i]+1)) % mod;
            ans %= mod;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends