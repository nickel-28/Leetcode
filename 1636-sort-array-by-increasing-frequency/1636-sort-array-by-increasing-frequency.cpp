class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int> > pq;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto it : freq){
            pq.push({-it.second, it.first});
        }
        while(!pq.empty()){
            int x = pq.top().first;
            for(int i=0; i<abs(x); i++){
                ans.push_back(pq.top().second);
            }
            pq.pop();
        }
        
        return ans;
    }
};