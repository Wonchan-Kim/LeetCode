class Solution {
public:
   int dfs(vector<vector<int>>&grid,int i,int j,int n,int m)
    {
	//checking corner cases for moving in 4 direction up down left right
        if(i>=0 and i<n and j>=0 and j<m and grid[i][j]==1)
        {
            grid[i][j]=0;//updating grid value
            //counting all the island  
            return 1+ dfs(grid,i+1,j,n,m)+dfs(grid,i-1,j,n,m)+dfs(grid,i,j+1,n,m)+dfs(grid,i,j-1,n,m);
            
        }
        return 0;
    }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_area=0;
        int n=grid.size();
        int m=grid[0].size();
        //moving every point of grid  and updating its value when you travelled
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int count=dfs(grid,i,j,n,m);
					//finding maximum area
                    max_area=max(max_area,count);
                }
            }
        }
        return max_area;
    
    }
};

/*
그리드의 값이 0이라면 1을 찾을 때까지 grid 순회
1을 찾으면 섬이라는 걸 확인한후 섬을 전부 없앤뒤 count를 올림
*/
