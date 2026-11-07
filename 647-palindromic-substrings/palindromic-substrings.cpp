class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0;
        int n=s.length();
    //Odd-length palindromes (center is at i)
        for(int i=0;i<n;i++){
            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                cnt++;
                left--;
                right++;
            }

    //Even-length palindromes (center is between i and i+1)
            left=i;
            right=i+1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                cnt++;
                left--;
                right++;
            }
        }
        return cnt;
    }
};