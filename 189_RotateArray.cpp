#define MEM_OPTIMISED 0
#if MEM_OPTIMISED
class Solution {
public:
    void rev(vector<int>& n, uint32_t s, uint32_t e) {
        int* L = &n[s];
        int* R = &n[e];
        int hold;
        while( L < R )
        {
            hold = *L;
            *L = *R;
            *R = hold;
            L++;
            R--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        uint32_t n = nums.size();
        
        k %= n;
        rev(nums, n-k, n-1);
        rev(nums, 0, n-k-1);
        rev(nums, 0, n-1);
    }
};

#else
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> c = nums;
        uint32_t n = nums.size();
        for(uint32_t i = 0; i < n; i++)
        {
            c[(i+k) % n] = nums[i];
            
        }
        nums = c;
    }
};
#endif