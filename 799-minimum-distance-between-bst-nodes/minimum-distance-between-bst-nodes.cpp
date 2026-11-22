/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(int& mini, TreeNode* root, int& prev) {
        if (!root)
            return;

        if (root->left)
            helper(mini, root->left, prev);

        if (prev != -1) {
            mini = min(mini, abs(prev - root->val));
        }
        prev=root->val;

        if (root->right)
            helper(mini, root->right, prev);
    }
    int minDiffInBST(TreeNode* root) {
        int mini = INT_MAX;
        int prev = -1;
        helper(mini, root, prev);
        return mini;
    }
};