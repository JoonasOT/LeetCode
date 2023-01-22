class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int s = n.size();
        if(!s) return false;
        
        int i = 0, c = 0;
        for(int j=1;j<s;j++) {
            if(n[i] == n[j]) continue;
            
            i++;
            n[i] = n[j];
            c++;        
        } 
        return c+1;
    }
};