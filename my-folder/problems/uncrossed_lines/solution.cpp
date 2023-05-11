class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int m = A.size();
        int n = B.size();
        
        vector<int> dp(n+1, 0);
        
        for(int i = 1; i <= m; i++){
            int dp_is1_js1 = dp[0]; 
            // cout << dp[0] << " "; //0
            for(int j = 1; j <= n; j++){
                int dp_is1_j = dp[j];
                if(A[i-1] == B[j-1]){
                    dp[j] = dp_is1_js1 + 1;
                }else{
                    dp[j] = max(dp[j-1], dp[j]);
                }
                dp_is1_js1 = dp_is1_j;
            }
        }
        
        return dp[n];
    }
};