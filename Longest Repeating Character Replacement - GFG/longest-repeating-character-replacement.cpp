//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        int i=0, j=0;
        int n=S.length();
        int maxC=0;
        int ans=-1;
        unordered_map<char,int> mp;
        while(j<n) {
            mp[S[j]]++;
            maxC=max(maxC, mp[S[j]]);

            int curr_Len=j-i+1;
            if(curr_Len - maxC > K){
                mp[S[i]]--;
                i++;
            }

            curr_Len=j-i+1;
            ans=max(ans, curr_Len);
            j++;

        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends