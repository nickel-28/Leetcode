//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        map<int, int> mp;
        int j=0;
        int n=fruits.size();
        int ans=0;  // store final ans
        for(int i=0; i<n; i++) {
            mp[fruits[i]]++;
            if(mp.size()<=2){
                int ct=0;
                for(auto it: mp){
                    ct+=it.second;
                }
                ans=max(ans, ct);
            }
            else{
                while(mp.size()>2){
                    if(mp[fruits[j]]==1)
                        mp.erase(fruits[j]);
                    else{
                        mp[fruits[j]]--;
                    }
                    j++;
                }
            }


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
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends