//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int row, int col) 
    {
        // code here 
        vector<int> ans;
        // int row=matrix.size();
        
        if(row==0) return ans;
        // int col=matrix[0].size();
        
        int t=0, b=row-1;
        int l=0, r=col-1;
        
        int d=0;
        
        while(l<=r && t<=b) {
            
            if(d==0){
                for(int i=l; i<=r; i++)
                    ans.push_back(matrix[t][i]);
                    d=1; t++;
                
            }
            else if(d==1){
                for(int i=t; i<=b; i++)
                    ans.push_back(matrix[i][r]);
                    d=2; r--;
                
                
            }
            else if(d==2){
                for(int i=r; i>=l; i--)
                    ans.push_back(matrix[b][i]);
                    d=3; b--;
                
            }
            else if(d==3){
                for(int i=b; i>=t; i--)
                    ans.push_back(matrix[i][l]);
                    d=0; l++;
                
            }
            
        }
        
        return ans;    
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends