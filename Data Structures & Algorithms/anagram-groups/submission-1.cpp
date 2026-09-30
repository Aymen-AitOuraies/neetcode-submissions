class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(auto s: strs) {
            string x = s;
            sort(x.begin(), x.end());
            m[x].push_back(s);
        }
        vector<vector<string>> res;
        for(auto p: m) {
            res.push_back(p.second);
        }
        return res;
    }
};
