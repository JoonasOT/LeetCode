class Solution {
public:
    double myPow(double x, int n) {
        if(!n || x == 1)
            return 1;
        
        if(n < 0)
        {
            if(n == INT_MIN) {
                double r = myPow(1/x, -(n/2));
                return r * r;
            }
            return myPow(1/x, -n);
        }
        double temp = myPow(x, n/2);
        return n % 2 == 0 ? temp * temp : temp * temp * x;
    }
};