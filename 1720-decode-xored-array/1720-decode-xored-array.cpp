class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans{first};
        for(auto it: encoded){
            ans.push_back(first^=it);
            
        }
        return ans;
    }
};