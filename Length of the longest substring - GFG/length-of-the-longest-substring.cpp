//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int n=S.length();
        int freq[256]={0};
        int l=0, r=0, ans=0;
        while(r<n) {
            freq[S[r]]++;
            
            while(freq[S[r]] > 1) {
                freq[S[l]]--;
                l++;
            }
            
            ans=max(ans, r-l+1);
            r++;
            
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends