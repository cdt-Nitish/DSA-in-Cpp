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
public:
    void helper(TreeNode* root,int& ans,bool isleft){
       
        if(!root) return;
        if(!root->left && !root->right && isleft)
        {
            ans+=root->val; 
            return; 
        }
        if(root->left!=NULL) helper(root->left,ans,true);
        if(root->right!=NULL) helper(root->right,ans,false);
       
    }
    int sumOfLeftLeaves(TreeNode* root) {
       int ans=0;
       helper(root,ans,false);
    //    helper(root->right,ans);
       return ans;
    }
};