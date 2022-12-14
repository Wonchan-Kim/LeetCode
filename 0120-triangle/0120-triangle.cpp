class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         auto height = triangle.size()-1;
        if(height == 0)
            return triangle[0][0];
        while(height >= 2){
            for(int j = 0; j < triangle[height-1].size(); j++){
                triangle[height-1][j] += min(triangle[height][j], triangle[height][j+1]);
            }
            height--;
        }
        return triangle[0][0]+ min(triangle[1][0], triangle[1][1]);
    }
};

/*
트리의 높이 = traingle.size();
트리 갱신
i와 i-1이 있을 때,
for(int j = 0; j < traingle[i-1].size(); j++){
    triangle[i-1][j] += min(traingle[i][j], traingle[i][j+1]);
얼만큼 반복하냐
while(높이 > 0)

}
*/               