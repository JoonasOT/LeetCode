class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
            return false;
        
        long double f = log2(n);

        double v;
        long double r = modf(f, &v);
        return v == f;
    }
};