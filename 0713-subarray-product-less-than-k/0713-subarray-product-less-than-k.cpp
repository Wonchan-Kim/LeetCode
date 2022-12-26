class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
            return 0;
        int ans = 0;
        int m = 1;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){ //traverse
            m *= nums[right];
            while(m >= k){
                m /= nums[left];
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
};