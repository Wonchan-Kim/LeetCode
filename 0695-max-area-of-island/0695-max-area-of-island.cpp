class Solution 
{
  public:
    bool valid(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j])
            return 1;
        return 0;
    }
    void dfs(int i,int j,vector<vector<int>>& grid,int &val)
    {
        grid[i][j]=0;
        val++;
        if(valid(i+1,j,grid))
          dfs(i+1,j,grid,val);
        if(valid(i,j+1,grid))
          dfs(i,j+1,grid,val);
        if(valid(i-1,j,grid))
          dfs(i-1,j,grid,val);
        if(valid(i,j-1,grid))
          dfs(i,j-1,grid,val);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    int val=0;         
                    dfs(i,j,grid,val);
                    ans=max(ans,val);
                }
            }
        }
        return ans;
    }
};

/*
그리드의 값이 0이라면 1을 찾을 때까지 grid 순회
1을 찾으면 섬이라는 걸 확인한후 섬을 전부 없앤뒤 count를 올림
*/
