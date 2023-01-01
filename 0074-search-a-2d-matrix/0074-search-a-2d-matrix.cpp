class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int hor = matrix.size();
        int long ver = matrix[0].size();
        int left = 0, right = ver -1 ;
        int root = matrix[left][right];
        while(left < hor && right < ver){
            if(root == target){
                return true;
            }
            else if(root > target){
                if(right == 0)
                    break;
                right -= 1;
                root = matrix[left][right];
            }
            else{
                if(left == (hor-1))
                    break;
                left += 1;
                root = matrix[left][right];
            }
        }
        return false;
    }
        
};