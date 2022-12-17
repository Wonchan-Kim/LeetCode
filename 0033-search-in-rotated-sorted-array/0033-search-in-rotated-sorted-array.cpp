class Solution {
public:
        int get_pivot(vector<int>&nums){
        int left = 0;
        int i = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(left < right)
        {
            mid = (right - left) / 2 + left;
            cout << "mid" << mid << endl;
            if(nums[mid] > nums[right])
                left = mid + 1;
            else{
                right = mid;
            }

        }

        /* 4 5 6 7 0 1 2
        left = 4;
        right = 2;
        mid = 6
        */
        return right;
    }
    int bsearch(vector<int>& nums, int target, int left ,int right){
        
        while(left<=right)
        {
            int mid = (right-left)/2 + left;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
        
    }
        int search(vector<int>& nums, int target) {
        int pivot = get_pivot(nums);
        int ans1 = bsearch(nums, target, 0, pivot-1);
        int ans2 = bsearch(nums, target, pivot, nums.size()-1);

        return max(ans1, ans2);
        
    }
};