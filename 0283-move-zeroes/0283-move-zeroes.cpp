class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                {
                nums[cnt++] = nums[i];
                }
            if(nums[i]==0)
                {
                zero++;
                }
        }
       for(int i=nums.size()-zero; i<nums.size();i++)
           {
           nums[i] = 0;
       }
    }
};