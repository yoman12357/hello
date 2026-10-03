// Runtime: N/A
// Memory: N/A

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int width = right - left;
            int currHeight = min(height[left], height[right]);
            int currentArea = width * currHeight;
            maxArea = max(maxArea, currentArea);

            // Move the pointer pointing to the shorter height
            (height[left] < height[right])?left++:right--;
        }

        return maxArea;
    }
};