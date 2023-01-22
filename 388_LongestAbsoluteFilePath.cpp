class Solution {
public:
    int lengthLongestPath(string tmp){
    	 stringstream ss(tmp);
         unordered_map<int,int>len;
         uint32_t res = 0;
		 
         while( getline(ss, tmp, '\n') ) {
             uint32_t d  = 0;
             while(tmp[d] == '\t') d++;
             
             size_t s = tmp.size();
             len[d] = (!d ? s : len[d-1]+1 + s-d);
             
             if(tmp.find('.') != string::npos)
                 res = max((int)res, len[d]);
         }
		 
        return res;
    }
};