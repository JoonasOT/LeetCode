class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        
        for(uint16_t i = 0; i < nums.size(); i++) {
            if((static_cast<int>(log10(nums[i])) % 2 ))
            {
                c++;
            }
        }
        return c;
    }
};