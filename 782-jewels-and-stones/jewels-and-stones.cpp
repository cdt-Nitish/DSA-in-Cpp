class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int>st(jewels.begin(),jewels.end());
        int cnt=0;

        for(auto i:stones){
            if(st.find(i)!=st.end()){
                cnt++;
            }
        }
        return cnt;
        
    }
};