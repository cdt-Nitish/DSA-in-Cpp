class Solution {
public:
    bool checkString(string s) {
      string str=s;
      sort(str.begin(),str.end());
      return s==str;
        
    }
};