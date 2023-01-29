/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    // Normal Traversal
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inorder(root, ans);
//         return ans;
//     }
//     void inorder(TreeNode* root, vector<int> &ans){
//         if(root==NULL) return;
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->val);
//             return;
//         }
//         inorder(root->left, ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }
    
    
   // Morris Traversal 
    public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        TreeNode* cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                inorder.push_back(cur->val);
                cur=cur->right;
            }
            else {
                TreeNode *prev=cur->left;
                while(prev->right && prev->right!=cur){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    inorder.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
        return inorder;
    }
    
};