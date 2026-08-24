class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bbuy=prices[0];
        int maxpro=0;
        for(int i=0;i<prices.size();i++){
            if(bbuy<prices[i]){
                maxpro=max(maxpro,prices[i]-bbuy);
            }
            bbuy=min(bbuy,prices[i]);
        }
        return maxpro;
    }
};