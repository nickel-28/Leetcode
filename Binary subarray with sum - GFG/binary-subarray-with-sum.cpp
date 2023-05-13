//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int numberOfSubarrays(vector<int>& nums, int N, int goal){
        return countSubArrs(nums,goal)-countSubArrs(nums,goal-1);
    }
    
    int countSubArrs(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int preSum=0,count=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            while(preSum > goal){
                preSum-=nums[j++];
            }
            count+=(i-j+1);  // counts subarrays in that window.
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends