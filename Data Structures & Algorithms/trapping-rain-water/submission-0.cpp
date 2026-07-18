class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pre;
        vector<int> suf(n);
        pre.push_back(height[0]);
        suf[n - 1] = height[n - 1];
        for(int i = 1; i < n; i++) {
            pre.push_back(max(pre[i - 1], height[i]));
        }
        for(int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], height[i]);
        }
        int water = 0;
        for(int i = 0; i < n; i++) {
            water += min(pre[i], suf[i]) - height[i];
        }
        return water; 
    }
};
