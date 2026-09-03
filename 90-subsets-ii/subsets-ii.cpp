class Solution {
public:
    void helper(int idx ,vector<int>& nums,vector<int>& cur,vector<vector<int>>& ans){
        // if(idx==nums.size()){
        //     ans.push_back(cur);
        //     return ;
        // }
        //if we using for loop we do not need to use base case because the for loop condition naturally acts as the termination condition.
         ans.push_back(cur);

    for(int i=idx;i<nums.size();i++){
        if(idx<i && nums[i]==nums[i-1]) continue;
        cur.push_back(nums[i]);
        helper(i+1,nums,cur,ans);
        cur.pop_back();
        // helper(i+1,nums,cur,ans);

    }
        // while(idx < nums.size() && )
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,cur,ans);

        return ans;
    }
};