//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int squareFinder(int n) {
        return n>>2;
    }
  
    int countSquares(int N) {
        int ct=0;
        // int root=pow()
        for(int i=1; i*i<N; i++){
            if(squareFinder(i)<(N>>(1/2))){
                ct++;
            }
        }
        return ct;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends