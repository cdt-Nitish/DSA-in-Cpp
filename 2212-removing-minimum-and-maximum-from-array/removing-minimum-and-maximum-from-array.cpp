class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 || n == 2)
            return n;
        int maxi = 0;
        int mini = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[maxi]) {
                maxi = i;
            } else if (nums[i] < nums[mini]) {
                mini = i;
            }
        }
        int l = min(mini, maxi);
        int r = max(mini, maxi);

        return min({r + 1, n - l, (l + 1) + (n - r)});
    }
};