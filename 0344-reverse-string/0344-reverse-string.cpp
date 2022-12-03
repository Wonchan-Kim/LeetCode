class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size()-1;
        char temp;
        for(int i=0;i<=len/2;i++){
            temp = s[len-i];
            s[len-i] = s[i];
            s[i] = temp;
        }
        
    }
};