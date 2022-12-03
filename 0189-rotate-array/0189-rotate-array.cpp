class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> save(nums.size());
        for(int i=0; i<nums.size();i++){
            save[i] = nums[i];
            }
        
        for(int i=0; i<nums.size(); i++){
     nums[(i+k)%nums.size()] = save[i];      
        }
    }
};

/*
회전 = mod 연산
인덱스 + k % 배열 길이 하면 새로운 위치 나옴
*/
