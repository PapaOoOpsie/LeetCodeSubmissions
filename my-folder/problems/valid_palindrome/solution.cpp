class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            while(i < s.size() && !isalnum(s[i]))i++;
            while(j >= 0 && !isalnum(s[j]))j--;
            // cout << i << " " << j << endl;
            //we have scanned the whole string
            if(i >= j) break;
            //slower
            // if(i >= s.size() || j < 0) break;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++; j--;
        }
        return true;
    }
};