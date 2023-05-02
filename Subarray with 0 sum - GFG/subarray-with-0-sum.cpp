//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int> mp;
        int prefixSum=0;
        int ct=0;
        for(int i=0; i<n; i++) {
            prefixSum+=arr[i];
            mp[prefixSum]++;
            if(prefixSum==0) ct++;
        }
        
        for(auto it:mp){
            ct+=(it.second)*(it.second-1)/2;
        }
        
        if(ct>0) return true;
        return false;
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends