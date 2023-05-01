//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // sort(arr.begin(), arr.end());
        sort(arr, arr+N);
        string first=arr[0];
        string second=arr[N-1];
        
        string ans="";
        for(int i=0; i<first.size(); i++){
            if(first[i]==second[i]){
                ans+=first[i];
            }
            else break;
        }
        
        // return ans;
        if(ans.size()>0) return ans;
        else return "-1";
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends