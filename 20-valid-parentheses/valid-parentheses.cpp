class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        int n = str.size();
        int i = 0;
        while (i < n) {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
                s.push(str[i]);
            } else {
                if (s.size() == 0)
                    return false;

                if (str[i] == ')' && s.top() == '(' ||
                    str[i] == '}' && s.top() == '{' ||
                    str[i] == ']' && s.top() == '[') {
                    s.pop();
                }else return false;
            }
            i++;
        }

        return s.size() == 0;
    }
};