class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
//         // SC: O(n)
//         int n=nums.size();
//         vector<int> result;
//         int p= floor(n/3);
//         unordered_map<int,int> mp;
//         for(int i=0; i<n; i++) mp[nums[i]]++;
        
        
//         for(auto it : mp){
//             if(it.second > p) result.push_back(it.first);
//         }
//         return result;
        
        // O(1)
        int n=nums.size();
        int num1=INT_MIN, num2=INT_MIN;
        int ct1=0, ct2=0;
        for(int i=0; i<nums.size(); i++){
            if(num1==nums[i]) ct1++;
            else if(num2 == nums[i]) ct2++;
            else if(ct1==0){
                num1=nums[i];
                ct1=1;
            } 
            else if(ct2==0){
                num2=nums[i];
                ct2=1;
            } 
            else {
                ct1--; ct2--;
            }
        }
        ct1=0; ct2=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(num1==nums[i]) ct1++;
            else if(num2 == nums[i]) ct2++;
            
        }
        if(ct1 > n/3) ans.push_back(num1);
        if(ct2 > n/3) ans.push_back(num2);
        
        return ans;
    }
    
};