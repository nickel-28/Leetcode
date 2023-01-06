class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=1000001;
        int ans=0;
        // int sum=0;
        while(low<=high) {
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0; i<nums.size(); i++) {
                // sum+=ceil(nums[i]/mid);
                if(nums[i]%mid==0){
                    sum+=(nums[i]/mid);
                } else{
                    sum+=(nums[i]/mid)+1;
                }
            }
            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            } 
            else low=mid+1;
            
            
        }
        return ans;
        
        
    }
};