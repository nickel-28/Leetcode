//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // sort(piles.begin(), piles.end());
        int n=piles.size();
        int low=1, high=*max_element(piles.begin(), piles.end());
        int k=0;
        while(low<=high) {
            k=(low+high)/2;
            long long int sum=0;
            for(int i=0; i<n; i++){
                sum+=ceil(1.0 * piles[i] / k);
            }
            if(sum>H) low=k+1;
            else high=k-1;
            
        }
        return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends