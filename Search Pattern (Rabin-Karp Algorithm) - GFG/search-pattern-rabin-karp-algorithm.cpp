//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int m=txt.size();
            int n=pat.size();
            vector<int> ans;
            int i=0;
            while(i<=m-n) {
                if(txt[i]==pat[0]){
                    string temp = txt.substr(i,n);
                    if(temp==pat){
                        ans.push_back(i+1);
                    }
                }
                
                i++;
            }
            
            if(ans.size() > 0)  return ans;
            else return {-1};
            
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends