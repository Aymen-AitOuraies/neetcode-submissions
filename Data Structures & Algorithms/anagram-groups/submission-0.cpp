
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(auto x : strs) {
            string sorted = x;
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(x);
        }
        vector<vector<string>> res;
        for(auto val : m) {
            res.push_back(val.second);
        }
        return res;
    }
};
