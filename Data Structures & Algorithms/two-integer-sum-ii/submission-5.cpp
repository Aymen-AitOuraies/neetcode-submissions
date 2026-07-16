class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size() - 1; i++) {
            int n = target - numbers[i];
            auto it = lower_bound(numbers.begin() + i + 1, numbers.end(), n);
            if(it != numbers.end() && *it == n) {
                int idx = it - numbers.begin();
                return {i + 1, idx + 1};
            }
        }
        return {};
    }
};
