class Solution {
public:
    int climbStairs(int n) {
        // vector<int> dp(n+1, 0);
        
        //0: padding, used when dp[2] = dp[1] + dp[0]
        // dp[0] = dp[1] = 1;
        int last1 = 1, last2 = 1;
        
        for(int i = 2; i <= n; i++){
            // dp[i] = dp[i-1] + dp[i-2];
            last2 += last1;
            swap(last1, last2);
        }
        
        // return dp[n];
        return last1;
    }
};