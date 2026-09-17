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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> curL(size);
            for (int i = 0; i < size; i++) {
                TreeNode* a = q.front();
                q.pop();
                curL[i] = a->val;
                if (a->left) {
                    q.push(a->left);
                }
                if (a->right) {
                    q.push(a->right);
                }
            }

            ans.push_back(curL);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
    };