//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        vector<int> list;
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                list.push_back(matrix[i][j]);
            }
        }
        
        sort(list.begin(), list.end());
        int n=list.size();
        // if(n & 1) {
            int median=(n+1)/2;
            return list[median-1];
        // }
        
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends