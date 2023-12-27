class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int power = 31;
        uint32_t ans = 0;
        
        for(int i = 0; i < 32; i++){
            ans += (n & 1) << power;
            n >>= 1;
            power -= 1;
        }
        return ans;
    }
};