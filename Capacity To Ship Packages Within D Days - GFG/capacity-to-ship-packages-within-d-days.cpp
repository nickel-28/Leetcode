//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool ok(int mid, int weights[], int N, int days) {
        // int n=weights.size();
        int d=1;
        int total=0;
        bool isValid=true;
        for(int i=0; i<N; i++){
            if(weights[i]>mid) isValid=false;
            if(total+weights[i]<=mid) total+=weights[i];
            else{
                d++;
                total=weights[i];
            }
        }
        
        if(!isValid) return false;
        else return(d<=days);
        
    }
    
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int l=1;
        int r=5000*500;
        while(l<r) {
            int mid=(l+r)/2;
            if(ok(mid, arr, N, D))
                r=mid;
            else l=mid+1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends