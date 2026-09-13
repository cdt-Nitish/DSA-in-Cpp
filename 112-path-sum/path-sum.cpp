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
    bool is(TreeNode* root, int targetSum, int sum) {
        if (root == NULL)
            return false;

        sum = sum + root->val;
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum)
                return true;
            return false;
        }
        bool lsum = is(root->left, targetSum, sum);
        bool rsum = is(root->right, targetSum, sum);
        return lsum || rsum;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return is(root, targetSum, sum);
    }
};