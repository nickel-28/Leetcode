class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;
        int start=-1, end=-1;
        for(int i=0; i<nums.size(); i++){
            if(target == nums[i]){
                start=i;
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--) {
            if(target==nums[i]){
                end=i;
                break;
            }
        }
        ans.push_back(make_pair(start, end));
        
        return {ans[0].first, ans[0].second};
    }
};