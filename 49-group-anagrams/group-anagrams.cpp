class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string ,vector<string>>map;

        for(string s :strs){
            string sortedStr=s;
            sort(sortedStr.begin(),sortedStr.end());

            map[sortedStr].push_back(s);
        }
        for(auto pair:map){
            ans.push_back(pair.second);
        }
        return ans;
    }
};