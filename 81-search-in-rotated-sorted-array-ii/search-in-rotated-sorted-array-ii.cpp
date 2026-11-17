class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int a: nums){
          if(a==target) return true;
        }
        return false;
    }
};