class Solution {
public:
   void helper(int idx,vector<int>& candidates, int target , vector<int>& cur, vector<vector<int>>&csum){
    if(target==0){
        csum.push_back(cur);
        return ;
    }
    if(target<0 || idx==candidates.size()){
        return ;
    }
    // Talking 
    cur.push_back(candidates[idx]);
    helper(idx, candidates,target - candidates[idx], cur, csum );
    // Removing
    cur.pop_back();
     helper(idx+1, candidates,target, cur, csum );

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        vector<vector<int>> csum;
        helper(0, candidates, target, cur, csum);

        return csum;
    }
};