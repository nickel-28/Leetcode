class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size();
        int n=strs[0].size();
        int ans=0;
        for(auto j=0;j<n;j++){
            for(auto i=1;i<m;i++){
                if(strs[i-1][j]>strs[i][j]){
                ans++;
                break;
                }
            }
            // return ans;
        }
        return ans;
    }
};