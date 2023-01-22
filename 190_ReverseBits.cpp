class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::bitset<32> b{n};
        uint8_t L, R, c;
        L = 0;
        R = 31;
        
        while(L < R) {
            c = b[L];
            b[L] = b[R];
            b[R] = c;
            L++;
            R--;
        }
        return b.to_ulong();
    }
};