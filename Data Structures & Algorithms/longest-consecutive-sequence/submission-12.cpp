class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x : nums)
            s.insert(x);
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            int num = nums[i];
            if(s.count(num - 1))
                continue;
            // if(s.size() == 1)
            //     return 1;
            int flag = 0;
            while(s.count(num + 1)) {
                if(!flag) {
                    count++;
                    flag = 1;
                }
                num = num + 1;
                count++;
            }
            if(count > res)
                res = count;
        }
        if(res == 0 && s.size() != 0)
            res++;
        return res;
    }
};
