class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        vector<bool> isVisited(isConnected.size(), false);
        for(int i = 0; i < isConnected.size(); i++){ //traverse the dots
            if(!isVisited[i]){
                dfs(isConnected, isVisited, i);
                ans++;
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>& isConnected, vector<bool>& isVisited, int i){
        isVisited[i] = true;
        for(int j = 0; j < isVisited.size(); j++){
            if(i != j && isConnected[i][j] && !isVisited[j])
                dfs(isConnected, isVisited, j);
        }
    }
};

/*
1 1 0
1 1 0
0 0 1

1 0 0 
0 1 0
0 0 1

점 하나에 대해 조사, 그 이후 다음 점에 대해 조사
만약 점 1에 대해 조사할때 2에 대해서도 조사하였다면 3으로 건너뛰어도 됨.
*/