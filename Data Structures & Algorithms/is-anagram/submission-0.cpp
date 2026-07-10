class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;
        for(char c : t)
            freq[c]--;
        for(auto v : freq) {
            if(v.second != 0)
                return false;
        }
        return true;
    }
};
