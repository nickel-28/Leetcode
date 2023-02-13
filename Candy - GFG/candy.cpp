//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
        
        int n=ratings.size();
        vector<int> ans(n, 1);
        // vector<int> right(n, 1);
        
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
        
        for(int i=n-1; i>0; i--){
            if(ratings[i-1]>ratings[i]){
                ans[i-1]=max(ans[i]+1, ans[i-1]);
            }
        }
        
        int soln=0;
        for(int i=0; i<ans.size(); i++)
            soln+=ans[i];
        
        return soln;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends