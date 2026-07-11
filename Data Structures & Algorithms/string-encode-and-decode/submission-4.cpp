class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++) {
            res += to_string(strs[i].size()) + '#' + strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            i = hashPos + 1;
            v.push_back(s.substr(i, len));
            i+=len;
        }
        return v;
    }
};
