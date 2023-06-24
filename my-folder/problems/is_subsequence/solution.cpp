class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si = 0, ti = 0;
        while(si < s.size() && ti < t.size()){
            for(; ti < t.size() && s[si] != t[ti]; ti++){
                // cout << s[si] << " " << t[ti] << endl;
            }
            if(s[si] == t[ti]){
                si++; 
                ti++;
            }
        }
        
        return si == s.size();
    }
};