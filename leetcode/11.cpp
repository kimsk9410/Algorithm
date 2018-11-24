class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0, left = 0, right = height.size() - 1;
        while(left < right){
            result = max(result, (right - left) * (height[left] < height[right] ? height[left++] : height[right--]));
        }
        return result;
    }
};
