//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        // int ht[n+1]={0};
        // unordered_map<int,int> ht(n+1);
        vector<int> ht(n+1,0);
        for(int i=0; i<n; i++){
            ht[arr[i]]++;
        }
        // int miss,rep;
        int *a=new int[2];
        for(int i=1; i<=n; i++){
            if(ht[i]==0) a[1]=i;
            if(ht[i]==2) a[0]=i;
        }
        // for(auto it : ht){
        //     if(it.second==0){
        //         a[0]=it.first;
        //     }
        //     if(it.second==2){
        //         a[1]=it.first;
        //     }
        // }
        
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends