class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int diff = *max_element(nums.begin(), nums.end())-*min_element(nums.begin(),nums.end());
        return diff - 2*k <= 0 ? 0 : diff-2*k;
    }
};