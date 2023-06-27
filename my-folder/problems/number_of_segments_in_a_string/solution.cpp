class Solution {
public:
    int countSegments(string s) {
        if(s.empty()) return 0;
        
        bool lastIsSpace = true;
        int ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                lastIsSpace = true;
            }else if(lastIsSpace){
                lastIsSpace = false;
                ans++;
            }
        }
        return ans;
    }
};