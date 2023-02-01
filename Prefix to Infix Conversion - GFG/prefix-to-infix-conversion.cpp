//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
        int n = s.length();
        stack<string> st;
        string ans;
        reverse(s.begin(),s.end());
    
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
            string curr;
            curr+=s[i];
            st.push(curr);
            }
    
            else{
                string s1 = st.top(); st.pop();
                string s2 = st.top(); st.pop();
                string curr = '(' + s1 + s[i] + s2 + ')';
                st.push(curr);
            }
       }
    
       cout<<st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends