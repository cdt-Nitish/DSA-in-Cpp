class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bb=prices[0];
        int tp=0;
        int total=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bb){
                tp=tp+prices[i]-bb;
            }
            bb=prices[i];
           
        }

    return tp;
    }
};