class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        findAll("", n, n, ans);
        
        return ans;
    }
    
    void findAll(string s, int open, int close, vector<string> &ans){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0) findAll(s+"(",open-1,close, ans);
        if(open<close) findAll(s+")",open,close-1, ans);
    }
};