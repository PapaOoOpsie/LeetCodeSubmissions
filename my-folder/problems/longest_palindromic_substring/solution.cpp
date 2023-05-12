class Solution {
public:
    string longestPalindrome(string s) {
        string t(1, '^');
        
        for(int i = 0; i < s.size(); i++){
            t += '#'; t += s[i];
        }
        t += '#'; t += '$';
        
        vector<int> p(t.size(), 0);
        int mirror = 0;
        int center = 0;
        int right = 0;
        int maxStart = 0;
        
        for(int i = 0; i < t.size(); i++){
            mirror = 2 * center - i;
            if(i < right){
                p[i] = min(p[mirror], right - i);
            }
            while(i+(1+p[i]) < t.size() && i-(1+p[i]) >= 0 && t[i+(1+p[i])] == t[i-(1+p[i])]){
                p[i]++;
            }
            if(p[i] > p[maxStart]){
                maxStart = i;
            }
            if(i+p[i] > right){
                right = i+p[i];
                center = i;
            }
        }
        
        return s.substr((maxStart-p[maxStart])/2, p[maxStart]);
    }
};