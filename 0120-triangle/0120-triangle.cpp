class Solution {
public:int helper(vector<vector<int>>& triangle, int i, int j,vector<vector<int>>& dp,int n)
{
    if(i==n-1)
    {
        return triangle[i][j];
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int move1=triangle[i][j]+helper(triangle,i+1,j,dp,n);
    int move2=triangle[i][j]+helper(triangle,i+1,j+1,dp,n);
    return dp[i][j]=min(move1,move2);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return helper(triangle,0,0,dp,n);
    }
};