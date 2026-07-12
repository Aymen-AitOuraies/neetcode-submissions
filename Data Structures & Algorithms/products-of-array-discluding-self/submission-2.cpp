class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size);
        vector<int> pre(size);
        vector<int> suf(size);
        pre[0] = 1;
        suf[size - 1] = 1;
        for(int i = 1; i < size; i++)
            pre[i] = nums[i - 1] * pre[i - 1];
        for(int i = size - 2; i >= 0; i--)
            suf[i] = nums[i + 1] * suf[i + 1];
        for(int i = 0; i < size; i++)
            v[i] = pre[i] * suf[i]; 
        return v;
    }
};
