//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        // vector<int> freq(n+1, 0);
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        int ct=0;
        // for(int i=0; i<n; i++){
        //     if(freq[i]>(n/k))
        //         ct++;
        // }
        for(auto it: freq){
            if(it.second>(n/k))
                ct++;
        }
        
        return ct;
    }
};


//{ Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends