//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int ct0=0, ct1=0;
        
        int count=0;
        for(int i=0; i<str.size(); i++) {
            if(str[i]=='0') ct0++;
            else ct1++;
            
            if(ct0 == ct1) count++;
            
        }
        
        if(ct0 != ct1) return -1;
        else return count;
        
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
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends