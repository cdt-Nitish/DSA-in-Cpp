class Solution {
public:
    int minAddToMakeValid(string s) {
        int cntL=0;
        int cntR=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cntL++;
            }else{
                if(cntL>0) cntL--;
                else cntR++;
            }
        }
        return cntL+cntR;
    }
};