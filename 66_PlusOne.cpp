class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int* p = &digits.back();
        (*p)++;
        while( *p >= 10 )
        {
            (*p) %= 10;
            if(p == &digits[0]) {
                digits.insert(digits.begin(), 1);
                break;
            }
            else {
                p--;
                (*p)++;
            }
        }
        return digits;
    }
};