class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;
        
        int* L = &nums[0];
        int* R = &nums.back();
        
        while(L <= R)
        {
            if(*L == val){
                *L = *R;
                R--;
            }
            else {
                L++;
            }
        }

        return (L - &nums[0]);
    }
};