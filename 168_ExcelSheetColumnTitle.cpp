class Solution {
public:
    string convertToTitle(int c) {
        string s = "";
        int o;
        
        while(c)
        {
            c--;
            o = c % 26;
            c /= 26;
            s.insert(s.begin(), static_cast<char>('A'+o));
        }
        return s;
    }
};