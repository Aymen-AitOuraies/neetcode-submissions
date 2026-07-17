class Solution {
public:
    int maxArea(vector<int>& heights) {
                int i = 0;
        int j = heights.size() - 1;
        int m = 0;
        while(i < j) {
            int diff = j - i;
            int sum = min(heights[i], heights[j]) * diff;
            m = max(m, sum);
            if(heights[i] > heights[j])
                j--;
            else
                i++;
        }
        return m;
    }
};
