class Solution {
public:
    string convert(string s, int numRows) {
        if (!(--numRows)) return s;

        string ans;
        int ss = 2 * numRows;

        for (int r = 0; r < numRows+1; ++r) {
            int i = r;

            while (i < s.size()) {
                ans += s[i];
                if (r != 0 && r != numRows) {
                    int ii = i + ss-2*r;
                    
                    if (ii < s.size()) {
                        ans += s[ii];
                    }
                }
                i += ss;
            }
        }

        return ans;
    }
};