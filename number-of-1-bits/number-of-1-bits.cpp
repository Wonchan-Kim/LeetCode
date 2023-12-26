class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits = 1;
        int ans = 0;
        for(int i = 0; i < 32; i++){
            if ((n & bits) != 0){
                ans++;
            }
            bits <<= 1;
        }
        return ans;
    }
};