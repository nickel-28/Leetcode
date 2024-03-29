//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	vector<int> maxi, mini;
    	for(int i=0; i<n/2; i++) mini.push_back(arr[i]);
    	for(int i=n/2; i<n; i++) maxi.push_back(arr[i]);
    	
    	reverse(maxi.begin(), maxi.end());
    	
    // 	for(auto it: mini) cout<<it<<" ";
    // 	cout<<endl;
    // 	for(auto it: maxi) cout<<it<<" ";
    // 	cout<<endl;
    	vector<int> ans(n,0);
    	int k=0,l=0;
    	for(int i=0; i<n; i++){
    	    if(i&1) ans[i]=mini[k++];
    	    else ans[i]=maxi[l++];
    	}
    	 
    	// copying back to original array
    	for(int i=0; i<n; i++){
    	    arr[i]=ans[i];
    	}
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends