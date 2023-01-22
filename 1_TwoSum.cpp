class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> l;
        l.reserve(nums.size());
        std::vector<int> ans(2);

        


        for(uint32_t i = 0; i < nums.size(); i++)
        {
            auto iter = std::find(l.begin(), l.end(), target-nums[i]);

            if(iter!= l.end())
            {
                ans[0] = iter-l.begin();
                ans[1] = i;
                return ans;
            }
            l.push_back(nums[i]);
        }
        return ans;
    }
};