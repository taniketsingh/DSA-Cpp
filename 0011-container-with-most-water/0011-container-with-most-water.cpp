class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left < right){
            int h = min(height[left], height[right]);
            maxA = max(maxA, h*(right - left));
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return maxA;
    }
};