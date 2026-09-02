class Solution {
public:
    void helper(int idx,vector<int>& cand, int tar, vector<int>& cur,vector<vector<int>>& csum){
        if(tar==0){
            csum.push_back(cur);
            return ;
        }
        for(int i=idx;i<cand.size();i++){
            if(i>idx && cand[i]==cand[i-1]) continue;
            if(tar<cand[i]) break;

            cur.push_back(cand[i]);
            helper(i+1,cand, tar-cand[i],cur,csum);

            cur.pop_back();
        }
    }
        vector<vector<int>> combinationSum2(vector<int>& cand, int tar) {
        sort(cand.begin(), cand.end());
        vector<int> cur;
        vector<vector<int>> csum;
        helper(0,cand,tar,cur,csum);

        return csum;
    }
};