class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
//         // O(n) approach
//         int sum=0;
//         for(int i=0; i<nums.size(); i++) {
//             sum^=nums[i];
//         }
//         return sum;
        
        // optimized solution: O(log n) approach
        
        int low=0, high=nums.size()-2;
        while(low<=high) {
            int mid= (low+high) >> 1;
            if(nums[mid] == nums[mid^1]) {
                low=mid+1;
            }
            else high=mid-1;
            
            
        }
        return nums[low];
    }
};