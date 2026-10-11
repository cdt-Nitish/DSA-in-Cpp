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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        bool LtoR=true;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>curLevel(n);
            for(int i=0;i<n;i++){
                TreeNode* cur= q.front();
                q.pop();
                int idx=(LtoR) ? i : (n-i-1);
                curLevel[idx]=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
                // curLevel.push_back(cur);
            }
            LtoR=!LtoR;
            ans.push_back(curLevel);
        }


        return ans;
    }
};