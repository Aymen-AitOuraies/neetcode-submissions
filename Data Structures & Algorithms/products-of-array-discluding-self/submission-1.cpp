class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size);
        for(int i = 0; i < size; i++) { 
            int prod = 1;
            for(int j = 0; j < size; j++) {
                if(j != i)
                    prod *= nums[j];
            }
            v[i] = prod;
        }
        return v;
    }
};
