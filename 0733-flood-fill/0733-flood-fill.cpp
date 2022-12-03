class Solution {
public:
    void dfs(vector<vector<int>>& image, int x, int y, int val, int color){
        if(x < 0 || x >= image.size() || y < 0 || y >= image[0].size() || image[x][y] !=val || image[x][y] == color)    return;
        image[x][y] = color;
        dfs(image, x + 1, y, val, color);
        dfs(image, x, y + 1, val, color);
        dfs(image, x - 1, y, val, color);
        dfs(image, x, y - 1, val, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        dfs(image, sr, sc, val, color);
        return image;
        }
    };

/* void dfs(vector<vector<int>>& image, int i, int j,int val, int newColor)
    {
        if(i<0 || i>=image.size() || j<0 || j>= image[0].size() || image[i][j] == newColor || image[i][j] != val)
        {
            return;
        }
        image[i][j] = newColor;
        dfs(image,i-1,j,val,newColor);
        dfs(image,i+1,j,val,newColor);
        dfs(image,i,j-1,val,newColor);
        dfs(image,i,j+1,val,newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int val = image[sr][sc];
        dfs(image,sr,sc,val,newColor);
        return image;
    }
};*/