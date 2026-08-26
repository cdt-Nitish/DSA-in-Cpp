class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans;
        unordered_set<int> st;
        for (auto i : nums) {
            st.insert(i);
        }
        for (int i = 1;; i++) {
            ans = k * i;
            if (st.find(ans) == st.end()) {
                break;
            }
        }

        return ans;
    }
};