class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n){
            // cout << n%26 << " ";
            ans.insert(ans.begin(), 'A' + (n-1)%26);
            n = (n-1)/26;
        }
        // cout << endl;
        
        return ans;
    }
};