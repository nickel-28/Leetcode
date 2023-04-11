//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    set<string> st;
	    
	    void backtrack(string s, string t, int i, int j, string &temp, vector<string> & ans, int count){
	        if(count == 0){
	            if(st.find(temp) == st.end()){
	                st.insert(temp);
	                ans.push_back(temp);
	            }
	            return;
	        }
	        
	        if(i >= s.size() || j >= t.size()) return;
	        
	        for(int row=i; row<s.size(); row++){
	            for(int col=j ;col<t.size(); col++){
	                if(s[row] == t[col]){
	                    temp.push_back(s[row]);
	                    backtrack(s, t, row+1, col+1, temp, ans, count-1);
	                    temp.pop_back();
	                }
	            }
	        }
	    }
	    
		vector<string> all_longest_common_subsequences(string s, string t){
		    int n=s.length();
		    int m=t.length();
		    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
		    for(int i=0; i<n; i++)
		        dp[i][0]=0;
		    for(int j=0; j<m; j++)
		        dp[0][j]=0;
		        
		    for(int i=1; i<=n; i++){
		        for(int j=1; j<=m; j++){
		            if(s[i-1]==t[j-1]){
		                dp[i][j]=1 + dp[i-1][j-1];
		            }
		            else {
		                dp[i][j]=0 + max(dp[i-1][j], dp[i][j-1]);
		            }
		        }
		    }
		    
		    int lcs_len=dp[n][m];
		    vector<string> ans;
		    string temp="";
		    backtrack(s, t, 0, 0, temp, ans, lcs_len);
		    sort(ans.begin(), ans.end());
		    return ans;
		  //  int len=dp[n][m];
		  //  int ind=len-1;
		  //  int i=n;
		  //  int j=m;
		  //  string str="";
		  //  for(int k=1; k<=len; k++) str+='$';
		    
		  //  while(i>0 && j>0) {
		  //      if(s[i-1]==t[j-1]){
		  //          str[ind]=s[i-1];
		  //          ind--;
		  //          i--;
		  //          j--;
		  //      }
		  //      else if(s[i-1]>t[j-1]){
		  //          i--;
		  //      }
		  //      else {
		  //          j--;
		  //      }
		  //  }
		    
		}
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	vector<string> ans = ob.all_longest_common_subsequences(s, t);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}


// } Driver Code Ends