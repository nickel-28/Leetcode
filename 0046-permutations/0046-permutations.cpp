class Solution {
public:
    // 1st Approach
//     void nextPermut(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, vector<int> freq) {
//         if(ds.size() == nums.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0; i<nums.size(); i++){
//             if(!freq[i]){
//                 ds.push_back(nums[i]);
//                 freq[i]=1;
//                 nextPermut(ds, nums, ans, freq);
//                 freq[i]=0;
//                 ds.pop_back();
//             }
//         }
//     }
    
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         int n=nums.size();
//         // int freq[n] = {0};
//         vector<int> freq(nums.size(),0);
//         for(int i=0; i<nums.size(); i++) {
//             freq[i]=0;
//         }
//         nextPermut(ds, nums, ans, freq);
//         return ans;
//     }
    
    // 2nd Approach:
    void permuteRecur(int index, vector<vector<int>> &ans, vector<int> &nums) {
        if(index==nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++) {
            swap(nums[index], nums[i]);
            permuteRecur(index+1, ans, nums);
            swap(nums[index], nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permuteRecur(0, ans, nums);
        return ans;
        
        
    }
};