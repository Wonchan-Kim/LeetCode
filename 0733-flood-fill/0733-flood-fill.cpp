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
        dfs(image, sr, sc, image[sr][sc], color);
        return image;
        }
    };
