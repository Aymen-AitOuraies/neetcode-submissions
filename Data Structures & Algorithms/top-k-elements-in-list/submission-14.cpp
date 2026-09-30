class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (auto x : nums) {
            m[x]++;
        }

        vector<vector<int>> v(nums.size() + 1);

        if (nums.size() == k)
            return nums;

        for (auto n : m) {
            v[n.second].push_back(n.first);
        }

        vector<int> res;
        for (int i = v.size() - 1; i > 0 && k > 0; i--) {
            if (v[i].empty())
                continue;

            for (int num : v[i]) {
                res.push_back(num);
                k--;
                if (k == 0)
                    break;
            }
        }

        return res;
    }
};