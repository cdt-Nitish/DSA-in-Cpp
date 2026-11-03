class Solution {
public:
    int maxi(vector<int> nums){
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m){
                m=nums[i];
            }
        }
        return m; 
    } 
    int minMoves(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int big=maxi(nums);
        int ans=0;

        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-big);
        }
        
        return ans;
    }
};