//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool func(int i, int j, string s1, string s2){
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return false;
        if(j<0 && i>=0){
            for(int k=0; k<i; k++){
                if(s1[k]!='*') return false;
            }
            return true;
        }
        if(s1[i]==s2[j] || s1[i]=='?') return func(i-1, j-1, s1, s2);
        if(s1[i]=='*') return func(i-1, j, s1, s2) || func(i,j-1, s1, s2);
        
        return false;
        
    }
    
    bool match(string wild, string pattern)
    {
        int n=wild.size();
        int m=pattern.size();
        return func(n-1, m-1, wild, pattern);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends