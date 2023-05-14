//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubArrs(vector<int>& nums, int k) {
        // if(k<0) return 0;
        int preSum=0,count=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            while(preSum > k){
                preSum-=nums[j++];
            }
            count+=(i-j+1);  // counts subarrays in that window.
        }
        return count;
    }
  
    int countSubarray(int n, vector<int>& nums, int k) {
        // Replace all odd with 1 and even with 0
        for(auto &it:nums){
            if(it&1) it=1;
            else it=0;
        }
        // find the subarray with sum at most k and k-1
        return countSubArrs(nums,k)-countSubArrs(nums,k-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends