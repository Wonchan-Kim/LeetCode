class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current; //combine을 갱신할 current vector
        helper(n,k,0,current,result);
        return result;
    }
    void helper(int n, int k, int i, vector<int>& current, vector<vector<int>>& result){
        if(current.size() == k)
        {
            result.push_back(current);
            return;
        }
        
        for(; i < n; i++)
        {
            current.push_back(i+1);
            helper(n,k,i+1, current, result);
            current.pop_back();
        }
    }
};