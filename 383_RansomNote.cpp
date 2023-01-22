class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, uint16_t> m;
        
        for(uint16_t i = 0; i < magazine.size(); i++)
        {
            if(m.count(magazine[i]) == 0)
               m[magazine[i]] = 1;
            else
               m[magazine[i]] += 1;
        }
        
        for(uint16_t i = 0; i < ransomNote.size(); i++) {
            char c = ransomNote[i];
            if(m.count(c) > 0 && m[c] > 0)
                m[c] -= 1;
            else
                return false;
        }
        return true;
    }
};