class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>presum;
        presum.push_back(0);
        for(int i=0;i<=n;i++){
            int temp=i;
            int sum=0;
            while(temp--){
                sum+=gain[temp];
            }
            presum.push_back(sum);
        }
        
        sort(presum.begin(),presum.end());
        return presum[n+1];
    }
};