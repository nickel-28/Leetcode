//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int platform=1, max_platform=1;
    	int i=1;    // i pointer for having track record of arrival
    	int j=0;    // j pointer for having track record of deptarture
    	while(i<n && j<n){
    	    // departure me time hai so ek aur platform chahiye hoga
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	        i++;
    	    }
    	    // train depart ho gyi hai, means platform free ho gyi so remove kr do
    	    else if(arr[i]>dep[j]){
    	        platform--;
    	        j++;
    	    }
    	    // the moment platform zyada hoti hai max_platform se, usse update kr do
    	    if(platform > max_platform){
    	        max_platform = platform;
    	    }
    	    
    	}
    	
    	return max_platform;
    	
    	
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
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends