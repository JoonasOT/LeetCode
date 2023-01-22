class Solution {
public:
    int reverse(int x) {
        int s = 0;
        int r = 0;
        
        while(x) {
            r = x % 10;
            x /= 10;
            
            
            if (s > INT_MAX/10 || s < INT_MIN/10) {
                    return 0;
                }
            
            s *= 10;
            s += r;
        }
        return s;
    }
};