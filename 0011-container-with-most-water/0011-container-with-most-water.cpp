class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int height1;
        int area;
        int max1 = 0;
     
        while(left < right){
            height1 = min(height[left], height[right]);
               int w = right - left;
            area = height1 * w;
            max1 = max(max1, area);
            if(height[right] > height[left]) left++;
            else if(height[left] > height[right]) right--;
            else left++, right--;
        }
        return max1;
    }
};
/*
left right 두 포인터
compare heights of height[left , right]
store it.
*/