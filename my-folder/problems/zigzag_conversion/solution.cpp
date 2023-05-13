class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        int n = s.size();
        int cycleLen = 2*(numRows - 1);
        string ans;
        
        /*
        first row: k*cycleLen
        last row: k*cycleLen+numRows-1
        internal rows: k*cycleLen+i or (k+1)*cycleLen-i
        */
        for(int i = 0; i < numRows; ++i){
            for(int k = 0; i + k * cycleLen < n; ++k){
                ans += s[i+k*cycleLen];
                if(i != 0 && i != numRows-1 && (k+1)*cycleLen-i < n){
                    ans += s[(k+1)*cycleLen-i];
                }
            }
        }
        
        return ans;
    }
};