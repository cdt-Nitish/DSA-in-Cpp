class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int digsum=0;
            while(nums[i]!=0){
                int temp =nums[i]%10;
                digsum+=temp;
                nums[i]/=10;
                
            }
            if(digsum==i) ans=min(ans,i);
        }

        return ans==INT_MAX ? -1 : ans;
        
    }
};