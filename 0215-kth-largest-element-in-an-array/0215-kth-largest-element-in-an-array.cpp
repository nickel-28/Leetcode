class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        // vector<int> ans;
        int ans;
        int i=0;
        while(i<k){
            // ans.push_back(pq.top());
            ans=pq.top();
            pq.pop();
            i++;
        }
        
        return ans;
    }
};