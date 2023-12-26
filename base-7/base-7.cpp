class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        bool minus = false;
        if(num < 0){
            minus = true;
            num *= -1;
        }
        if(num == 0){
            ans = '0';
            return ans;
        }
        while(num > 0){
            ans = char(num % 7 + '0') + ans; 
            num /= 7;
        }
        if(minus){
            ans = '-' + ans;
        }
        return ans;
    }
};