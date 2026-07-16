class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;
        for(auto num : s) {
            int count = 0;
            if(s.count(num - 1))
                continue;
            if(s.size() != 0)
                count++;
            while(s.count(num + 1)) {
                num = num + 1;
                count++;
            }
            res = max(res, count);
        }
        return res;
    }
};
