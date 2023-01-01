class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long long hor = matrix.size();
        long long ver = matrix[0].size();
        //cout << hor << ver << endl;
        long long left = 0, right = ver -1 ;
        long long root = matrix[left][right];
        while(left < hor && right < ver){
            if(root == target){
                //cout << root << endl;
                return true;
            }
            else if(root > target){
                if(right == 0)
                    break;
                //cout << "root is bigger : left, right" << left << ',' << right << ' ' << root << endl;
                right -= 1;
                root = matrix[left][right];
                
                //cout << "left, right" << left << ',' << right << ' ' << root << endl;
            }
            else{
                if(left == (hor-1))
                    break;
               // cout << "root is smaller : left, right" << left << ',' << right << ' ' << root << endl;
                left += 1;
                root = matrix[left][right];
               // cout << "left, right" << left << ',' << right << ' ' << root << endl;

            }
        }
        return false;
    }
        
};