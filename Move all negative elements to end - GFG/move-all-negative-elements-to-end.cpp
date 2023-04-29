//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // sort(arr,arr+n);
        vector<int> pos, neg;
        for(int i=0; i<n; i++){
            if(arr[i]>0) pos.push_back(arr[i]);
        }
        for(int i=0; i<n; i++){
            if(arr[i]<0) neg.push_back(arr[i]);
        }
        
        vector<int> ans;
        for(int i=0; i<pos.size(); i++) ans.push_back(pos[i]);
        for(int i=0; i<neg.size(); i++) ans.push_back(neg[i]);
        
        for(int i=0; i<ans.size(); i++) arr[i]=ans[i];
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends