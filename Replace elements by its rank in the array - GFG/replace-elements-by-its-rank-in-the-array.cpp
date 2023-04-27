//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_map<int,int> mp;
        for(int i=0; i<N; i++){
            pq.push(arr[i]);
        }
        
        int rank=1;
        while(!pq.empty()){
            mp.insert({pq.top(), rank});
            int k=pq.top();
            pq.pop();
            // agar 2 elem same aa jayegi to rank++ krne se dono ko alag rank mil jayegi
            // rank++;
            
            // Agar dono element same hogi to same hi rank rhegi
            if(k<pq.top()) rank++;
        }
        
        vector<int> ans(N);
        for(int i=0; i<N; i++){
            ans[i]=mp[arr[i]];
        }
        
        return ans;
        

    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends