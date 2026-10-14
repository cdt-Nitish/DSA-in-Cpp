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
    
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=root->val;

        int resultLevel = 1;
        int currentLevel = 1;

        while(!q.empty()){
            int n=q.size();//after poping the size of queue is decreased
            int cursum=0;
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();
                q.pop();
                cursum+=cur->val;

                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            if(cursum > sum){
                sum = cursum;
                resultLevel = currentLevel;
            }
            currentLevel++;
        }
        return resultLevel;
    }
};