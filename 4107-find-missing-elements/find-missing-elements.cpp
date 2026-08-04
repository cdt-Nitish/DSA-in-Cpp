class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        // int range=nums[n-1] - nums[0];
        int exp=nums[0];
        int i=0;
        while(exp<nums[n-1]){
            if(nums[i]==exp){
                exp++;
                i++;
            }else if(nums[i] > exp){
                ans.push_back(exp);
                exp++;
            }else{
                i++;
            }
            // i++;
        }

        return ans;
    }
};