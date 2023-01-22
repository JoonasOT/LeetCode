class Solution {
public:
    int countDigits(int num) {
        int n = num, c = 0;
        while(num>0){
            c += (n%(num%10)==0);
            num /= 10;
        }
        return c;
    }
};