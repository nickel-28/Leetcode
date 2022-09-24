class Solution {
public:
    
    vector<vector<int>>ans;
    vector<int>path;
    void dfs(TreeNode*root, int targetSum, int currSum){
        if(!root) return;
        currSum += root->val;
        path.push_back(root->val);
        if(!root->left and !root->right and currSum == targetSum) ans.push_back(path);    
        dfs(root->left,targetSum,currSum);
        dfs(root->right,targetSum,currSum);
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return ans;
        dfs(root,targetSum,0);
        return ans;
    }
};