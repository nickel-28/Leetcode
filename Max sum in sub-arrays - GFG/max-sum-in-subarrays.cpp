//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        // sort(arr, arr+N);
        // int sum = arr[N-1]+arr[N-2];
        // return sum;
        long long int min=INT_MIN;
        
        for(int i=0; i<N-1; i++){
            if(arr[i]+arr[i+1] > min)
                min=arr[i]+arr[i+1];
        }
        
        return min;
    }
};



//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends