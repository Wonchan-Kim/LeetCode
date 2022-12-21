class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //정렬
        vector<vector<int>> ans;
        int sum = 0;
        for(int i = 0; i < nums.size()-2; i++)
        {
            if(nums[i] > 0)
                break;
            if(i > 0 && nums[i] ==  nums[i-1])
                continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum > 0)
                    right--;
                else if(sum < 0)
                    left++;
                else{
                    ans.push_back({nums[i], nums[left], nums[right]});
                    int last_low_occurence = nums[left] , last_high_occurence = nums[right];
                    while(left < right && nums[left] == last_low_occurence)
                        left++;
                    while(right > left && nums[right] == last_high_occurence)
                        right--;
            }
        }
        }
        return ans;
    }
};