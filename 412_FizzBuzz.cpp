class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v(n);
        
        for(uint16_t i = 0; i < n; i++) {
            if(!((i + 1) % 3))
            {
              v[i] = "Fizz";
            }
            if(!((i + 1) % 5)){
                v[i] += "Buzz";
            }
            
            if(v[i].empty())
                v[i] = std::to_string(i + 1);
            
        }
        return v;
    }
};