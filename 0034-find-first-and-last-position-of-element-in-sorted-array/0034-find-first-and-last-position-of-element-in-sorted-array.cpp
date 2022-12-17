class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int sidx = lower_bound(nums, target);
        int bidx = lower_bound(nums, target+1) -1;
        if(sidx < nums.size() && nums[sidx] == target)
            return {sidx,bidx};
        else
            return {-1,-1};
    }
    int lower_bound(vector<int>&nums, int target){
        int left = 0;
        int right = nums.size()-1;
        
        while(left <= right){
            int mid = (right - left) / 2 + left;
            if(nums[mid] < target)
                left = mid + 1;
            else
                right = mid -1;
        }
        return left;
    }
};