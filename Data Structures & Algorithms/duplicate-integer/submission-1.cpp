#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        for(auto x : nums) {
            if(s.count(x)) return true;
            auto p = s.insert(x);
        }
        return false;
    }
};