class Solution {
public:
    bool isValid(string s) {
        vector<uint8_t> q;
        q.reserve(q.size()/2);
        
        for(const char& c : s) 
        {
            if(c == '(' || c == '[' || c == '{') {
                q.push_back(static_cast<uint8_t>(c));
            }
            else{
                if(q.empty())
                    return false;
                if(q.back()==static_cast<uint8_t>(c)-2 ||
                    q.back()==static_cast<uint8_t>(c)-1){
                    q.pop_back();
                    continue;
                }
                
                return false;
            }
        }
        if(!q.empty())
            return false;
        
        return true;
    }
};