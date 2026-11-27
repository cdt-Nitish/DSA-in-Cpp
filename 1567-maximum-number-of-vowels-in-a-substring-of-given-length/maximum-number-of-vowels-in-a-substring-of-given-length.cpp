class Solution {
public:
    bool isVowel(char s){
        char ch=tolower(s);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
          return true;
      
      return false;
      }

    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
          if(isVowel(s[i])) cnt++;
        }
        int maxi=cnt;
        for(int i=k;i<s.size();i++){
          if(maxi==k) return k;
          if(isVowel(s[i-k]))cnt--;
          if(isVowel(s[i])) cnt++;
          maxi=max(cnt,maxi);
        }
        return maxi;
    }
};