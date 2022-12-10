class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> save_ans;
        vector<vector<int>> collection;
        permutation(0, nums, save_ans, collection);
        return collection;
    }
    void permutation(int i, vector<int>&nums, vector<int>& save_ans, vector<vector<int>>& collection){
        if(save_ans.size() == nums.size())
        {
            collection.push_back(save_ans);
            return;
        }
        for(i = 0; i < nums.size(); i++){
            if(nums[i] != 11)
            {
                save_ans.push_back(nums[i]);
                int temp = nums[i];
                nums[i] = 11;
                permutation(i + 1, nums, save_ans, collection);
                nums[i] = temp;
                save_ans.pop_back();
            }
        }
    }
};

/*백트래킹??

1 2 3 
1




1을 먼저 두면(a0) a1, a2, a3 
a1 a2 a3
a2 a1 a3
a3 a1 a2
1을 두면 뒤에 2, 3이 온후 
3 2 스위치

만약 1 2 3 4
1이 온후 2 3 4
2 4 3 
3 2 4 
3 4 2
4 2 3
4 3 2

총 스왑 6번

2 3 4
4 2 3
4 3 2
2 3 4
*/