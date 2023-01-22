class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int s = 0;
        
        for(uint16_t i = 0; i < nums.size(); i++)
        {
            s += nums[i];

            nums[i] = s;
        }
        return nums;
    }
};