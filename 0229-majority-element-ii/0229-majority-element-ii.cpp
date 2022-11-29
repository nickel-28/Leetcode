class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        int p= floor(n/3);
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) mp[nums[i]]++;
        
        // for(int i=0; i<n; i++){
        //     if(mp[nums[i]] > p ){
        //         result.push_back(nums[i]);
        //     }
        // }
        for(auto it : mp){
            if(it.second > p) result.push_back(it.first);
        }
        return result;
    }
};