class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res = {0};
        
        for(int i = 0; i < n; ++i){
            int prependVal = 1 << i;
            int oldSize = res.size();
            for(int j = oldSize-1; j >= 0; --j){
                res.push_back(prependVal + res[j]);
            }
        }
        
        return res;
    }
};