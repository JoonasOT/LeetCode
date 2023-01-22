class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        uint8_t a_ = accounts.size();
        uint8_t b_ = accounts[0].size();
        
        int m = -999999;
        int s = 0;
        for(uint8_t a = 0; a < a_; a++) {
            for(uint8_t b = 0; b < b_; b++) {
                s += accounts[a][b];

            }
            m = max(m, s);
            s = 0;
        }
        return m;
    }
};