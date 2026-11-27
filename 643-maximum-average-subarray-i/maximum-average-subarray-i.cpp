class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        for(int i=0;i<k;i++){
          ans+=nums[i];
        }
        double maxi= ans/k;
        
        int st=0,end=k-1;
        while(end < nums.size()-1){
          // Remove prev element 
            ans-=nums[st];
          // Increase pointer 
            st++,end++;
          // Add new element 
            ans+=nums[end];
            maxi=max(maxi,ans/k);
        }

        return maxi;
    }
};