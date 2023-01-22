class Solution {
public:
    int numberOfSteps(int num) {
       uint16_t c = 0;
       while(num != 0) {
           if( !(num % 2) ) {
               num /= 2;
           }
           else {
               num--;
           }
           c++;
       }
       return c;
    }
};