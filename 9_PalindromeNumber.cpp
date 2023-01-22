class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 )
            return false;
        string s = to_string(x);
        while(!s.empty()) {
            if(s[0] != s.back()) 
                return false;
            
            s.erase(0,1);
            
            if(!s.empty())
                s.pop_back();
        }
        return true;
    }
};