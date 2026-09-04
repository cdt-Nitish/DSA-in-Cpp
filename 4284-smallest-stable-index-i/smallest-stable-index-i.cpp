class Solution {
public:
    
    int firstStableIndex(vector<int>& nums, int k) {
        int l;
        int r;
        int stable=INT_MAX;
       for(int i=0;i<nums.size();i++){
        l=nums[i];
        r=nums[0];
        for(int j=0;j<nums.size();j++){
            if(j<=i){
                r=max(nums[j],r);
            }else if(j>=i){
                l=min(nums[j],l);
            }
        }
        int instable=r-l;
        if(instable<=k){
            stable=min(stable,i);
        }


       }
       return stable==INT_MAX ? -1 : stable;
    }
};