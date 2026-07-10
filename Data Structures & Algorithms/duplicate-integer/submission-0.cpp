#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        for(auto x : nums) {
            auto p = s.insert(x);
            if(!p.second) return true;
        }
        return false;
    }
};