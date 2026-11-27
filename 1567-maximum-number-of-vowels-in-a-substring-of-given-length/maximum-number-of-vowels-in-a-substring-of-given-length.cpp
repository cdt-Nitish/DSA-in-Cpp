class Solution {
public:
    int maxVowels(string s, int k) {
        bool isV[26]={false};
        isV['a'-'a']=isV['e'-'a']=isV['i'-'a']=isV['o'-'a']=isV['u'-'a']=true;

        int cnt=0;
        for(int i=0;i<k;i++){
          cnt+= isV[s[i]-'a'];
        }
        int maxi =cnt;
        for(int i=k;i<s.size();i++){
          if(maxi==k) return k;
          cnt+=isV[s[i]-'a'] - isV[s[i-k]-'a'];
          maxi=max(cnt,maxi);
        }
        return maxi;
    }
};