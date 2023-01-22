class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        uint16_t m = 0, c = 0;
        for(uint16_t i = 0; i < nums.size(); i++)
        {
            if(nums[i])
                c++;
            else {
              if(c > m)
                  m = c;
              c = 0;
            }
        }
        if(c > m)
            m = c;
        return m;
    }
};