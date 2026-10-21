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
    void leafs(TreeNode* root,vector<int>& ans){
        if(root->left==NULL && root->right==NULL){
               ans.push_back(root->val);
               return ;
             }
        if(root->left) leafs(root->left,ans);
        if(root->right) leafs(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a1,a2;
        leafs(root1,a1);
        leafs(root2,a2);
        return a1==a2;
    }
};