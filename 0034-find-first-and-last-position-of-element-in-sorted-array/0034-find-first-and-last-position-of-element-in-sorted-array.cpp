class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // O(log n) approach:
        int low=0, high=nums.size() -1;
        int first_occur=-1;
        int last_occur=-1;
        
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(target==nums[mid]){
                first_occur= mid;
                high=mid-1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else low=mid+1;
            
        }
        
        low=0; high=nums.size()-1;
        last_occur=-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(target==nums[mid]){
                last_occur= mid;
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else low=mid+1;
            
        }
        
        return {first_occur, last_occur};
        
        
        
        
        
        
        // // O(n) approach:
        // vector<pair<int,int>> ans;
        // int start=-1, end=-1;
        // for(int i=0; i<nums.size(); i++){
        //     if(target == nums[i]){
        //         start=i;
        //         break;
        //     }
        // }
        // for(int i=nums.size()-1; i>=0; i--) {
        //     if(target==nums[i]){
        //         end=i;
        //         break;
        //     }
        // }
        // ans.push_back(make_pair(start, end));
        // return {ans[0].first, ans[0].second};
        
    }
};