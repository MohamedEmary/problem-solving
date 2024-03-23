class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int n = height.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int w = j - i;
                int h = min(height[i], height[j]);
                maxArea = max(maxArea, w * h);
            }
        }
        
        return maxArea;
    }
};