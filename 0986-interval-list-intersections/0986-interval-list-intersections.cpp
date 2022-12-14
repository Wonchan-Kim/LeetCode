class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int size1 = firstList.size();
        int size2 = secondList.size();
        vector<vector<int>> answer;
        int i = 0, j = 0;
        while(size1 > 0 && size2 > 0){
            int idx1 = firstList[i].size()-1;
            int idx2 = secondList[j].size()-1;
            int start = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][idx1], secondList[j][idx2]);
            if(start <= end)
                answer.push_back({start, end});
            
            if(end == firstList[i][idx1])
            {
                i++;
                size1--;
            }
            else if( end == secondList[j][idx2])
            {
                j++;
                size2--;
            }
        }
        return answer;
    }
};

/* 첫번째 리스트의 첫 벡터 [0,2]
두 번째 리스트의 첫 벡터 [1,5]

구간 구하는 법 : max value of starting point, min value of ending point
[max(0,1), min(2,5)]

[1,6]
[2,3] [4,5]

[max (1,2), min (3,5)], [max(1,4), min(5,6)]
ignore the vector that was done searching, traverse to the next vector,
if max value of the vector was not considered, keep it for compare with the other vector of another list.

*/

/* first trial fail
[[0,2],[5,10],[13,23],[24,25]]
[[1,5],[8,12],[15,24],[25,26]]

reason : after comparing [5,10] and [8,12], vector of the secondList was kept for next comparison.
when [13, 23] was passed into the function as parameter, the value of start became 13 and the value of the end was 12.
As a result, the vector that contains [13,12] was pushed back into the answer.
To prevent the error like this I added the code that ignores the case like this.
*/
