//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool checker(int n){
        int x=n;
        int dig=0;
        while(x>0){
            int last=x%10;
            dig = dig * 10 + last;
            x/=10;
        }
        // cout<<dig<<endl;
        if(n==dig) return true;
        else return false;
    }
    
    int PalinArray(int a[], int n)
    {
    	int flag=0;
    	for(int i=0; i<n; i++){
    	    if(checker(a[i])==false) {
    	        flag=1;
    	        break;
    	    }
    	}
    	if(flag) return 0;
    	else return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends